/*
 * XREFs of ?Release@CRenderData@@$4PPPPPPPM@BBI@EAAKXZ @ 0x1800F5DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderData::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 280));
}
