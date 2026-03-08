/*
 * XREFs of ?Release@CSectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x18011DD50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 416));
}
