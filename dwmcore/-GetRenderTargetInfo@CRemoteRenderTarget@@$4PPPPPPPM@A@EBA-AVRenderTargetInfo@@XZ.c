/*
 * XREFs of ?GetRenderTargetInfo@CRemoteRenderTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x1801185D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  return CRemoteRenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4), a2);
}
