#pragma once

#include "../Math/Math.h"

	/**
	 * @brief A particle is the simplest opbject that can be simulated in a physics system. This class aims to replicate a particle.
	*/
class Particle
{
	public:

		Particle();

		Particle(RiftPhysics::Vec3 position, RiftPhysics::Vec3 velocity, RiftPhysics::Vec3 acceleration, float mass, float damping);
		/**
		 * @brief The linear position of a particle in world space
		*/
	RiftPhysics::Vec3 position;

		/**
		* Holds the linear velocity of the particle in
		* world space.
		*/
	RiftPhysics::Vec3 velocity;

		/**
		 * @brief Holds the acceleration for the particle. This is primarly used to set acceleration due to gravity and other applied forces
		*/
	RiftPhysics::Vec3 acceleration;

		/**
		 * @brief 
		*/
	float damping;

		/**
		 * @brief The inverse of mass is defined as 1/m where m is the mass of the object.
		 * Storing the inverse of mass removes the need to define the inverse constantly 
		*/

	void setMass(const float mass);
	float getMass() const;

	float getInverseMass() const;
private:
	float mass;
	float inverseMass;

};
