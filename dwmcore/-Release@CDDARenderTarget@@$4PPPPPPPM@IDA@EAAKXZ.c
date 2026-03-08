/*
 * XREFs of ?Release@CDDARenderTarget@@$4PPPPPPPM@IDA@EAAKXZ @ 0x180119870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::Release(__int64 a1)
{
  return CAtlasedRectsMesh::Release((CAtlasedRectsMesh *)(a1 - *(int *)(a1 - 4) - 2096));
}
