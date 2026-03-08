/*
 * XREFs of ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@CBA@EAAKXZ @ 0x18011ECD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 528));
}
