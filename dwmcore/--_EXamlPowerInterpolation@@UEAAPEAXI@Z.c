XamlPowerInterpolation *__fastcall XamlPowerInterpolation::`vector deleting destructor'(
        XamlPowerInterpolation *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x28uLL);
    else
      operator delete(this);
  }
  return this;
}
