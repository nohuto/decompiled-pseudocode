/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x1403877A4
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x140822F28 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiDpcRuntimeHistoryHashTableAllocate(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1953002052LL);
}
