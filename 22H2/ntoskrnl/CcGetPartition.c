/*
 * XREFs of CcGetPartition @ 0x140293E80
 * Callers:
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWrite @ 0x14022CFFC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     CcPurgeCacheSection @ 0x140270FA0 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x140272FBC (CcDeleteMbcb.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 *     CcShouldLazyWriteCacheMap @ 0x140276694 (CcShouldLazyWriteCacheMap.c)
 *     CcWriteBehind @ 0x1402767E0 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     CcAsyncCopyRead @ 0x140278AC0 (CcAsyncCopyRead.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     CcPerformReadAhead @ 0x14027A470 (CcPerformReadAhead.c)
 *     CcSetParallelFlushFile @ 0x1402901F0 (CcSetParallelFlushFile.c)
 *     CcAcquireByteRangeForWrite @ 0x1402905C0 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x140291040 (CcGetVacbMiss.c)
 *     CcDeductDirtyPages @ 0x14029346C (CcDeductDirtyPages.c)
 *     CcUnmapVacbArray @ 0x1402934F0 (CcUnmapVacbArray.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcCanIWrite @ 0x140293850 (CcCanIWrite.c)
 *     CcSetAdditionalCacheAttributesEx @ 0x140302C10 (CcSetAdditionalCacheAttributesEx.c)
 *     CcSetAdditionalCacheAttributes @ 0x140302D40 (CcSetAdditionalCacheAttributes.c)
 *     CcMapDataForOverwrite @ 0x140306B18 (CcMapDataForOverwrite.c)
 *     CcAmILowPriorityWriter @ 0x1403080A0 (CcAmILowPriorityWriter.c)
 *     CcWaitForUninitializeCacheMap @ 0x14030FEE0 (CcWaitForUninitializeCacheMap.c)
 *     CcGetFlushedValidData @ 0x140311450 (CcGetFlushedValidData.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14031195C (CcUpdateSharedCacheMapFlag.c)
 *     CcSetLogHandleForFileEx @ 0x1403119F0 (CcSetLogHandleForFileEx.c)
 *     CcPrepareMdlWrite @ 0x1403259D0 (CcPrepareMdlWrite.c)
 *     CcForceWriteThrough @ 0x140325D4C (CcForceWriteThrough.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1403296D0 (CcNotifyOfMappedWriteComplete.c)
 *     CcMdlWriteComplete2 @ 0x140329A88 (CcMdlWriteComplete2.c)
 *     CcDeleteBcbs @ 0x14032B8C0 (CcDeleteBcbs.c)
 *     CcGetPartitionFromFileObject @ 0x140359C24 (CcGetPartitionFromFileObject.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA6A0 (CcUnpinRepinnedBcb.c)
 *     CcSetLogHandleForFile @ 0x1404EAD00 (CcSetLogHandleForFile.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 *     CcMdlWriteAbort @ 0x1404EBAB0 (CcMdlWriteAbort.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B5CCC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall CcGetPartition(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  ULONG_PTR *v10; // rdi
  struct _KPRCB *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v14; // rcx
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  unsigned __int32 v18; // eax
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v25; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1[66];
  if ( a1[21] )
  {
    v5 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&dword_140C4C980, CurrentIrql);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = 0;
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v8[6];
          v8[6] = v15 + 1;
          if ( v15 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( _interlockedbittestandset(&dword_140C4C980, 0x1Fu) )
      {
        v14 = CurrentPrcb->SchedulerAssist;
        if ( v14 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v14[6] - 1;
            v14[6] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        v25 = ExpWaitForSpinLockExclusiveAndAcquire(
                (unsigned __int64)&dword_140C4C980,
                CurrentIrql,
                a3,
                SchedulerAssist);
      }
      v9 = (unsigned int)dword_140C4C980;
      if ( (dword_140C4C980 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v9 & 0x40000000) == 0 )
          {
            v18 = _InterlockedCompareExchange(&dword_140C4C980, v9 | 0x40000000, v9);
            v17 = (_DWORD)v9 == v18;
            v9 = v18;
            if ( !v17 )
              continue;
          }
          KeYieldProcessorEx(&v25, v9, a3, (__int64)SchedulerAssist);
          v9 = (unsigned int)dword_140C4C980;
        }
        while ( (v9 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    if ( *(_QWORD *)v5 )
      v10 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
    else
      v10 = &MiSystemPartition;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&dword_140C4C980, retaddr);
    else
      dword_140C4C980 = 0;
    v11 = KeGetCurrentPrcb();
    v12 = v11->SchedulerAssist;
    if ( v12 )
    {
      if ( v11->NestingLevel <= 1u )
      {
        v19 = v12[6] - 1;
        v12[6] = v19;
        if ( !v19 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v20 = KeGetCurrentIrql();
        if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 != *(_QWORD *)(v10[22] + 8) )
      KeBugCheckEx(0x34u, 0x1314uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  return v4;
}
