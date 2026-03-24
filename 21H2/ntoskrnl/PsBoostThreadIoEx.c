/*
 * XREFs of PsBoostThreadIoEx @ 0x14034D800
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14022F000 (ExpApplyPriorityBoost.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140286C70 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1402872F0 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x140288934 (KiAbThreadBoostIoPriority.c)
 *     FsRtlpWaitForIoAtEof @ 0x140290A2C (FsRtlpWaitForIoAtEof.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140292930 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsLeavePriorityRegion @ 0x140293FA0 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x14029BD30 (PsEnterPriorityRegion.c)
 *     FsRtlpDoBoost @ 0x1402CA830 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1402D083C (CcBoostLowPriorityWorkerThread.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D0FD0 (KiAbThreadUnboostIoPriority.c)
 *     FsRtlReleaseEofLock @ 0x1402EEC80 (FsRtlReleaseEofLock.c)
 *     ExpFreeOwnerEntry @ 0x1402F4FF0 (ExpFreeOwnerEntry.c)
 *     ExDeleteResourceLite @ 0x1402F50A0 (ExDeleteResourceLite.c)
 *     CcApplyLowIoPriorityToThread @ 0x1402F6308 (CcApplyLowIoPriorityToThread.c)
 *     ExReinitializeResourceLite @ 0x1402F7920 (ExReinitializeResourceLite.c)
 *     CcAcquireByteRangeForWrite @ 0x14030FF40 (CcAcquireByteRangeForWrite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14034C060 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14034C9B0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     PsBoostThreadIo @ 0x14034D7E0 (PsBoostThreadIo.c)
 *     FsRtlpModifyThreadPriorities @ 0x140379E74 (FsRtlpModifyThreadPriorities.c)
 *     IoBoostThreadIo @ 0x140505930 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1405B5390 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1405B5460 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CE20 (RtlCaptureStackBackTrace.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x1402C7CCC (KiAbThreadInsertList.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, _DWORD *SchedulerAssist)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r13
  _DWORD *v6; // r15
  char v7; // bp
  PVOID *v10; // r12
  bool v11; // zf
  unsigned __int8 v12; // bl
  struct _KDPC *v13; // rdi
  PVOID *PoolWithTag; // rax
  __int64 **v15; // r15
  __int64 *v16; // rcx
  __int64 **v17; // r15
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  PVOID **v21; // rcx
  PVOID **v22; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax

  v4 = 0;
  v5 = 0;
  v6 = SchedulerAssist;
  v7 = a3;
  v10 = 0LL;
  if ( PspAlwaysTrackIoBoosting )
  {
    v7 = 1;
  }
  else if ( !a3 )
  {
    goto LABEL_3;
  }
  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x70uLL);
    RtlCaptureStackBackTrace(1u, 0xAu, v10 + 2, 0LL);
    v10[12] = KeGetCurrentThread();
    v10[13] = v6;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1408));
LABEL_3:
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1360) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1360));
      if ( !v7 )
        goto LABEL_6;
      if ( !*(_DWORD *)(a1 + 1360) )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0x736F6F42u);
        v15 = (__int64 **)(a1 + 1376);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v19 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v19 + 8) != v16 )
            goto LABEL_37;
          *v15 = (__int64 *)v19;
          *(_QWORD *)(v19 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
        v17 = (__int64 **)(a1 + 1392);
        while ( 1 )
        {
          v18 = *v17;
          if ( *v17 == (__int64 *)v17 )
            goto LABEL_29;
          v20 = *v18;
          if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v20 + 8) != v18 )
            goto LABEL_37;
          *v17 = (__int64 *)v20;
          *(_QWORD *)(v20 + 8) = v17;
          ExFreePoolWithTag(v18, 0x736F6F42u);
        }
      }
      if ( v10 )
      {
        v21 = *(PVOID ***)(a1 + 1400);
        if ( *v21 == (PVOID *)(a1 + 1392) )
        {
          *v10 = (PVOID)(a1 + 1392);
          v10[1] = v21;
          *v21 = v10;
          *(_QWORD *)(a1 + 1400) = v10;
          goto LABEL_29;
        }
LABEL_37:
        __fastfail(3u);
      }
    }
  }
  else
  {
    v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1360));
    if ( !v7 )
      goto LABEL_13;
    if ( !v10 )
      goto LABEL_29;
    v22 = *(PVOID ***)(a1 + 1384);
    if ( *v22 != (PVOID *)(a1 + 1376) )
      goto LABEL_37;
    *v10 = (PVOID)(a1 + 1376);
    v10[1] = v22;
    *v22 = v10;
    *(_QWORD *)(a1 + 1384) = v10;
  }
LABEL_29:
  if ( v7 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1408));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v11 = (v25 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v25;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
LABEL_6:
  if ( !a2 )
  {
LABEL_13:
    v11 = v4 == 1;
    goto LABEL_8;
  }
  v11 = v4 == 0;
LABEL_8:
  if ( v11 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v12 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v12 <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (v12 + 1)) & 4;
    }
    v13 = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v13[541].DpcData, (_QWORD *)(a1 + 808), (__int64)SchedulerAssist) )
      KiAbQueueAutoBoostDpc(v13);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && v12 <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = v27->SchedulerAssist;
          v29 = ~(unsigned __int16)(-1LL << (v12 + 1));
          v11 = (v29 & v28[5]) == 0;
          v28[5] &= v29;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(v27);
        }
      }
    }
    __writecr8(v12);
  }
}
