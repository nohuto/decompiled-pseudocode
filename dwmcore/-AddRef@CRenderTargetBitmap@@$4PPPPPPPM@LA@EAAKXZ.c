/*
 * XREFs of ?AddRef@CRenderTargetBitmap@@$4PPPPPPPM@LA@EAAKXZ @ 0x18011E5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 176));
}
