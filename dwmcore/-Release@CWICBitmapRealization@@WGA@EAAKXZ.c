/*
 * XREFs of ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x18011DE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - 96));
}
