/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalbers <jalbers@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 11:53:07 by jalbers           #+#    #+#             */
/*   Updated: 2023/08/16 15:26:08 by jalbers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain*  _brain;

    public:
        Cat();
		Cat(const Cat& other);
		Cat& operator=(const Cat& other);
        ~Cat();
        void    makeSound(void) const;

};
#endif