CProxyGeometry *__fastcall CProxyGeometry::`scalar deleting destructor'(CProxyGeometry *this, char a2)
{
  CProxyGeometry::~CProxyGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0xA0uLL);
    else
      operator delete(this);
  }
  return this;
}
