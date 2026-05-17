/*
 * XREFs of RtlCloneUserProcess @ 0x1800D6340
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D5FD0 (RtlpProcessReflectionStartup.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     RtlWakeAllConditionVariable @ 0x18004C9D0 (RtlWakeAllConditionVariable.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x18007F180 (RtlAcquireReleaseSRWLockExclusive.c)
 *     RtlpCreateUserProcess @ 0x180089000 (RtlpCreateUserProcess.c)
 *     LdrpCompleteProcessCloning @ 0x1800D49F8 (LdrpCompleteProcessCloning.c)
 *     LdrpLockTlsDelayedReclaimTable @ 0x1800D521C (LdrpLockTlsDelayedReclaimTable.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5264 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     LdrForkMrdata @ 0x1800D5920 (LdrForkMrdata.c)
 *     ?RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800DF2C4 (-RtlpFlsCloneComplete@@YAXPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     ?RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DF36C (-RtlpFlsClonePrepare@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2724 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F30A8 (RtlUnlockHeapManagerForCloning.c)
 */

__int64 __fastcall RtlCloneUserProcess(int a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  int v9; // esi
  int v10; // r14d
  int v11; // ebp
  int v12; // edi
  struct _RTLP_FLS_CONTEXT *v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  int v25; // ebx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _RTLP_FLS_CONTEXT *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned int UserProcess; // eax
  unsigned int v37; // ebp
  unsigned int v38; // ebx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  unsigned __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  struct _RTLP_FLS_CONTEXT *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // r8
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r9
  _QWORD v50[2]; // [rsp+30h] [rbp-68h] BYREF
  __int128 v51; // [rsp+40h] [rbp-58h]
  __int128 v52; // [rsp+50h] [rbp-48h]
  __int64 v53; // [rsp+60h] [rbp-38h]

  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225711LL;
  v9 = 2;
  v10 = a1 & 1;
  v11 = 2 * (a1 & 2);
  v12 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      return (unsigned int)-1073741420;
    LdrpDrainWorkQueue(0);
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    RtlpFlsClonePrepare(v13);
    RtlEnterCriticalSection((__int64)&FastPebLock);
    LdrpLockTlsDelayedReclaimTable(v15, v14, v16, v17);
    RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpProtectedPoliciesSRWLock, v18, v19, v20);
    LdrForkMrdata(0, v21, v22, v23);
    v25 = RtlLockHeapManagerForCloning();
    if ( v25 >= 0 )
    {
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlCriticalSectionLock, v24, v26, v27);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpForkActiveLock, v33, v34, v35);
      v25 = 0;
      LdrpForkInProgress = 1;
    }
    else
    {
      LdrForkMrdata(2, v24, v26, v27);
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      LdrpUnlockTlsDelayedReclaimTable(0);
      RtlLeaveCriticalSection((__int64)&FastPebLock, v28, v29);
      RtlpFlsCloneComplete(v30, 0);
      LdrpCompleteProcessCloning(0, v31, v32);
    }
    if ( v25 < 0 )
      return (unsigned int)v25;
  }
  v53 = 0LL;
  v50[0] = 1LL;
  v50[1] = a2;
  v51 = a3;
  v52 = a4;
  UserProcess = RtlpCreateUserProcess(0LL, 0LL, v11, v10, (__int64)v50, a5);
  v37 = UserProcess;
  if ( !v12 )
  {
    if ( UserProcess == 297 )
    {
      RtlCriticalSectionLock = 1LL;
      v38 = 1;
      v9 = 1;
      qword_18016C0F0 = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
      dword_18016C0E8 = -2;
      dword_18016C0EC = 1;
      qword_18016C0F8 = 0LL;
    }
    else
    {
      LdrpForkInProgress = 0;
      v38 = 0;
      RtlReleaseSRWLockExclusive(&LdrpForkActiveLock);
    }
    RtlReleaseSRWLockExclusive(&RtlCriticalSectionLock);
    LdrForkMrdata(v9, v39, v40, v41);
    if ( v9 == 1 )
      RtlpProtectedPoliciesSRWLock = 1LL;
    else
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    RtlUnlockHeapManagerForCloning(v38);
    LdrpUnlockTlsDelayedReclaimTable(v38);
    RtlLeaveCriticalSection((__int64)&FastPebLock, v42, v43);
    RtlpFlsCloneComplete(v44, v38);
    LdrpCompleteProcessCloning(v38, v45, v46);
    if ( v38 )
    {
      LdrpForkInProgress = 0;
      RtlAcquireReleaseSRWLockExclusive(&LdrpForkActiveLock, v47, v48, v49);
      RtlWakeAllConditionVariable(&LdrpForkConditionVariable);
    }
  }
  return v37;
}
