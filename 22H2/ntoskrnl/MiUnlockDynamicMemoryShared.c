/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1402F3E10
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140283820 (MiCoalesceFreeLargePages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14052F870 (MmMarkPhysicalMemoryAsBad.c)
 *     MiAddPartitionHugeRange @ 0x1405326D8 (MiAddPartitionHugeRange.c)
 *     PfpPfnPrioRequest @ 0x1406402D0 (PfpPfnPrioRequest.c)
 *     MiGetPhysicalMemoryRanges @ 0x14076F428 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x1408C4EE0 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x1408C5D24 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x1408D1B2C (MmRelocatePfnList.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  char result; // al
  __int64 v5; // rcx

  v2 = (signed __int64 *)(a1 + 192);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 192), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  result = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
    return KiCheckForKernelApcDelivery(v5);
  return result;
}
