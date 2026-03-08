/*
 * XREFs of ?GetRenderTargetInfo@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x180118510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CDDisplayRenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4), a2);
}
