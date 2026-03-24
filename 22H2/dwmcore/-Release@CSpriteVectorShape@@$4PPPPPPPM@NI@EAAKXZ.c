/*
 * XREFs of ?Release@CSpriteVectorShape@@$4PPPPPPPM@NI@EAAKXZ @ 0x1800F4FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSpriteVectorShape::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 216));
}
