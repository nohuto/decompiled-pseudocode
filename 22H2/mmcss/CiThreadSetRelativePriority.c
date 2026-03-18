/*
 * XREFs of CiThreadSetRelativePriority @ 0x1C000AA20
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000A760 (CiDispatchFastIoDeviceControl.c)
 * Callees:
 *     CiSchedulerCommitPriority @ 0x1C0002720 (CiSchedulerCommitPriority.c)
 *     CiThreadUpdatePriorities @ 0x1C000B1D0 (CiThreadUpdatePriorities.c)
 */

__int64 __fastcall CiThreadSetRelativePriority(__int64 a1, unsigned __int8 a2)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  PEPROCESS ThreadProcess; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = -1073741811;
  if ( (unsigned __int8)(a2 + 2) <= 4u )
  {
    v5 = *(_QWORD *)(a1 + 64);
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
    *(_QWORD *)(a1 + 24) = KeGetCurrentThread();
    if ( (*(_BYTE *)(a1 + 148) & 2) == 0 )
    {
      ThreadProcess = PsGetThreadProcess(*(PETHREAD *)(a1 + 96));
      if ( ThreadProcess == (PEPROCESS)PsGetCurrentProcess(v7) )
      {
        CiThreadUpdatePriorities(a1, v5, a2);
        CiSchedulerCommitPriority(v8);
        v4 = 0;
      }
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 16, 0LL);
  }
  return v4;
}
