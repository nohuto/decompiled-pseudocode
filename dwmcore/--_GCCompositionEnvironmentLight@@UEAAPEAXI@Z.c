CCompositionEnvironmentLight *__fastcall CCompositionEnvironmentLight::`scalar deleting destructor'(
        CCompositionEnvironmentLight *this,
        char a2)
{
  CCompositionLight::~CCompositionLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
