/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@$4PPPPPPPM@HA@EAAXAEBVCRegion@@@Z @ 0x180121AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CBitmapRealization::AddDirtyRegion(__int64 a1, const struct CRegion *a2)
{
  CBitmapRealization::AddDirtyRegion((CBitmapRealization *)(a1 - *(int *)(a1 - 4) - 112), a2);
}
