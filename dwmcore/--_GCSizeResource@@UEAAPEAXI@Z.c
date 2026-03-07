CSizeResource *__fastcall CSizeResource::`scalar deleting destructor'(CSizeResource *this, char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x50uLL);
    else
      operator delete(this);
  }
  return this;
}
