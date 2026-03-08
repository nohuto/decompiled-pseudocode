/*
 * XREFs of ?Release@CGenericInk@@$4PPPPPPPM@BKA@EAAKXZ @ 0x180118D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGenericInk::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 416));
}
