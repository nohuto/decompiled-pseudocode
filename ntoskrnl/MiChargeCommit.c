/*
 * XREFs of MiChargeCommit @ 0x140320800
 * Callers:
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiProbeLockFrame @ 0x140268ED0 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiCheckProtoPtePageState @ 0x140283EB0 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140287410 (MiChargeForLockedPage.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiMakePartitionActive @ 0x1402A6140 (MiMakePartitionActive.c)
 *     MiChargeForWriteInProgressPage @ 0x1402E44C4 (MiChargeForWriteInProgressPage.c)
 *     MiPurgeImageSection @ 0x1402FECC8 (MiPurgeImageSection.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiInitializePoolCommitPacket @ 0x140330760 (MiInitializePoolCommitPacket.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiObtainSystemCharges @ 0x140348C90 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     MmChargeResources @ 0x140359F68 (MmChargeResources.c)
 *     MiSessionInsertImage @ 0x14036BEC4 (MiSessionInsertImage.c)
 *     MiInitializeCommitment @ 0x140392394 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x140635960 (MiAttemptPageFileReductionApc.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiChargeFullProcessCommitment @ 0x1407C5840 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x1407F1988 (MiChargeSegmentCommit.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9E0 (MiRotateToFrameBuffer.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A30D1C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReplenishLocalCommit @ 0x1402E64D4 (MiReplenishLocalCommit.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSyncCommitSignals @ 0x1403929E0 (MiSyncCommitSignals.c)
 *     MiFreeExcessSegments @ 0x1406225DC (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x14063890C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x140653B74 (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x140653D38 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x140653DA4 (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x140653E9C (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v7; // eax
  int v8; // r12d
  unsigned int v9; // ebp
  __int64 v10; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  signed __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  bool v22; // cc
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v29; // [rsp+80h] [rbp+18h]

  v29 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1;
  while ( 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_UNKNOWN *)v4 == &MiSystemPartition )
    {
      _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
      CachedCommit = CurrentPrcb->CachedCommit;
      if ( a2 <= CachedCommit )
      {
        do
        {
          v7 = _InterlockedCompareExchange(
                 (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
                 CachedCommit - a2,
                 CachedCommit);
          a1 = v7;
          if ( v7 == CachedCommit )
            return 1LL;
          CachedCommit = v7;
        }
        while ( a2 <= v7 );
      }
    }
    v8 = 0;
    v9 = a3 | 2;
    if ( (a3 & 4) == 0 )
      v9 = a3;
    if ( (v9 & 8) != 0 )
    {
      v9 |= 2u;
      a1 = *((unsigned int *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (a1 & 2) == 0 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
      {
        v10 = 64LL;
        if ( (_UNKNOWN *)v4 != &MiSystemPartition && *(_QWORD *)(v4 + 17040) >> 6 < 0x40uLL )
          v10 = *(_QWORD *)(v4 + 17040) >> 6;
      }
      else
      {
        v9 |= 4u;
        v10 = 0LL;
      }
    }
    else if ( (v9 & 7) != 0 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = *(_QWORD *)(v4 + 16432);
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v4 + 17576);
      v12 = v11 + a2;
      if ( v11 + a2 > v11 )
      {
        while ( 1 )
        {
          if ( v10 + v12 < v12 )
            goto LABEL_50;
          a3 = *(_QWORD *)(v4 + 17816);
          if ( v10 + v12 <= a3 )
          {
            if ( !v8 && v12 >= 95 * (a3 / 0x64) )
            {
              MiApplyCommitDelay(v4, v9);
              v8 = 1;
            }
            goto LABEL_54;
          }
          v13 = *(_QWORD *)(v4 + 16416);
          if ( v12 >= v13 && v11 < v13 )
            MiPulseCommitSignal(v4);
          if ( (v9 & 4) != 0 )
          {
            if ( !v10 )
              ++dword_140C67BB0;
            goto LABEL_53;
          }
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 16424), &LockHandle);
          v11 = *(_QWORD *)(v4 + 17576);
          v14 = *(_QWORD *)(v4 + 17816);
          v12 = v11 + a2;
          if ( v11 + a2 > v11 && v10 + v12 >= v12 )
            break;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v11 = *(_QWORD *)(v4 + 17576);
          v12 = v11 + a2;
          if ( v11 + a2 <= v11 )
            goto LABEL_28;
        }
        if ( v10 + v12 <= v14 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          continue;
        }
        if ( (v9 & 2) != 0 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        else if ( v14 == *(_QWORD *)(v4 + 16392) )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          ++*(_DWORD *)(v4 + 17900);
          if ( (_UNKNOWN *)v4 != &MiSystemPartition )
            return 0LL;
          if ( (v9 & 1) == 0 )
          {
            if ( (unsigned int)MiIssuePageExtendRequest(v4, a2, 8LL) )
              goto LABEL_54;
LABEL_44:
            MiCauseOverCommitPopup(v4);
            return 0LL;
          }
          MiIssuePageExtendRequest(v4, a2, 10LL);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          if ( (v9 & 1) == 0 )
          {
            if ( (unsigned int)MiIssuePageExtendRequest(v4, a2, 0LL) )
              continue;
            ++*(_DWORD *)(v4 + 17896);
            goto LABEL_44;
          }
          ++*(_DWORD *)(v4 + 17904);
          MiIssuePageExtendRequest(v4, 4096LL, 2LL);
        }
        return 0LL;
      }
LABEL_50:
      if ( (v9 & 4) == 0 )
      {
LABEL_28:
        if ( (v9 & 2) == 0 )
        {
          ++*(_DWORD *)(v4 + 17908);
          if ( (v9 & 1) == 0 )
            MiCauseOverCommitPopup(v4);
          MiPulseCommitSignal(v4);
        }
        return 0LL;
      }
      if ( !v10 )
        ++dword_140C67BB4;
LABEL_53:
      if ( a2 )
        break;
LABEL_54:
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 17576), v12, v11);
      if ( v11 == v16 )
      {
        v17 = *(_QWORD *)(v4 + 16416);
        v18 = a2 + v16;
        if ( v18 >= v17 && v11 < v17 || (v19 = *(_QWORD *)(v4 + 16408), v11 < v19) && v18 >= v19 )
          MiSyncCommitSignals(v4, 0LL, a3);
        if ( v18 > *(_QWORD *)(v4 + 0x4000) )
          *(_QWORD *)(v4 + 0x4000) = v18;
        if ( (v9 & 2) != 0 )
          return 1LL;
        v20 = *(_QWORD *)(v4 + 17816);
        v21 = v20 / 0xA;
        if ( v18 >= 9 * (v20 / 0xA) )
        {
          v22 = v18 <= v20;
          if ( v18 >= v20 )
            goto LABEL_67;
          if ( v20 - v18 < 0x400000 )
          {
            v22 = v18 <= v20;
LABEL_67:
            if ( v22 )
            {
              a1 = *(_QWORD *)(v4 + 16392);
              if ( v20 < a1 && v18 < a1 )
              {
                if ( v21 > 0x40000 )
                  v21 = 0x40000LL;
                v23 = a1 - v20;
                v24 = v20 - v18 + v21;
                if ( v24 <= v23 )
                  v23 = v24;
                MiIssuePageExtendRequest(v4, v23, 2LL);
              }
            }
          }
        }
        if ( (_UNKNOWN *)v4 == &MiSystemPartition )
        {
          if ( (v9 & 1) == 0 && v18 >= *(_QWORD *)(v4 + 16416) && v20 == *(_QWORD *)(v4 + 16392) )
            MiFreeExcessSegments(a1, v21);
          v25 = CurrentPrcb->CachedCommit;
          if ( v25 < 0x80 )
          {
            v26 = v18;
            v27 = 256 - v25 + v18;
            if ( v27 > v26 && v10 + v27 > v26 && v10 + v27 <= v20 )
              MiReplenishLocalCommit(v4, (__int64)CurrentPrcb, v26, 256 - v25);
          }
        }
        return 1LL;
      }
    }
    if ( !(unsigned int)MiConsumeOverCommit(v4, a2, v10) )
    {
      a3 = v29;
      continue;
    }
    return 1LL;
  }
}
