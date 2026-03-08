/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@WFI@EAAKXZ @ 0x180117D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - 88));
}
