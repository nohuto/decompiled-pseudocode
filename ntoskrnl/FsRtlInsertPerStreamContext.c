/*
 * XREFs of FsRtlInsertPerStreamContext @ 0x1402C99C0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x1403CA0B0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CA3BC (ExpAcquireFannedOutPushLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

NTSTATUS __stdcall FsRtlInsertPerStreamContext(
        PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
        PFSRTL_PER_STREAM_CONTEXT Ptr)
{
  unsigned __int8 v4; // al
  void **p_AePushLock; // r15
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v8; // rbp
  __int64 v9; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v15; // eax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *p_FilterContexts; // rax
  unsigned __int8 v18; // al
  ULONG_PTR v19; // rbx
  int v20; // eax
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  signed __int32 v24; // eax
  signed __int32 v25; // ett
  struct _KTHREAD *v26; // rax
  unsigned int v27; // [rsp+50h] [rbp+8h]

  if ( PerStreamContext && (PerStreamContext->Flags2 & 2) != 0 )
  {
    v4 = *((_BYTE *)PerStreamContext + 7) >> 4;
    p_AePushLock = &PerStreamContext->AePushLock;
    if ( v4 >= 3u && (v6 = (__int64)*p_AePushLock) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v8 = KeGetCurrentThread();
      v9 = 0LL;
      _disable();
      AbEntrySummary = v8->AbEntrySummary;
      if ( v8->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v6, v8)) != 0 )
      {
        _BitScanForward(&v11, AbEntrySummary);
        v27 = v11;
        v8->AbEntrySummary = AbEntrySummary & ~(1 << v11);
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          _m_prefetchw(SchedulerAssist);
          v24 = *SchedulerAssist;
          do
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange(SchedulerAssist, v24 & 0xFFDFFFFF, v24);
          }
          while ( v25 != v24 );
          if ( (v24 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        _enable();
        v9 = (__int64)(&v8[1].Process + 12 * v27);
        if ( (unsigned __int64)(v6 - qword_140C65668) < 0x8000000000LL )
          SessionId = MmGetSessionIdEx(v8->ApcState.Process);
        else
          SessionId = -1;
        *(_DWORD *)(v9 + 8) = SessionId;
        *(_QWORD *)v9 = v6 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v9, v6);
      v15 = *(_DWORD *)(v6 + 8);
      if ( (v15 & 1) != 0 )
        ExpAcquireFannedOutPushLockExclusive(v15 & 0xFFFFFFF8, v9, v6);
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
    }
    else if ( v4 )
    {
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PerStreamContext->PushLock, 0LL);
    }
    else
    {
      ExAcquireFastMutex(PerStreamContext->FastMutex);
    }
    Flink = PerStreamContext->FilterContexts.Flink;
    p_FilterContexts = &PerStreamContext->FilterContexts;
    if ( Flink->Blink != &PerStreamContext->FilterContexts )
      __fastfail(3u);
    Ptr->Links.Blink = p_FilterContexts;
    Ptr->Links.Flink = Flink;
    Flink->Blink = &Ptr->Links;
    p_FilterContexts->Flink = &Ptr->Links;
    v18 = *((_BYTE *)PerStreamContext + 7) >> 4;
    if ( v18 < 3u )
    {
      if ( !v18 )
      {
        ExReleaseFastMutex(PerStreamContext->FastMutex);
        return 0;
      }
    }
    else
    {
      v19 = (ULONG_PTR)*p_AePushLock;
      if ( *p_AePushLock )
      {
        v20 = *(_DWORD *)(v19 + 8);
        if ( (v20 & 1) != 0 )
        {
          ExpReleaseFannedOutPushLockExclusive(v20 & 0xFFFFFFF8);
        }
        else if ( (*(_DWORD *)(v19 + 12) & 0xF0000u) < 0xF0000 )
        {
          *(_DWORD *)(v19 + 12) += 0x10000;
        }
        ExReleasePushLockEx((__int64 *)v19, 2uLL);
        KeAbPostRelease(v19);
        v21 = KeGetCurrentThread();
        v22 = v21->KernelApcDisable++ == -1;
        if ( v22
          && ($C71981A45BEB2B45F82C232A7085991E *)v21->ApcState.ApcListHead[0].Flink != &v21->152
          && !v21->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        return 0;
      }
    }
    ExReleasePushLockEx((__int64 *)&PerStreamContext->PushLock, 0LL);
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    return 0;
  }
  return -1073741808;
}
