/*
 * XREFs of ?IsHardwareProtected@CDeviceTextureTarget@@$4PPPPPPPM@NI@EBA_NXZ @ 0x18011C370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsHardwareProtected(__int64 a1)
{
  return CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(a1 - *(int *)(a1 - 4) - 216));
}
