/*
 * XREFs of CmpNotifyMachineHiveLoaded @ 0x1403887C0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int32 __fastcall CmpNotifyMachineHiveLoaded(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rbx
  __int64 v4; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  wchar_t **v10; // rdi
  wchar_t *v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // rtt
  __int64 v16; // rax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  unsigned int v19; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v2 = 23LL * a1;
  v3 = (volatile signed __int32 *)&CmpMachineHiveList[v2 + 18];
  v4 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&CmpMachineHiveList[v2 + 18], (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v19 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v19);
    if ( (unsigned __int64)v3 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&CmpMachineHiveList[v2 + 18],
      v4,
      (__int64)&CmpMachineHiveList[v2 + 18]);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  v10 = &CmpMachineHiveList[v2 + 19];
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 == (wchar_t *)v10 )
      break;
    v16 = *(_QWORD *)v11;
    if ( *((wchar_t ***)v11 + 1) != v10 || *(wchar_t **)(v16 + 8) != v11 )
      __fastfail(3u);
    *v10 = (wchar_t *)v16;
    *(_QWORD *)(v16 + 8) = v10;
    *((_BYTE *)v11 + 109) = 0;
    CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(v11 + 8));
  }
  _m_prefetchw((const void *)v3);
  v12 = *(_QWORD *)v3;
  v13 = *(_QWORD *)v3 - 16LL;
  if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (v12 & 2) != 0
    || (v14 = *(_QWORD *)v3, v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v13, v12)) )
  {
    ExfReleasePushLock(&CmpMachineHiveList[v2 + 18]);
  }
  return KeAbPostRelease((ULONG_PTR)&CmpMachineHiveList[v2 + 18]);
}
