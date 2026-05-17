/*
 * XREFs of RtlPrepareForProcessCloning @ 0x18009BB80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     LdrpCompleteProcessCloning @ 0x1800D49F8 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D521C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5264 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5920 (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DF2C4 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF36C (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2724 (RtlLockHeapManagerForCloning.c)
 */

__int64 RtlPrepareForProcessCloning()
{
  struct _RTLP_FLS_CONTEXT *v0; // rcx
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // rdx
  int v5; // ebx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _RTLP_FLS_CONTEXT *v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9

  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    return 3221225876LL;
  LdrpDrainWorkQueue(0);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
  RtlpFlsClonePrepare(v0);
  RtlEnterCriticalSection((__int64)&FastPebLock);
  LdrpLockTlsDelayedReclaimTable();
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v1, v2, v3);
  LdrForkMrdata(0LL);
  v5 = RtlLockHeapManagerForCloning();
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v4, v6, v7);
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v12, v13, v14);
    result = 0LL;
    LdrpForkInProgress = 1;
  }
  else
  {
    LdrForkMrdata(2LL);
    RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LdrpUnlockTlsDelayedReclaimTable(0LL);
    RtlLeaveCriticalSection((__int64)&FastPebLock, v8, v9);
    RtlpFlsCloneComplete(v10, 0);
    LdrpCompleteProcessCloning(0LL);
    return (unsigned int)v5;
  }
  return result;
}
