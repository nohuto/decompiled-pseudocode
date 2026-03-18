/*
 * XREFs of ?GetRenderTargetInfo@CDDARenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x18011D9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDARenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CDDARenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4), a2);
}
