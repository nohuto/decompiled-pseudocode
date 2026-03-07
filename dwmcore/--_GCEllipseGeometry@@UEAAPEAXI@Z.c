CEllipseGeometry *__fastcall CEllipseGeometry::`scalar deleting destructor'(CEllipseGeometry *this, char a2)
{
  CGeometry::~CGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA0uLL);
    else
      operator delete(this);
  }
  return this;
}
