/*
 * XREFs of ?Release@CNineGridBrush@@$4PPPPPPPM@KA@EAAKXZ @ 0x1800F6140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CNineGridBrush::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 160));
}
