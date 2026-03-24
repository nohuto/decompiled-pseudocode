/*
 * XREFs of ?GetCurrentRenderingRealization@CBitmapResource@@$4PPPPPPPM@A@EAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800F4750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapResource::GetCurrentRenderingRealization(__int64 a1, struct IBitmapRealization **a2)
{
  return CBitmapResource::GetCurrentRenderingRealization((CBitmapResource *)(a1 - *(int *)(a1 - 4)), a2);
}
