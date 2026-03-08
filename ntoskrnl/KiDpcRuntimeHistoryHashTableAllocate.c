/*
 * XREFs of KiDpcRuntimeHistoryHashTableAllocate @ 0x140380084
 * Callers:
 *     KiInitializeSingleDpcRuntimeHistoryHashTable @ 0x14080F2A0 (KiInitializeSingleDpcRuntimeHistoryHashTable.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall KiDpcRuntimeHistoryHashTableAllocate(__int64 a1)
{
  return ExAllocatePool2(64LL, a1, 1953002052LL);
}
