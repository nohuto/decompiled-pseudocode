/*
 * XREFs of PspJobClose @ 0x1406F8760
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     PspHardDereferenceSiloWorker @ 0x14029432C (PspHardDereferenceSiloWorker.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406FEEF4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x140791E78 (PspTerminateAllProcessesInJobHierarchy.c)
 */

LONG_PTR __fastcall PspJobClose(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v4; // di
  struct _KTHREAD *CurrentThread; // rsi
  void *v7; // rdi
  __int64 v8; // r9
  LONG_PTR result; // rax

  v4 = 1;
  if ( a4 <= 1 )
  {
    CurrentThread = KeGetCurrentThread();
    _InterlockedOr((volatile signed __int32 *)(a2 + 1536), 1u);
    PspLockJobExclusive(a2, CurrentThread);
    if ( (*(_DWORD *)(a2 + 256) & 0x2000) != 0 )
    {
      if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1536), 0x1Du)
        || (*(_DWORD *)(a2 + 1536) & 0x40000000) == 0 )
      {
        v4 = 0;
      }
      PspUnlockJob(a2, CurrentThread);
      PspTerminateAllProcessesInJobHierarchy((PVOID)a2);
      PspLockJobExclusive(a2, CurrentThread);
      if ( v4 )
        PspHardDereferenceSiloWorker(a2);
    }
    ExAcquirePushLockExclusiveEx(a2 + 1248, 0LL);
    v7 = *(void **)(a2 + 552);
    *(_QWORD *)(a2 + 552) = 0LL;
    PspUnlockJobMemoryLimitsExclusive(a2, 0LL, 0LL, v8);
    result = PspUnlockJob(a2, CurrentThread);
    if ( v7 )
      return ObfDereferenceObjectWithTag(v7, 0x624A7350u);
  }
  return result;
}
