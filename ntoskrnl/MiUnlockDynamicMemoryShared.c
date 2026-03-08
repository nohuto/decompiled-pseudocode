/*
 * XREFs of MiUnlockDynamicMemoryShared @ 0x1402DC340
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MmQueryPfnList @ 0x1406E0A60 (MmQueryPfnList.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiGetPhysicalMemoryRanges @ 0x140836318 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  _QWORD *v4; // rax

  v2 = (signed __int64 *)(a1 + 216);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  LOBYTE(v4) = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
