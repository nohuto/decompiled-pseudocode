CCompositionSkyBoxBrush *__fastcall CCompositionSkyBoxBrush::`scalar deleting destructor'(
        CCompositionSkyBoxBrush *this,
        char a2)
{
  CCompositionSkyBoxBrush::~CCompositionSkyBoxBrush(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
