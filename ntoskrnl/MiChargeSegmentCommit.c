/*
 * XREFs of MiChargeSegmentCommit @ 0x1407F1988
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406A5EE0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCommitPagefileBackedSection @ 0x14078D374 (MiCommitPagefileBackedSection.c)
 *     MiMapViewOfDataSection @ 0x1407D57C0 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x1407F1600 (MmCommitSessionMappedView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetControlAreaPartition @ 0x14031F9F0 (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiMakeDemandZeroPte @ 0x14032E7D8 (MiMakeDemandZeroPte.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x140368500 (MiGetSubsectionCrossPartitionReferences.c)
 *     MiUpdateControlAreaCommitCount @ 0x140368568 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x140668DD4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x1407F18F0 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 ControlAreaPartition; // rax
  __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 *v18; // r13
  bool v19; // zf
  __int64 DemandZeroPte; // rbx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 updated; // rax
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+20h] [rbp-88h]
  unsigned __int64 v27; // [rsp+28h] [rbp-80h]
  __int64 v29; // [rsp+38h] [rbp-70h]
  unsigned int *v30; // [rsp+40h] [rbp-68h]
  _QWORD *v31; // [rsp+48h] [rbp-60h]
  _QWORD *v32; // [rsp+50h] [rbp-58h]
  int SubsectionCrossPartitionReferences; // [rsp+B0h] [rbp+8h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+B8h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp+20h]

  v3 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v32 = (_QWORD *)*a1;
  v29 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v7 = (unsigned __int64 *)(v6 + 40);
  v26 = ControlAreaPartition;
  BugCheckParameter2 = (volatile signed __int64 *)(v6 + 40);
  v8 = *(unsigned int *)(v3 + 44);
  v31 = (_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 8);
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64)a2;
  v30 = (unsigned int *)(v3 + 44);
  v27 = v9 + 8 * v8;
  v11 = KeAbPreAcquire(v6 + 40, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v11, (__int64)v7);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = v27;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v3);
  while ( 1 )
  {
    v16 = MI_READ_PTE_LOCK_FREE(v10);
    v17 = v14 + 1;
    if ( v16 )
      v17 = v14;
    ++v13;
    v10 += 8LL;
    v14 = v17;
    if ( v13 == a3 )
      break;
    if ( v10 == v15 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v10 = *(_QWORD *)(v3 + 8);
      v15 = v10 + 8LL * *(unsigned int *)(v3 + 44);
    }
  }
  v18 = a1;
  if ( !v17 )
  {
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v19 )
      return 1LL;
    v19 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_16:
    if ( !v19 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit(v26, v17, 0LL) )
  {
    if ( !SubsectionCrossPartitionReferences || (int)MiGetSubsectionCharges(v3, v14) >= 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v29 + 14) >> 1) & 0x1F);
      v22 = 0LL;
      v23 = *v31 + 8LL * *v30;
      while ( 1 )
      {
        if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
          *a2 = DemandZeroPte;
        ++v22;
        ++a2;
        if ( v22 == a3 )
          break;
        if ( a2 == (__int64 *)v23 )
        {
          v18 = (__int64 *)v18[2];
          a2 = (__int64 *)v18[1];
          v23 = (__int64)&a2[*((unsigned int *)v18 + 11)];
        }
      }
      MiUpdateProcessSharedCommit((__int64)v32);
      updated = MiUpdateControlAreaCommitCount((__int64)v32, v14);
      if ( SubsectionCrossPartitionReferences && !updated )
        MiReturnCrossPartitionSectionCharges(v26, 0, v14);
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v19 )
        return 1LL;
      v19 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
      goto LABEL_16;
    }
    MiReturnCommit(v26, v14, v25);
  }
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
