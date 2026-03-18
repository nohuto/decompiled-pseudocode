/*
 * XREFs of ?Release@CContainerVectorShape@@$4PPPPPPPM@II@EAAKXZ @ 0x18011CE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContainerVectorShape::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 136));
}
