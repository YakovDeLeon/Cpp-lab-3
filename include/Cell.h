#ifndef _CELL_H_
#define _CELL_H_

#include "Object.h"
class Ocean;

class Cell
{
	friend Ocean;
private:
	Pair crd;
	Object *obj;
	Ocean *ocean;
public:
	explicit Cell(Pair p = { 0, 0 }, Ocean* oc = nullptr) :
		crd(p),
		obj(nullptr),
		ocean(oc) {}
	~Cell();
	void init(Pair p, Ocean* oc);
	Object* getObject() const;
	Ocean* getOcean() const;
	void setObject(Object*);
	Pair getPair() const;
	void setPair(Pair crd);
	void killMe();

};



#endif