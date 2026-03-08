/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x1403CFF54
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1403CFEC8 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpSaBinaryArrayRemove @ 0x1403D00EC (ExpSaBinaryArrayRemove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *P)
{
  ULONG MaximumProcessorCount; // eax
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  void *v15; // rbx
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // [rsp+58h] [rbp+10h]

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = MaximumProcessorCount;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(
                           (__int64)&ExSaPageGroupDescriptorArrayLock,
                           (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v18 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v18);
    if ( (unsigned __int64)&ExSaPageGroupDescriptorArrayLock - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&ExSaPageGroupDescriptorArrayLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v4, (__int64)&ExSaPageGroupDescriptorArrayLock);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  if ( (_DWORD)v5 )
  {
    v12 = 0LL;
    do
    {
      v13 = P[8];
      _BitScanReverse(&v14, v13);
      v15 = *(void **)(*(_QWORD *)(*(_QWORD *)(v12 + ExSaPageArrays) + 8LL * (v14 - 2))
                     + 8LL * ((unsigned int)v13 ^ (1 << v14))
                     + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v12 + ExSaPageArrays), v13);
      ExFreePoolWithTag(v15, 0);
      v12 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, P[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(P, 0);
}
