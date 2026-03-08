/*
 * XREFs of ?GetAdapterLuid@CRenderTargetBitmap@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x18011F2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CRenderTargetBitmap::GetAdapterLuid(__int64 a1, struct _LUID *a2)
{
  return CRenderTargetBitmap::GetAdapterLuid((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
