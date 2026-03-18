/*
 * XREFs of MiChargeCommit @ 0x1402763A0
 * Callers:
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiProbeLockFrame @ 0x1402364E0 (MiProbeLockFrame.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiResolveProtoPteFault @ 0x140267DB0 (MiResolveProtoPteFault.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MmCreateKernelStack @ 0x140271580 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x140274A90 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x140275630 (MiFlushSectionInternal.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiInitializePoolCommitPacket @ 0x1402867E0 (MiInitializePoolCommitPacket.c)
 *     MiMakePartitionActive @ 0x1402924E0 (MiMakePartitionActive.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiCheckProtoPtePageState @ 0x1402DBE30 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x1402DC320 (MiChargeForLockedPage.c)
 *     MiObtainSystemCharges @ 0x1402E4250 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MiHardFaultPageRelease @ 0x140334C08 (MiHardFaultPageRelease.c)
 *     MmChargeResources @ 0x140343560 (MmChargeResources.c)
 *     MiChargeForWriteInProgressPage @ 0x140349914 (MiChargeForWriteInProgressPage.c)
 *     MiPurgeImageSection @ 0x140369DE8 (MiPurgeImageSection.c)
 *     MiInitializeCommitment @ 0x140394014 (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x140637DE0 (MiAttemptPageFileReductionApc.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066487C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x140667A5C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x14066B218 (MiGetSubsectionCharges.c)
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiChargeFullProcessCommitment @ 0x1406F78B0 (MiChargeFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiChargeSegmentCommit @ 0x140748518 (MiChargeSegmentCommit.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     MiRotateToFrameBuffer @ 0x140A31710 (MiRotateToFrameBuffer.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140A33A4C (MiCreateFileOnlyImageFixupList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14023CB90 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReplenishLocalCommit @ 0x140352E74 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x140394660 (MiSyncCommitSignals.c)
 *     MiFreeExcessSegments @ 0x140624A8C (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x14063AD8C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x1406561BC (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x140656380 (MiCauseOverCommitPopup.c)
 *     MiConsumeOverCommit @ 0x1406563EC (MiConsumeOverCommit.c)
 *     MiPulseCommitSignal @ 0x1406564E4 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
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
              ++dword_140C68030;
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
        ++dword_140C68034;
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
          MiSyncCommitSignals(v4, 0LL);
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
            MiFreeExcessSegments(a1, v21, a3);
          v25 = CurrentPrcb->CachedCommit;
          if ( v25 < 0x80 )
          {
            v26 = v18;
            v27 = 256 - v25 + v18;
            if ( v27 > v26 && v10 + v27 > v26 && v10 + v27 <= v20 )
              MiReplenishLocalCommit(v4, CurrentPrcb);
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
