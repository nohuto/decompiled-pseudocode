/*
 * XREFs of PspJobClose @ 0x1406D77F0
 * Callers:
 *     <none>
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020B10C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140687540 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406D78E0 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FFED4 (PspLockJobExclusive.c)
 */

LONG_PTR __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi
  LONG_PTR result; // rax

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1512), 1u);
    PspLockJobExclusive(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1512), 0x1Du)
        || (*(_DWORD *)(a2 + 1512) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PRKEVENT)a2);
      PspLockJobExclusive(a2, CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1224, 0LL);
    v7 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL);
    result = PspUnlockJob(a2, CurrentThread);
    if ( v7 )
      return ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
  return result;
}
