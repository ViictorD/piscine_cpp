#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{

private:
	
	std::string		_type;
	unsigned int	xp_;

	AMateria(void);

public:

	AMateria(std::string const & type);
	AMateria(AMateria const &src);
	virtual ~AMateria();
	AMateria	&operator=(AMateria const &rhs);
	std::string const & getType() const;
	unsigned int getXP() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);

};

#endif
