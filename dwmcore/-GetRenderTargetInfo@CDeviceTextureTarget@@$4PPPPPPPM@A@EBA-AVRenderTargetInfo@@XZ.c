/*
 * XREFs of ?GetRenderTargetInfo@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011C2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceTextureTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CDeviceTextureTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4), a2);
}
