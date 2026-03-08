/*
 * XREFs of ?AddRef@CD2DBitmap@@$4PPPPPPPM@BFI@EAAKXZ @ 0x18011F4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 344));
}
