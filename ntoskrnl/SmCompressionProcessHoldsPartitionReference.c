/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x1405C76C0
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL) + 2008LL) == 0LL;
}
