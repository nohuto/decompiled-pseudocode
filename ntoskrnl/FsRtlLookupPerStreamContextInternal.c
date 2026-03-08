/*
 * XREFs of FsRtlLookupPerStreamContextInternal @ 0x140241910
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockSharedEx @ 0x140241CF0 (ExfReleasePushLockSharedEx.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1403C8A74 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpTryExpandAutoExpandPushLock @ 0x1403CF2A8 (ExpTryExpandAutoExpandPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

PFSRTL_PER_STREAM_CONTEXT __stdcall FsRtlLookupPerStreamContextInternal(
        PFSRTL_ADVANCED_FCB_HEADER StreamContext,
        PVOID OwnerId,
        PVOID InstanceId)
{
  unsigned __int8 v4; // al
  __int64 AePushLock; // rdi
  struct _KTHREAD *v8; // rax
  struct _KTHREAD *v9; // r14
  __int64 v10; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  int v16; // eax
  __int64 v17; // rdi
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *p_FilterContexts; // rcx
  struct _FSRTL_PER_STREAM_CONTEXT *v20; // r14
  unsigned __int8 v21; // al
  ULONG_PTR v22; // rbx
  unsigned int v23; // edi
  struct _KTHREAD *v24; // rdx
  bool v25; // zf
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v30; // eax
  unsigned int v31; // edi
  unsigned __int64 v32; // rax
  unsigned int v33; // [rsp+70h] [rbp+8h]
  unsigned __int64 v34; // [rsp+88h] [rbp+20h] BYREF

  v4 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v4 < 3u )
  {
    if ( !v4 )
    {
      ExAcquireFastMutex(StreamContext->FastMutex);
      goto LABEL_37;
    }
LABEL_36:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
LABEL_37:
    v17 = 0LL;
    goto LABEL_14;
  }
  AePushLock = (__int64)StreamContext->AePushLock;
  if ( !AePushLock )
    goto LABEL_36;
  v8 = KeGetCurrentThread();
  --v8->KernelApcDisable;
  v9 = KeGetCurrentThread();
  v10 = 0LL;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(AePushLock, v9)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v33 = v12;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v10 = (__int64)(&v9[1].Process + 12 * v33);
    if ( (unsigned __int64)(AePushLock - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v10 + 8) = SessionId;
    *(_QWORD *)v10 = AePushLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  v16 = *(_DWORD *)(AePushLock + 8);
  if ( (v16 & 1) != 0 )
  {
    v17 = ExpAcquireFannedOutPushLockShared(v16 & 0xFFFFFFF8, 0LL, v10, AePushLock);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)AePushLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)AePushLock, 0, v10, AePushLock);
    v17 = AePushLock | 1;
  }
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
LABEL_14:
  Flink = StreamContext->FilterContexts.Flink;
  p_FilterContexts = &StreamContext->FilterContexts;
  v20 = 0LL;
  if ( InstanceId )
  {
    if ( Flink != p_FilterContexts )
    {
      while ( Flink[1].Flink != OwnerId || Flink[1].Blink != InstanceId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_19;
      }
LABEL_18:
      v20 = (struct _FSRTL_PER_STREAM_CONTEXT *)Flink;
    }
  }
  else
  {
    if ( OwnerId )
    {
      if ( Flink == p_FilterContexts )
        goto LABEL_19;
      while ( Flink[1].Flink != OwnerId )
      {
        Flink = Flink->Flink;
        if ( Flink == p_FilterContexts )
          goto LABEL_19;
      }
      goto LABEL_18;
    }
    if ( Flink != p_FilterContexts )
      v20 = (struct _FSRTL_PER_STREAM_CONTEXT *)StreamContext->FilterContexts.Flink;
  }
LABEL_19:
  v21 = *((_BYTE *)StreamContext + 7) >> 4;
  if ( v21 < 3u )
  {
    if ( !v21 )
    {
      ExReleaseFastMutex(StreamContext->FastMutex);
      return v20;
    }
  }
  else if ( StreamContext->AePushLock )
  {
    v34 = 0LL;
    v22 = v17 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (v17 & 1) != 0 )
    {
      _m_prefetchw((const void *)(v22 + 12));
      v23 = *(_DWORD *)(v22 + 12);
      if ( v23 >= 0x80000000 && (*(_DWORD *)(v22 + 8) & 3) == 0 )
      {
        if ( (unsigned __int16)v23 < (unsigned int)ExpAeCycleCountThreshold
          || (v23 & 0xF0000) >= 0xF0000
          || KeGetCurrentIrql() >= 2u )
        {
          v23 = (v23 >> 2) & 0x3FF33FFF;
          *(_DWORD *)(v22 + 12) = v23;
        }
        else
        {
          ExpTryExpandAutoExpandPushLock(v22);
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v22, 0LL, 17LL) == 17 )
      {
LABEL_24:
        if ( v23 < 0x80000000 )
          *(_DWORD *)(v22 + 12) = v23 + 0x100000;
        goto LABEL_26;
      }
      if ( (v23 & ExpAeSamplingPeriodMask) == 0 )
      {
        ExfReleasePushLockSharedEx(v22, &v34);
        if ( !v34 )
          goto LABEL_26;
        v31 = *(_DWORD *)(v22 + 12);
        if ( v31 >= 0x80000000 )
          goto LABEL_26;
        v32 = v34 >> ExpAeCycleCountScaler;
        if ( v34 >> ExpAeCycleCountScaler > 0x1FF )
          LODWORD(v32) = 511;
        v23 = v32 + v31;
        goto LABEL_24;
      }
      ExfReleasePushLockSharedEx(v22, 0LL);
      v30 = *(_DWORD *)(v22 + 12);
      if ( v30 < 0x80000000 )
        *(_DWORD *)(v22 + 12) = v30 + 0x100000;
    }
    else
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v22, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v17 & 0xFFFFFFFFFFFFFFFCuLL));
      v22 = *(_QWORD *)(v22 + 8);
    }
LABEL_26:
    KeAbPostRelease(v22);
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable++ == -1;
    if ( v25
      && ($C71981A45BEB2B45F82C232A7085991E *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
      return v20;
    }
    return v20;
  }
  ExReleasePushLockEx((ULONG_PTR)&StreamContext->PushLock, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  return v20;
}
