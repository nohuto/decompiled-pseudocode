/*
 * XREFs of MiLockDynamicMemoryExclusive @ 0x140304364
 * Callers:
 *     MiMarkHugePfnBad @ 0x1403F3074 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x1403F3428 (MiMarkHugePfnGood.c)
 *     MiGetChannelInformation @ 0x1406769AC (MiGetChannelInformation.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F428 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1408C5FDC (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x1408DB7C8 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x1409907AC (MmDuplicateMemory.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 192, 0LL);
}
