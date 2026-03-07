CColorTransformResource *__fastcall CColorTransformResource::`scalar deleting destructor'(
        CColorTransformResource *this,
        char a2)
{
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
