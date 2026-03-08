/*
 * XREFs of ?IsDisplayTarget@CDeviceTextureTarget@@UEBA_NXZ @ 0x180107BAC
 * Callers:
 *     ?IsDisplayTarget@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011C350 (-IsDisplayTarget@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsDisplayTarget(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this - 127);
}
