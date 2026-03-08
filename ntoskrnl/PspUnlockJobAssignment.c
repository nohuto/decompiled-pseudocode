/*
 * XREFs of PspUnlockJobAssignment @ 0x140700950
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1406F6DC0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspJobAssignmentLock);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&PspJobAssignmentLock);
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
    {
      v2 = (_QWORD *)(a1 + 152);
      if ( (_QWORD *)*v2 != v2 )
        LOBYTE(v2) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v2;
}
