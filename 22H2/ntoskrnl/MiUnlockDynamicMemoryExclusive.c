/*
 * XREFs of MiUnlockDynamicMemoryExclusive @ 0x14061C01C
 * Callers:
 *     MiClearPartitionPageBitMap @ 0x140659030 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiGetPhysicalMemoryRanges @ 0x140835FC8 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A2B738 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x140A2CCBC (MiRemovePhysicalMemory.c)
 *     MiUpdatePartitionLargePfnBitMap @ 0x140A452F8 (MiUpdatePartitionLargePfnBitMap.c)
 *     MmDuplicateMemory @ 0x140AAC90C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x140B49630 (MiInitializeMirroring.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
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
