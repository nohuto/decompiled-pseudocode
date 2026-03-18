/*
 * XREFs of PspUnlockJobAssignment @ 0x140682CF0
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1406789B0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x140682C34 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobAssignment(__int64 a1)
{
  _QWORD *v2; // rax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobAssignmentLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&PspJobAssignmentLock);
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
