/*
 * XREFs of ?Release@CSnapshot@@$4PPPPPPPM@GI@EAAKXZ @ 0x180118F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSnapshot::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 104));
}
