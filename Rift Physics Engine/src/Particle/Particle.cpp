#include "Particle.h"

Particle::Particle()
{
	this->position = RiftPhysics::Vec3(0.0f, 0.0f, 0.0f);
	this->velocity = RiftPhysics::Vec3(0.0f, 0.0f, 0.0f);
	this->acceleration = RiftPhysics::Vec3(0.0f, 0.0f, 0.0f);

	this->damping = 0.995;
	setMass(10);
}

Particle::Particle(RiftPhysics::Vec3 position, RiftPhysics::Vec3 velocity, RiftPhysics::Vec3 acceleration, float mass, float damping)
{
    this->position = position;
    this->velocity = velocity;
    this->acceleration = acceleration;

    this->damping = damping;
    setMass(mass);
}

void Particle::setMass(const float newMass)
{
    // Ensure non-zero mass to avoid divide-by-zero issues
    if (newMass != 0.0) {
        mass = newMass;
        inverseMass = 1.0 / newMass;
    }
    else {
        mass = 1;
        inverseMass = 1.0 / mass;
    }
}

float Particle::getMass() const
{
    return this->mass;
}

float Particle::getInverseMass() const
{
    return this->inverseMass;
}