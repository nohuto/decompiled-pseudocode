/*
 * XREFs of ?Release@CColorKeyBitmapRealization@@WIA@EAAKXZ @ 0x18011DE30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - 128));
}
