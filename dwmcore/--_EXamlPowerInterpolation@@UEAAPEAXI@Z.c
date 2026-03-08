/*
 * XREFs of ??_EXamlPowerInterpolation@@UEAAPEAXI@Z @ 0x18001F200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

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
