/*
 * XREFs of ?Release@CProjectedShadow@@$4PPPPPPPM@BJA@EAAKXZ @ 0x1800F61E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CProjectedShadow::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 400));
}
