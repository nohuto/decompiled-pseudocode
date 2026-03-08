/*
 * XREFs of ?AddRef@CCompositionSurfaceBitmap@@$4PPPPPPPM@NA@EAAKXZ @ 0x180117D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddRef(__int64 a1)
{
  return CDxHandleBitmapRealization::AddRef((CDxHandleBitmapRealization *)(a1 - *(int *)(a1 - 4) - 208));
}
