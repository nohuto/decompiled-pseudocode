/*
 * XREFs of ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x1800125F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCompositionSpotLight@@UEAA@XZ @ 0x180012634 (--1CCompositionSpotLight@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::`scalar deleting destructor'(
        CCompositionSpotLight *this,
        char a2)
{
  CCompositionSpotLight::~CCompositionSpotLight(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      __global_delete(this, 0x198uLL);
    else
      operator delete(this);
  }
  return this;
}
