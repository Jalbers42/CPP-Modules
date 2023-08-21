/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:41:36 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/21 18:10:08 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure")
{
}

Cure::Cure(const Cure& other)
    : AMateria("cure")
{
    (void)other;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName()<< "'s wounds *" << std::endl;  
}

AMateria* Cure::clone() const
{
    Cure* cure_clone = new Cure(*this);
    return (cure_clone);
}