/*
 * XREFs of PsBoostThreadIoEx @ 0x1402ACD80
 * Callers:
 *     IoBoostThreadIo @ 0x1402019A0 (IoBoostThreadIo.c)
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x14021A7D0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x14021CA70 (ExpBoostIoAfterAcquire.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140220460 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsLeavePriorityRegion @ 0x1402225A0 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x140223390 (PsEnterPriorityRegion.c)
 *     KiAbThreadBoostIoPriority @ 0x140229BD8 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14022B940 (KiAbThreadUnboostIoPriority.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14023C3B4 (CcBoostLowPriorityWorkerThread.c)
 *     FsRtlpModifyThreadPriorities @ 0x14024A390 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x14024A468 (FsRtlpDoBoost.c)
 *     CcApplyLowIoPriorityToThread @ 0x140288EE4 (CcApplyLowIoPriorityToThread.c)
 *     CcAcquireByteRangeForWrite @ 0x140289260 (CcAcquireByteRangeForWrite.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     PsBoostThreadIo @ 0x1402ACD60 (PsBoostThreadIo.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpApplyPriorityBoost @ 0x140343010 (ExpApplyPriorityBoost.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     FsRtlpWaitForIoAtEof @ 0x14035D3E0 (FsRtlpWaitForIoAtEof.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14063D1F0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x14063D2C0 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAbThreadInsertList @ 0x14024E928 (KiAbThreadInsertList.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, void *a4)
{
  signed __int32 v4; // ebx
  KIRQL v5; // r15
  char v7; // bp
  PVOID *v10; // r13
  __int64 **v11; // r12
  __int64 *v12; // rcx
  __int64 v13; // rax
  bool v14; // zf
  __int64 **v15; // r12
  __int64 *v16; // rcx
  unsigned __int8 v17; // bl
  struct _KDPC *v18; // rdi
  PVOID *PoolWithTag; // rax
  _DWORD *v20; // r9
  PVOID **v21; // rcx
  __int64 v22; // rax
  PVOID **v23; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax

  v4 = 0;
  v5 = 0;
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
    v10[13] = a4;
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1488));
LABEL_3:
  if ( a2 )
  {
    if ( !*(_DWORD *)(a1 + 1440) )
      goto LABEL_18;
    v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1440));
    if ( !v7 )
      goto LABEL_21;
    if ( !*(_DWORD *)(a1 + 1440) )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0x736F6F42u);
      v11 = (__int64 **)(a1 + 1456);
      while ( 1 )
      {
        v12 = *v11;
        if ( *v11 == (__int64 *)v11 )
          break;
        v13 = *v12;
        if ( (__int64 **)v12[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
          goto LABEL_48;
        *v11 = (__int64 *)v13;
        *(_QWORD *)(v13 + 8) = v11;
        ExFreePoolWithTag(v12, 0x736F6F42u);
      }
      v15 = (__int64 **)(a1 + 1472);
      while ( 1 )
      {
        v16 = *v15;
        if ( *v15 == (__int64 *)v15 )
          break;
        v22 = *v16;
        if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v22 + 8) != v16 )
          goto LABEL_48;
        *v15 = (__int64 *)v22;
        *(_QWORD *)(v22 + 8) = v15;
        ExFreePoolWithTag(v16, 0x736F6F42u);
      }
LABEL_18:
      if ( v7 )
        goto LABEL_19;
LABEL_21:
      v14 = v4 == 0;
      goto LABEL_22;
    }
    if ( !v10 )
      goto LABEL_18;
    v23 = *(PVOID ***)(a1 + 1480);
    if ( *v23 == (PVOID *)(a1 + 1472) )
    {
      *v10 = (PVOID)(a1 + 1472);
      v10[1] = v23;
      *v23 = v10;
      *(_QWORD *)(a1 + 1480) = v10;
      goto LABEL_18;
    }
LABEL_48:
    __fastfail(3u);
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1440));
  if ( !v7 )
    goto LABEL_15;
  if ( v10 )
  {
    v21 = *(PVOID ***)(a1 + 1464);
    if ( *v21 == (PVOID *)(a1 + 1456) )
    {
      *v10 = (PVOID)(a1 + 1456);
      v10[1] = v21;
      *v21 = v10;
      *(_QWORD *)(a1 + 1464) = v10;
      goto LABEL_19;
    }
    goto LABEL_48;
  }
LABEL_19:
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 1488));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v14 = (v27 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v27;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  if ( a2 )
    goto LABEL_21;
LABEL_15:
  v14 = v4 == 1;
LABEL_22:
  if ( v14 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v17 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v17 <= 0xFu )
    {
      v20 = KeGetCurrentPrcb()->SchedulerAssist;
      v20[5] |= (-1 << (v17 + 1)) & 4;
    }
    v18 = (struct _KDPC *)KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v18[557].DpcData, (_QWORD *)(a1 + 808)) )
      KiAbQueueAutoBoostDpc(v18);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && v17 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (v17 + 1));
          v14 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
    }
    __writecr8(v17);
  }
}
