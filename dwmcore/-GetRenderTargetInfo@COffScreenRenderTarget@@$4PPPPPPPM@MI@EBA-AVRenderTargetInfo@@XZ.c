/*
 * XREFs of ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@MI@EBA?AVRenderTargetInfo@@XZ @ 0x1801185B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::GetRenderTargetInfo(__int64 a1)
{
  return COffScreenRenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4) - 200);
}
