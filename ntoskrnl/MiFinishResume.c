/*
 * XREFs of MiFinishResume @ 0x1406244A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiReferencePageRuns @ 0x1402EB520 (MiReferencePageRuns.c)
 *     MiDereferencePageRunsEx @ 0x1402EBA28 (MiDereferencePageRunsEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIterateOverPartitions @ 0x140626FE0 (MiIterateOverPartitions.c)
 */

LONG __fastcall MiFinishResume(unsigned int a1)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbp
  struct _KTHREAD *v5; // rdi
  __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int SessionId; // eax
  bool v15; // zf
  unsigned int v17; // [rsp+50h] [rbp+8h]

  v2 = MiReferencePageRuns((__int64)MiSystemPartition, 0);
  CurrentThread = KeGetCurrentThread();
  v4 = v2;
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  if ( v5->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C67008, (__int64)v5)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v17 = v8;
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v11 = *SchedulerAssist;
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
      }
      while ( v12 != v11 );
      if ( (v11 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (__int64)(&v5[1].Process + 12 * v17);
    if ( (unsigned __int64)&qword_140C67008 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C67008 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67008, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C67008, v6, (__int64)&qword_140C67008);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  MiIterateOverPartitions(MiMirrorPurgePartitionPages, a1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67008, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67008);
  KeAbPostRelease((ULONG_PTR)&qword_140C67008);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v4 )
    MiDereferencePageRunsEx(v4, 1);
  _InterlockedAdd(&dword_140C69560, 0xFFFFFFFF);
  stru_140C67AE8.Parameter = (void *)-1LL;
  return KeSetEvent(&stru_140C67AD0, 0, 0);
}
