/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 19:07:58 by aaguiler          #+#    #+#             */
/*   Updated: 2022/10/18 19:37:36 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {

private:
	std::string _name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void		announce(void);
	std::string	getName(void);

};

Zombie*		newZombie(std::string name);
void		randomChump(std::string name);

#endif
