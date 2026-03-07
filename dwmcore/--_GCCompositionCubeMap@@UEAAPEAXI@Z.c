CCompositionCubeMap *__fastcall CCompositionCubeMap::`scalar deleting destructor'(CCompositionCubeMap *this, char a2)
{
  CCompositionCubeMap::~CCompositionCubeMap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
