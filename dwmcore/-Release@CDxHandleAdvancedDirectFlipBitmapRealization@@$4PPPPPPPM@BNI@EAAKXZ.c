/*
 * XREFs of ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BNI@EAAKXZ @ 0x18011EA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 472));
}
