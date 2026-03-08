/*
 * XREFs of DpiMiracastMoveChunkList @ 0x1C005FF20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C005EDC8 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

char __fastcall DpiMiracastMoveChunkList(struct MIRACAST_CHUNK_LIST **a1)
{
  MIRACAST_CHUNK_LIST::AddChunkListToTail(a1[1], *a1);
  return 1;
}
