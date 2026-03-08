/*
 * XREFs of PsBoostThreadIoEx @ 0x1402634D0
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140219DB8 (CcApplyLowIoPriorityToThread.c)
 *     CcAcquireByteRangeForWrite @ 0x14021A220 (CcAcquireByteRangeForWrite.c)
 *     FsRtlpWaitForIoAtEof @ 0x140240CC0 (FsRtlpWaitForIoAtEof.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     PsBoostThreadIo @ 0x1402634B0 (PsBoostThreadIo.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     FsRtlReleaseEofLock @ 0x1402C3460 (FsRtlReleaseEofLock.c)
 *     ExReinitializeResourceLite @ 0x1402CB110 (ExReinitializeResourceLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1402CD140 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsLeavePriorityRegion @ 0x1402CFB50 (PsLeavePriorityRegion.c)
 *     PsEnterPriorityRegion @ 0x1402D3110 (PsEnterPriorityRegion.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D9F48 (KiAbThreadUnboostIoPriority.c)
 *     FsRtlpModifyThreadPriorities @ 0x1402ECCB4 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpDoBoost @ 0x1402ECD68 (FsRtlpDoBoost.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140300D74 (CcBoostLowPriorityWorkerThread.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     ExpFreeOwnerEntry @ 0x14033B150 (ExpFreeOwnerEntry.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpBoostIoAfterAcquire @ 0x140356B60 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x140358384 (KiAbThreadBoostIoPriority.c)
 *     IoBoostThreadIo @ 0x14036F310 (IoBoostThreadIo.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406085D0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x140608630 (ExReleaseResourceAndLeavePriorityRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiAbThreadInsertList @ 0x1402F45E0 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PsBoostThreadIoEx(__int64 a1, char a2, char a3, __int64 a4)
{
  signed __int32 v4; // edi
  KIRQL v5; // r13
  _QWORD *v6; // rax
  char v8; // bp
  volatile signed __int64 *v11; // r12
  bool v12; // zf
  __int64 **v13; // r14
  __int64 *v14; // rcx
  __int64 **v15; // r14
  __int64 *v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  struct _KPRCB *v19; // rdi
  __int64 Pool2; // rax
  __int64 v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  _DWORD *v29; // r9
  __int64 v30; // rdx
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // r9
  _DWORD *v33; // r8
  int v34; // eax
  _QWORD *v35; // [rsp+20h] [rbp-38h]

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  v8 = a3;
  if ( PspAlwaysTrackIoBoosting )
  {
    v8 = 1;
  }
  else if ( !a3 )
  {
    v11 = (volatile signed __int64 *)(a1 + 1488);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(64LL, 112LL, 1936682818LL);
  v35 = (_QWORD *)Pool2;
  v21 = Pool2;
  if ( Pool2 )
  {
    RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(Pool2 + 16), 0LL);
    *(_QWORD *)(v21 + 96) = KeGetCurrentThread();
    *(_QWORD *)(v21 + 104) = a4;
  }
  v11 = (volatile signed __int64 *)(a1 + 1488);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1488));
  v6 = v35;
LABEL_4:
  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 1440) )
    {
      v4 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 1440));
      if ( !v8 )
        goto LABEL_12;
      if ( *(_DWORD *)(a1 + 1440) )
      {
        if ( v6 )
        {
          v24 = *(_QWORD **)(a1 + 1480);
          if ( *v24 != a1 + 1472 )
            goto LABEL_41;
          *v6 = a1 + 1472;
          v6[1] = v24;
          *v24 = v6;
          *(_QWORD *)(a1 + 1480) = v6;
        }
      }
      else
      {
        if ( v6 )
          ExFreePoolWithTag(v6, 0x736F6F42u);
        v15 = (__int64 **)(a1 + 1456);
        while ( 1 )
        {
          v16 = *v15;
          if ( *v15 == (__int64 *)v15 )
            break;
          v17 = *v16;
          if ( (__int64 **)v16[1] != v15 || *(__int64 **)(v17 + 8) != v16 )
            goto LABEL_41;
          *v15 = (__int64 *)v17;
          *(_QWORD *)(v17 + 8) = v15;
          ExFreePoolWithTag(v16, 0x736F6F42u);
        }
        v13 = (__int64 **)(a1 + 1472);
        while ( 1 )
        {
          v14 = *v13;
          if ( *v13 == (__int64 *)v13 )
            break;
          v23 = *v14;
          if ( (__int64 **)v14[1] != v13 || *(__int64 **)(v23 + 8) != v14 )
            goto LABEL_41;
          *v13 = (__int64 *)v23;
          *(_QWORD *)(v23 + 8) = v13;
          ExFreePoolWithTag(v14, 0x736F6F42u);
        }
      }
    }
    if ( !v8 )
      goto LABEL_12;
    goto LABEL_10;
  }
  v4 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 1440));
  if ( v8 )
  {
    if ( !v6 )
    {
LABEL_10:
      KxReleaseSpinLock(v11);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v5 + 1));
          v12 = (v28 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v28;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      if ( !a2 )
        goto LABEL_6;
LABEL_12:
      v12 = v4 == 0;
      goto LABEL_13;
    }
    v22 = *(_QWORD **)(a1 + 1464);
    if ( *v22 == a1 + 1456 )
    {
      *v6 = a1 + 1456;
      v6[1] = v22;
      *v22 = v6;
      *(_QWORD *)(a1 + 1464) = v6;
      goto LABEL_10;
    }
LABEL_41:
    __fastfail(3u);
  }
LABEL_6:
  v12 = v4 == 1;
LABEL_13:
  if ( v12 && !a2 && *(_BYTE *)(a1 + 793) )
  {
    v18 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
    {
      v29 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v18 == 2 )
        LODWORD(v30) = 4;
      else
        v30 = (-1LL << (v18 + 1)) & 4;
      v29[5] |= v30;
    }
    v19 = KeGetCurrentPrcb();
    if ( (unsigned int)KiAbThreadInsertList(a1, &v19->AbPropagateBoostsList, a1 + 808) )
      KiAbQueueAutoBoostDpc(v19);
    if ( KiIrqlFlags )
    {
      v31 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v31 <= 0xFu && v18 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = v32->SchedulerAssist;
        v34 = ~(unsigned __int16)(-1LL << (v18 + 1));
        v12 = (v34 & v33[5]) == 0;
        v33[5] &= v34;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v32);
      }
    }
    __writecr8(v18);
  }
}
