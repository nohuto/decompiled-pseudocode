/*
 * XREFs of ?Release@CPrimitiveGroup@@$4PPPPPPPM@CJI@EAAKXZ @ 0x180118EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPrimitiveGroup::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 664));
}
