/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x140619B70
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x1406569F0 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiGetPhysicalMemoryRanges @ 0x140836318 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140A42624 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140AA96DC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B3AF20 (MiInitializeMirroring.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDynamicMemoryExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *v4; // rax

  v3 = a1 + 216;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 216));
  LOBYTE(v4) = KeAbPostRelease(v3);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
