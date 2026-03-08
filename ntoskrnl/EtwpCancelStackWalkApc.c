/*
 * XREFs of EtwpCancelStackWalkApc @ 0x1405FD710
 * Callers:
 *     <none>
 * Callees:
 *     EtwpFinalizePendingApc @ 0x140460334 (EtwpFinalizePendingApc.c)
 */

void __fastcall EtwpCancelStackWalkApc(__int64 a1)
{
  EtwpFinalizePendingApc(*(unsigned int **)(a1 + 56), a1);
}
