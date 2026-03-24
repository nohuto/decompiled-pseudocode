/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1402FFBDC
 * Callers:
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x1405326D8 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406402D0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F428 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C5D24 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D1B2C (MmRelocatePfnList.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquirePushLockSharedEx(a1 + 192, 0LL);
}
