/*
 * XREFs of ?Release@CBitmapResource@@$4PPPPPPPM@FA@EAAKXZ @ 0x1800F4D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapResource::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 80));
}
