/*
 * XREFs of ?GetRenderTargetInfo@COffScreenRenderTarget@@$4PPPPPPPM@GI@EBA?AVRenderTargetInfo@@XZ @ 0x180118590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::GetRenderTargetInfo(__int64 a1)
{
  return COffScreenRenderTarget::GetRenderTargetInfo(a1 - *(int *)(a1 - 4) - 104);
}
