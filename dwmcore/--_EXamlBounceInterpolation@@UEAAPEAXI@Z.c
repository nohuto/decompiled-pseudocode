/*
 * XREFs of ??_EXamlBounceInterpolation@@UEAAPEAXI@Z @ 0x180264240
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

XamlBounceInterpolation *__fastcall XamlBounceInterpolation::`vector deleting destructor'(
        XamlBounceInterpolation *this,
        char a2)
{
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this);
    else
      operator delete(this);
  }
  return this;
}
