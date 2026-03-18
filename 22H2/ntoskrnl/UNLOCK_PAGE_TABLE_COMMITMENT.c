/*
 * XREFs of UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140289A54
 * Callers:
 *     MmAssignProcessToJob @ 0x1406A0694 (MmAssignProcessToJob.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1406FA960 (MiInsertVadCharges.c)
 *     MiFreeToSubAllocatedRegion @ 0x14076F194 (MiFreeToSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1407CD0F4 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 */

int __fastcall UNLOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  v3 = a2 + 1232;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1232);
  LODWORD(v4) = KeAbPostRelease(v3);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LODWORD(v4) = KiCheckForKernelApcDelivery(v6, v5, v7, v8);
  }
  return (int)v4;
}
