/*
 * XREFs of ?AddRef@CD2DBitmap@@WHA@EAAKXZ @ 0x18011BF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - 112));
}
