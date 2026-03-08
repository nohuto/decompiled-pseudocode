/*
 * XREFs of ?Release@CGdiSpriteBitmap@@$4PPPPPPPM@BOA@EAAKXZ @ 0x180119BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 480));
}
