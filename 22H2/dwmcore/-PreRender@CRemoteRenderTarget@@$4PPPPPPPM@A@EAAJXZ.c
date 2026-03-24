/*
 * XREFs of ?PreRender@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F4A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::PreRender(__int64 a1)
{
  return CRemoteRenderTarget::PreRender((CDesktopTree **)(a1 - *(int *)(a1 - 4)));
}
