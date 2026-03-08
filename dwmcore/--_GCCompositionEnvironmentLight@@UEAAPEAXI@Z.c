/*
 * XREFs of ??_GCCompositionEnvironmentLight@@UEAAPEAXI@Z @ 0x18026ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180012668 (--1CCompositionLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

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
