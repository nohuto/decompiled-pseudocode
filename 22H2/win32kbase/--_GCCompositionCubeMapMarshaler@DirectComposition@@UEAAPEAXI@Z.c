/*
 * XREFs of ??_GCCompositionCubeMapMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D4010
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ??1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01F3F44 (--1CCompositionCubeMapMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CCompositionCubeMapMarshaler *__fastcall DirectComposition::CCompositionCubeMapMarshaler::`scalar deleting destructor'(
        DirectComposition::CCompositionCubeMapMarshaler *this,
        char a2)
{
  DirectComposition::CCompositionCubeMapMarshaler::~CCompositionCubeMapMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
