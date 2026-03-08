/*
 * XREFs of ?DebugIsActive@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011C1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::DebugIsActive(__int64 a1)
{
  return CDeviceTextureTarget::DebugIsActive((CDeviceTextureTarget *)(a1 - *(int *)(a1 - 4)));
}
