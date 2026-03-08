/*
 * XREFs of ExpSaAllocatorAllocate @ 0x140296390
 * Callers:
 *     ExSaAllocate @ 0x1402962FC (ExSaAllocate.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029661C (ExpSaPageGroupAllocateMemory.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorOptimizeList @ 0x1403CFEC8 (ExpSaAllocatorOptimizeList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpSaAllocatorAllocate(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 Memory; // rdi
  unsigned int v4; // r15d
  char v6; // r12
  __int64 v7; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  __int64 *v13; // rbp
  __int64 *v14; // r14
  volatile signed __int32 *v15; // r15
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 *v23; // rax
  struct _KTHREAD *v24; // r15
  __int64 v25; // r14
  unsigned int v26; // eax
  unsigned int v27; // ecx
  struct _KPRCB *v28; // rcx
  signed __int32 *v29; // r8
  signed __int32 v30; // eax
  signed __int32 v31; // ett
  int v32; // eax
  __int64 *v33; // rcx
  unsigned int v35; // [rsp+90h] [rbp+18h]
  unsigned int v36; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Memory = -1LL;
  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v35 = v9;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&CurrentThread[1].Process + 12 * v35);
    if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, 0, v7, BugCheckParameter2);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v13 = (__int64 *)(BugCheckParameter2 + 8);
  do
  {
    v14 = (__int64 *)*v13;
    if ( (__int64 *)*v13 != v13 )
    {
      while ( 1 )
      {
        Memory = ExpSaPageGroupAllocateMemory(v14, v4);
        if ( Memory != -1 )
          break;
        v14 = (__int64 *)*v14;
        if ( v14 == v13 )
          goto LABEL_26;
      }
      v15 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
      if ( !*((_DWORD *)v14 + 9) )
        _InterlockedOr(v15, 2u);
      goto LABEL_15;
    }
LABEL_26:
    v19 = (__int64 *)*v13;
    if ( !v6 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      v24 = KeGetCurrentThread();
      v25 = 0LL;
      _disable();
      v26 = v24->AbEntrySummary;
      if ( v24->AbEntrySummary || (v26 = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, v24)) != 0 )
      {
        _BitScanForward(&v27, v26);
        v36 = v27;
        v24->AbEntrySummary = v26 & ~(1 << v27);
        v28 = KeGetCurrentPrcb();
        v29 = (signed __int32 *)v28->SchedulerAssist;
        if ( v29 )
        {
          _m_prefetchw(v29);
          v30 = *v29;
          do
          {
            v31 = v30;
            v30 = _InterlockedCompareExchange(v29, v30 & 0xFFDFFFFF, v30);
          }
          while ( v31 != v30 );
          if ( (v30 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v28);
        }
        _enable();
        v25 = (__int64)(&v24[1].Process + 12 * v36);
        if ( BugCheckParameter2 - qword_140C65668 >= 0x8000000000LL )
          v32 = -1;
        else
          v32 = MmGetSessionIdEx(v24->ApcState.Process);
        *(_DWORD *)(v25 + 8) = v32;
        *(_QWORD *)v25 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v25, BugCheckParameter2);
      v4 = a2;
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
    }
    v6 = 1;
  }
  while ( v19 != (__int64 *)*v13 );
  v15 = (volatile signed __int32 *)(BugCheckParameter2 + 64);
  v20 = *(unsigned int *)(BugCheckParameter2 + 64);
  LOBYTE(v20) = v20 & 1;
  v21 = ExpSaPageGroupDescriptorAllocate(BugCheckParameter2, v20);
  v22 = v21;
  if ( v21 )
  {
    Memory = ExpSaPageGroupAllocateMemory(v21, a2);
    if ( *(_DWORD *)(v22 + 36) )
    {
      *(_DWORD *)(v22 + 40) = 0;
      v23 = (__int64 *)*v13;
      if ( *(__int64 **)(*v13 + 8) == v13 )
      {
        *(_QWORD *)v22 = v23;
        *(_QWORD *)(v22 + 8) = v13;
        v23[1] = v22;
        *v13 = v22;
        goto LABEL_15;
      }
LABEL_60:
      __fastfail(3u);
    }
    *(_DWORD *)(v22 + 40) = 1;
    v33 = *(__int64 **)(BugCheckParameter2 + 32);
    if ( *v33 != BugCheckParameter2 + 24 )
      goto LABEL_60;
    *(_QWORD *)v22 = BugCheckParameter2 + 24;
    *(_QWORD *)(v22 + 8) = v33;
    *v33 = v22;
    *(_QWORD *)(BugCheckParameter2 + 32) = v22;
LABEL_15:
    if ( (*v15 & 2) != 0 )
    {
      if ( !v6 && _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 1LL, 17LL) != 17 )
      {
LABEL_17:
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        goto LABEL_19;
      }
      ExpSaAllocatorOptimizeList(BugCheckParameter2);
    }
    else if ( !v6 )
    {
      goto LABEL_17;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
LABEL_19:
  KeAbPostRelease(BugCheckParameter2);
  return Memory;
}
