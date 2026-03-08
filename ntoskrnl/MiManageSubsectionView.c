/*
 * XREFs of MiManageSubsectionView @ 0x140335DC0
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiPostInsertVad @ 0x1402D5DE4 (MiPostInsertVad.c)
 *     MmMapViewInSystemCache @ 0x140334FD0 (MmMapViewInSystemCache.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiReleaseSessionDriverCharges @ 0x14067FD74 (MiReleaseSessionDriverCharges.c)
 *     MiConstructLoaderEntry @ 0x14072CE24 (MiConstructLoaderEntry.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiManageSubsectionView(__int64 *a1, _QWORD *a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  struct _KTHREAD *v8; // rbp
  __int64 v9; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v15; // esi
  int v16; // esi
  int v17; // esi
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v21; // rax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 v25; // rcx
  _QWORD *v26; // rax
  unsigned int v28; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v5 = *a1;
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  v9 = 0LL;
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  if ( v8->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v5 + 104, v8)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v28 = v11;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v23 = *SchedulerAssist;
      do
      {
        v24 = v23;
        v23 = _InterlockedCompareExchange(SchedulerAssist, v23 & 0xFFDFFFFF, v23);
      }
      while ( v24 != v23 );
      if ( (v23 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v9 = (__int64)(&v8[1].Process + 12 * v28);
    if ( (unsigned __int64)(v5 + 104 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v9 + 8) = SessionId;
    *(_QWORD *)v9 = (v5 + 104) & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v5 + 104), v9, v5 + 104);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v15 = a3 - 1;
  if ( !v15 )
  {
    v25 = a1[10];
    v26 = a1 + 10;
    if ( *(__int64 **)(v25 + 8) != a1 + 10 )
      goto FatalListEntryError_31;
    goto LABEL_28;
  }
  v16 = v15 - 1;
  if ( !v16 )
    goto LABEL_15;
  v17 = v16 - 1;
  if ( !v17 )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x400) != 0 )
      goto LABEL_18;
    v25 = *(_QWORD *)(v5 + 8);
    v26 = (_QWORD *)(v5 + 8);
    if ( *(_QWORD *)(v25 + 8) != v5 + 8 )
      goto FatalListEntryError_31;
LABEL_28:
    *a2 = v25;
    a2[1] = v26;
    *(_QWORD *)(v25 + 8) = a2;
    *v26 = a2;
    goto LABEL_18;
  }
  if ( v17 == 1 && (*(_DWORD *)(v5 + 56) & 0x400) == 0 )
  {
LABEL_15:
    v18 = *a2;
    v19 = (_QWORD *)a2[1];
    if ( *(_QWORD **)(*a2 + 8LL) == a2 && (_QWORD *)*v19 == a2 )
    {
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      goto LABEL_18;
    }
FatalListEntryError_31:
    __fastfail(3u);
  }
LABEL_18:
  v20 = KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 104));
  LOBYTE(v21) = KeAbPostRelease(v5 + 104);
  if ( v20->SpecialApcDisable++ == -1 )
  {
    v21 = &v20->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != v21 )
      LOBYTE(v21) = KiCheckForKernelApcDelivery();
  }
  return (char)v21;
}
