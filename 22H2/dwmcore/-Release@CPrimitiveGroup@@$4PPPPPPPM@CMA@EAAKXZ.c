/*
 * XREFs of ?Release@CPrimitiveGroup@@$4PPPPPPPM@CMA@EAAKXZ @ 0x1800F4F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPrimitiveGroup::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 704));
}
