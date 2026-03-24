/*
 * XREFs of MiInsertPageInFreeOrZeroedList @ 0x140234880
 * Callers:
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiZeroPage @ 0x140232C80 (MiZeroPage.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x140280524 (MiFreeSmallPageFromMdl.c)
 *     MiDeleteClusterSection @ 0x140280A60 (MiDeleteClusterSection.c)
 *     MiReturnFreeZeroPage @ 0x1402836D0 (MiReturnFreeZeroPage.c)
 *     MiWriteCompletePfn @ 0x1402A6310 (MiWriteCompletePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiReturnPhysicalPoolPages @ 0x1402E9A84 (MiReturnPhysicalPoolPages.c)
 *     MiDrainZeroLookasides @ 0x140310AE0 (MiDrainZeroLookasides.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRelinkStandbyPage @ 0x14033AFE8 (MiRelinkStandbyPage.c)
 *     MiPurgeZeroList @ 0x14038425C (MiPurgeZeroList.c)
 *     MiPurgePartitionStandby @ 0x140384914 (MiPurgePartitionStandby.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     MiPurgeImageSection @ 0x1403A4CC4 (MiPurgeImageSection.c)
 *     MiLockAndInsertPageInFreeList @ 0x1403B6EAC (MiLockAndInsertPageInFreeList.c)
 *     MiReturnPfnList @ 0x1403BA340 (MiReturnPfnList.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F52A8 (MiConvertEntireLargePageToSmall.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F5BB4 (MiDeleteSubsectionLargePages.c)
 *     MiPurgeSubsection @ 0x14052A1F0 (MiPurgeSubsection.c)
 *     MiEnableNewPfns @ 0x14052DFA0 (MiEnableNewPfns.c)
 *     MiUnlinkBadPages @ 0x14052F038 (MiUnlinkBadPages.c)
 *     MmFreeNonChargedSecurePages @ 0x140534414 (MmFreeNonChargedSecurePages.c)
 *     MiDeleteEnclavePage @ 0x14054A380 (MiDeleteEnclavePage.c)
 *     MiReturnEnclavePage @ 0x14054B360 (MiReturnEnclavePage.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiDeleteDirectMapFixupPfn @ 0x140554234 (MiDeleteDirectMapFixupPfn.c)
 *     MiFreePageFileHashPfn @ 0x14055D4BC (MiFreePageFileHashPfn.c)
 *     MiTransferPartitionPageRun @ 0x140562D50 (MiTransferPartitionPageRun.c)
 *     MiScrubNode @ 0x140563F8C (MiScrubNode.c)
 *     MxCreateFreePfns @ 0x140A432FC (MxCreateFreePfns.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 *     MiCreateEnclaveRegions @ 0x140A54ED8 (MiCreateEnclaveRegions.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiPageToChannel @ 0x14027F788 (MiPageToChannel.c)
 *     MiWakeZeroingThreads @ 0x14027FA50 (MiWakeZeroingThreads.c)
 *     MiNodeLargeFreeZeroPages @ 0x1402994C0 (MiNodeLargeFreeZeroPages.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x1402DCF80 (KxWaitForLockChainValid.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiFreeSlabPage @ 0x14037B9E4 (MiFreeSlabPage.c)
 *     MiUpdateAvailableEvents @ 0x1403B63E4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     KeSetPagePrivilege @ 0x140512DB8 (KeSetPagePrivilege.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405163CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiClearFileOnlyPfn @ 0x14053FC1C (MiClearFileOnlyPfn.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 */

__int64 __fastcall MiInsertPageInFreeOrZeroedList(ULONG_PTR BugCheckParameter2, __int16 a2)
{
  ULONG_PTR v3; // r13
  ULONG_PTR v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 result; // rax
  unsigned int v7; // ebx
  __int64 v8; // r12
  unsigned int v9; // r15d
  __int64 v10; // rax
  int PagePrivilege; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  int v17; // edx
  char *v18; // rax
  int v19; // r8d
  int v20; // ecx
  int v21; // edi
  int v22; // r8d
  unsigned __int64 v23; // r8
  char v24; // al
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r15
  unsigned __int16 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  __int64 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rcx
  __int64 *v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // r11
  _QWORD *v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int16 **v44; // r10
  __int64 v45; // r11
  unsigned __int16 *v46; // rcx
  unsigned int v47; // edx
  char v48; // cl
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // r14
  __int64 v53; // rax
  struct _KEVENT *v54; // rdi
  unsigned __int64 v55; // r14
  unsigned __int64 v56; // r8
  __int64 v57; // r12
  unsigned __int64 v58; // r15
  __int64 v59; // rcx
  __int64 v60; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v63; // eax
  _QWORD *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // r11
  __int64 v67; // rdx
  signed __int64 v68; // r8
  signed __int64 v69; // rcx
  __int64 v70; // rcx
  struct _KPRCB *v71; // rcx
  _DWORD *v72; // rdx
  __int64 v73; // r13
  unsigned __int64 v74; // r8
  unsigned __int16 **v75; // r11
  __int64 v76; // r10
  unsigned __int16 *v77; // rcx
  unsigned int v78; // edx
  unsigned __int64 v79; // r12
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // r15
  _BYTE *i; // rdi
  _DWORD *v84; // r9
  __int64 v85; // r14
  unsigned __int64 OldIrql; // r14
  unsigned __int8 v87; // al
  struct _KPRCB *v88; // r10
  _DWORD *v89; // r9
  int v90; // eax
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  _DWORD *v93; // r9
  int v94; // eax
  signed __int32 v95[8]; // [rsp+0h] [rbp-B9h] BYREF
  __int64 v96; // [rsp+30h] [rbp-89h]
  __int128 v97; // [rsp+38h] [rbp-81h] BYREF
  __int64 v98; // [rsp+48h] [rbp-71h]
  int v99; // [rsp+50h] [rbp-69h]
  unsigned __int64 v100; // [rsp+58h] [rbp-61h]
  struct _KLOCK_QUEUE_HANDLE v101; // [rsp+60h] [rbp-59h] BYREF
  __int64 v102; // [rsp+78h] [rbp-41h]
  unsigned __int64 v103; // [rsp+80h] [rbp-39h]
  __int64 v104; // [rsp+88h] [rbp-31h]
  __int64 v105; // [rsp+90h] [rbp-29h]
  __int64 v106; // [rsp+98h] [rbp-21h]
  __int64 v107; // [rsp+A0h] [rbp-19h]
  _QWORD *v108; // [rsp+A8h] [rbp-11h]
  volatile signed __int64 *v109; // [rsp+B0h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v111; // [rsp+D0h] [rbp+17h] BYREF
  void *retaddr; // [rsp+118h] [rbp+5Fh]
  unsigned int v114; // [rsp+130h] [rbp+77h]
  unsigned int v115; // [rsp+138h] [rbp+7Fh]

  v98 = 0LL;
  v3 = BugCheckParameter2;
  v97 = 0LL;
  v4 = 48 * BugCheckParameter2 - 0x58000000000LL;
  v5 = *(_QWORD *)(v4 + 40);
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    MiClearPfnImageVerified(48 * BugCheckParameter2 - 0x58000000000LL, 12LL);
    return MiClearFileOnlyPfn(v4);
  }
  v7 = 0;
  v8 = *(_QWORD *)(qword_140C4E648 + 8 * ((v5 >> 39) & 0x3FF));
  v96 = v8;
  if ( (a2 & 1) != 0 )
  {
    if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(BugCheckParameter2);
      v5 = *(_QWORD *)(v4 + 40);
    }
    v9 = 0;
    v114 = 0;
    v10 = 2240LL;
  }
  else
  {
    if ( (a2 & 0x100) != 0 )
    {
      *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
      *(_BYTE *)(v4 + 34) = *(_BYTE *)(v4 + 34) & 0xF8 | 5;
      *(_BYTE *)(v4 + 35) |= 0x10u;
      return MiInsertPageInList(v4, 256LL);
    }
    v9 = 1;
    v10 = 2304LL;
    v114 = 1;
  }
  v109 = (volatile signed __int64 *)(v10 + v8);
  v111 = 0LL;
  if ( ((v5 >> 60) & 7) == 3 )
  {
    PagePrivilege = MiGetPagePrivilege(v4);
    if ( PagePrivilege )
    {
      v12 = 512LL;
      if ( (PagePrivilege & 0x20) == 0 )
        v12 = 16LL;
      if ( (int)KeSetPagePrivilege(v3, &v111, v12) < 0 )
        KeBugCheckEx(0x1Au, 0x5150BuLL, v3, 0LL, 0LL);
    }
    *(_QWORD *)(v4 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
  }
  *(_QWORD *)(v4 + 24) &= ~0x4000000000000000uLL;
  _InterlockedOr(v95, 0);
  v13 = (unsigned int)KiTbFlushTimeStamp;
  *(_BYTE *)(v4 + 35) &= 0xF8u;
  v14 = (*(_QWORD *)(v4 + 24) ^ (v13 << 56)) & 0xF00000000000000LL;
  *(_QWORD *)(v4 + 8) |= 0x8000000000000000uLL;
  *(_QWORD *)(v4 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v15 = *(_BYTE *)(v4 + 34);
  *(_QWORD *)(v4 + 24) ^= v14;
  *(_BYTE *)(v4 + 34) = v15 & 0xC7;
  v16 = byte_140C5205E == 0;
  *(_BYTE *)(v4 + 35) &= ~0x20u;
  if ( !v16 )
  {
    result = qword_140C52588;
    if ( _bittest64((const signed __int64 *)qword_140C52588, v3 >> 9) )
    {
      if ( (a2 & 0x800) == 0 )
        return MiFreeSlabPage(v4);
      return result;
    }
  }
  if ( (*(_BYTE *)(v4 + 35) & 0x40) != 0 )
    return MiInsertPageInList(v4, 32LL);
  v17 = dword_140C4DE88;
  if ( dword_140C4DE84 <= (unsigned int)dword_140C4DE88 )
  {
    v18 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84;
    if ( v3 >= *(_QWORD *)v18 && (dword_140C4DE84 == dword_140C4DE88 || v3 < *((_QWORD *)v18 + 2)) )
      goto LABEL_37;
  }
  v19 = 0;
  if ( dword_140C4DE88 < 0 )
LABEL_183:
    KeBugCheckEx(0x1Au, 0x6201uLL, v3, 0LL, 0LL);
  while ( 1 )
  {
    v20 = (v19 + v17) >> 1;
    v18 = (char *)qword_140C4DEC8 + 16 * v20;
    if ( v3 < *(_QWORD *)v18 )
    {
      if ( !v20 )
        KeBugCheckEx(0x1Au, 0x6200uLL, v3, (ULONG_PTR)qword_140C4DEC8, 0LL);
      v17 = v20 - 1;
      goto LABEL_34;
    }
    if ( v20 == dword_140C4DE88 || v3 < *((_QWORD *)v18 + 2) )
      break;
    v19 = v20 + 1;
LABEL_34:
    if ( v17 < v19 )
      goto LABEL_183;
  }
  dword_140C4DE84 = (v19 + v17) >> 1;
LABEL_37:
  v21 = *((_DWORD *)v18 + 2);
  if ( qword_140C4DED0 )
    v22 = MiPageToChannel(v3);
  else
    v22 = 0;
  v23 = dword_140C4DEF8 & (unsigned int)v3 | (v21 << byte_140C4DE8C) | (v22 << byte_140C4DE8D);
  v24 = v9 | *(_BYTE *)(v4 + 34) & 0xF8;
  v103 = *(_QWORD *)(v8 + 16) + 4544 * ((unsigned __int64)(unsigned int)v23 >> byte_140C4DE8C);
  *(_BYTE *)(v4 + 34) = v24;
  v25 = (unsigned int)v23;
  v115 = v23;
  v100 = (unsigned int)v23;
  v99 = a2 & 0x400;
  v26 = *(_QWORD *)(v4 + 16);
  if ( v26 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v26 & 0x10) != 0 )
        LODWORD(v26) = v26 & 0xFFFFFFEF;
      else
        LODWORD(v26) = ~(_DWORD)qword_140C4DF40 & v26;
    }
  }
  else
  {
    LODWORD(v26) = 0;
  }
  v27 = -(__int64)((a2 & 0x400) != 0) & 0xFFFFFFFD00000000uLL | (unsigned int)v26;
  if ( qword_140C4DF40 )
  {
    if ( (v27 & qword_140C4DF40) != 0 )
      v27 |= 0x10uLL;
    else
      v27 |= qword_140C4DF40;
  }
  *(_QWORD *)(v4 + 16) = v27;
  if ( (a2 & 0x40) == 0 )
  {
    if ( (a2 & 0x200) == 0 )
    {
      result = MiCoalesceFreePages(v3);
      if ( (_DWORD)result != 1 )
      {
        v23 = v115;
        v25 = v100;
        goto LABEL_54;
      }
      return result;
    }
LABEL_54:
    if ( (a2 & 0x400) == 0 && (*(_DWORD *)(v8 + 4) & 0x20) == 0 )
    {
      v28 = *(_QWORD *)(v8 + 16) + 4544 * (v25 >> byte_140C4DE8C);
      v29 = (unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)((unsigned int)v23 >> byte_140C4DE8D);
      v30 = v114 + 525LL;
      v31 = *(_QWORD *)(v96 + 8 * v30);
      v108 = (_QWORD *)(v96 + 8 * v30);
      v23 = 2 * (v114 ^ 1) + 4096;
      v104 = 16 * v25;
      if ( *(unsigned __int16 *)(v31 + 16 * v25) >= *(int *)(v96 + 6300) )
      {
        v8 = v96;
      }
      else
      {
        v32 = 0LL;
        v33 = 0LL;
        v107 = ((unsigned int)~(_DWORD)v23 >> 1) & 1;
        do
        {
          v23 = v29;
          if ( (unsigned int)MmNumberOfChannels <= 1 )
            v34 = *(_QWORD *)(v28 + 8 * v33 + 4128);
          else
            v34 = *(_QWORD *)(v28 + 8 * (v33 + 2LL * v29) + 4216);
          v35 = v32 + v34;
          v36 = 0LL;
          v37 = 3LL;
          v106 = v35;
          v102 = 3LL;
          v38 = MiLargePageSizes;
          v39 = 0LL;
          v40 = (__int64 *)(v28 + 8 * v33);
          v41 = (_QWORD *)v28;
          do
          {
            v105 = *v38;
            if ( v29 == 4 )
            {
              if ( v33 == 2 )
                v42 = *v41 + v41[1];
              else
                v42 = *v40;
              v23 = 4LL;
            }
            else
            {
              v43 = v39 + 4 * (v23 + 4 * v33);
              v42 = *(_QWORD *)(v28 + 8 * v43 + 48)
                  + *(_QWORD *)(v28 + 8 * v43 + 56)
                  + *(_QWORD *)(v28 + 8 * v43 + 72)
                  + *(_QWORD *)(v28 + 8 * v43 + 304)
                  + *(_QWORD *)(v28 + 8 * v43 + 312)
                  + *(_QWORD *)(v28 + 8 * v43 + 328)
                  + *(_QWORD *)(v28 + 8 * v43 + 64)
                  + *(_QWORD *)(v28 + 8 * v43 + 320);
              v37 = v102;
            }
            ++v38;
            v41 += 134;
            v36 += v105 * v42;
            v39 += 134LL;
            v40 += 134;
            v102 = --v37;
          }
          while ( v37 );
          ++v33;
          v32 = v36 + v106;
        }
        while ( v33 <= v107 );
        v8 = v96;
        if ( v32 > 0x40 )
        {
          v23 = *(_QWORD *)(v96 + 7104);
          if ( v23 < 0x420 )
          {
            v44 = (unsigned __int16 **)(v96 + 4200);
            v45 = 0LL;
            while ( 1 )
            {
              v46 = *v44;
              v47 = 0;
              if ( dword_140C4DEFC )
                break;
LABEL_76:
              ++v45;
              ++v44;
              if ( v45 > 1 )
                goto LABEL_77;
            }
            while ( 1 )
            {
              v23 += *v46;
              if ( v23 >= 0x420 )
                break;
              ++v47;
              v46 += 8;
              if ( v47 >= dword_140C4DEFC )
                goto LABEL_76;
            }
          }
          v48 = *(_BYTE *)(v4 + 34);
          if ( (v48 & 7) != 5 )
            *(_BYTE *)(v4 + 34) = v48 & 0xF8 | 5;
          v49 = ((unsigned __int64)v114 << 12) | *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFF0FFFuLL;
          if ( v49 )
          {
            v7 = (v114 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FFF;
            if ( qword_140C4DF40 )
            {
              if ( (*(_BYTE *)(v4 + 16) & 0x10) != 0 )
                v7 = (v114 << 12) | *(_DWORD *)(v4 + 16) & 0xFFFF0FEF;
              else
                v7 = v49 & ~(_DWORD)qword_140C4DF40;
            }
          }
          v50 = v7 | 0xFFFFFFFE00000000uLL;
          if ( qword_140C4DF40 )
          {
            if ( (qword_140C4DF40 & v50) != 0 )
              v50 = v7 | 0xFFFFFFFE00000010uLL;
            else
              v50 |= qword_140C4DF40;
          }
          v51 = v104;
          *(_QWORD *)(v4 + 16) = v50;
          return (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)(*v108 + v51), (PSLIST_ENTRY)v4);
        }
LABEL_77:
        v3 = BugCheckParameter2;
      }
      v9 = v114;
    }
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  v52 = _InterlockedIncrement64((volatile signed __int64 *)(v8 + 7104));
  if ( v52 <= 0x420 )
  {
    switch ( v52 )
    {
      case 0xA0uLL:
        v53 = 4968LL;
        goto LABEL_100;
      case 0x420uLL:
        v53 = 5000LL;
        goto LABEL_100;
      case 0x22uLL:
        v53 = 4936LL;
LABEL_100:
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 4928);
        v54 = (struct _KEVENT *)(v53 + v8);
        KxAcquireQueuedSpinLock(&LockHandle, v8 + 4928, v23);
        KeSetEvent(v54, 0, 0);
        ++v54[1].Header.LockNV;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        break;
    }
  }
  v55 = v52 - 1;
  if ( v55 == *(_QWORD *)(v8 + 5168) || v55 == *(_QWORD *)(v8 + 5176) )
    MiUpdateAvailableEvents(v8);
  v56 = v103;
  v57 = v9;
  v58 = _InterlockedIncrement64((volatile signed __int64 *)(v103 + 8LL * v9 + 4128));
  if ( (unsigned int)MmNumberOfChannels > 1 )
    _InterlockedIncrement64((volatile signed __int64 *)(v56
                                                      + 8
                                                      * (v57
                                                       + 2LL
                                                       * ((unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v115 >> byte_140C4DE8D)))
                                                      + 4216));
  v59 = *(_QWORD *)(v96 + 8 * v57 + 2176);
  *(_QWORD *)&v97 = 0LL;
  v60 = v59 + 40 * v100;
  *((_QWORD *)&v97 + 1) = v60 + 32;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v63 = SchedulerAssist[6];
      SchedulerAssist[6] = v63 + 1;
      if ( v63 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v97, v60 + 32);
  }
  else
  {
    v64 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(v60 + 32), (__int64)&v97);
    if ( v64 )
      KxWaitForLockOwnerShip((__int64)&v97, v64);
  }
  v65 = *(_QWORD *)(v60 + 16);
  if ( v65 == 0xFFFFFFFFFLL )
  {
    _InterlockedOr(
      (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v96 + 16)
                                            + 4544 * (v100 >> byte_140C4DE8C)
                                            + 16 * (v57 + 252)
                                            + 8)
                                + 4 * ((unsigned __int64)(v115 & dword_140C4DEF8) >> 5)),
      1 << (v115 & dword_140C4DEF8 & 0x1F));
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
    *(_QWORD *)(v60 + 16) = v3;
    *(_QWORD *)(v60 + 24) = v3;
  }
  else if ( v114 == 1 || v99 )
  {
    v70 = 48LL * *(_QWORD *)(v60 + 24);
    *(_QWORD *)(v4 + 24) ^= (*(_QWORD *)(v4 + 24) ^ (v70 / 48)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v70 - 0x58000000000LL) ^= (v3 ^ *(_QWORD *)(v70 - 0x58000000000LL)) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v60 + 24) = v3;
    *(_QWORD *)v4 |= 0xFFFFFFFFFuLL;
  }
  else
  {
    v66 = 48 * v65;
    *(_QWORD *)(v4 + 24) |= 0xFFFFFFFFFuLL;
    v67 = *(_QWORD *)(48 * v65 - 0x58000000000LL + 24);
    v68 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v66 - 0x58000000000LL + 24),
            v3 & 0xFFFFFFFFFLL | v67 & 0xFFFFFFF000000000uLL,
            *(_QWORD *)(v66 - 0x58000000000LL + 24));
    if ( v67 != v68 )
    {
      do
      {
        v69 = v68;
        v68 = _InterlockedCompareExchange64(
                (volatile signed __int64 *)(v66 - 0x58000000000LL + 24),
                v3 & 0xFFFFFFFFFLL | v68 & 0xFFFFFFF000000000uLL,
                v68);
      }
      while ( v69 != v68 );
    }
    *(_QWORD *)(v60 + 16) = v3;
    *(_QWORD *)v4 ^= (*(_QWORD *)v4 ^ (v66 / 48)) & 0xFFFFFFFFFLL;
  }
  ++*(_QWORD *)v60;
  _InterlockedIncrement64(v109);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v97, retaddr);
    goto LABEL_128;
  }
  _m_prefetchw(&v97);
  result = v97;
  if ( (_QWORD)v97 )
  {
LABEL_127:
    *(_QWORD *)&v97 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
  else
  {
    result = _InterlockedCompareExchange64(*((volatile signed __int64 **)&v97 + 1), 0LL, (signed __int64)&v97);
    if ( (__int128 *)result != &v97 )
    {
      result = KxWaitForLockChainValid(&v97);
      goto LABEL_127;
    }
  }
LABEL_128:
  v71 = KeGetCurrentPrcb();
  v72 = v71->SchedulerAssist;
  if ( v72 )
  {
    if ( v71->NestingLevel <= 1u )
    {
      result = (unsigned int)(v72[6] - 1);
      v72[6] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v71);
    }
  }
  if ( v114 == 1 && v58 >= 0x40 )
  {
    v73 = v96;
    v74 = *(_QWORD *)(v96 + 7104);
    if ( v74 < 0xA0 )
    {
      v75 = (unsigned __int16 **)(v96 + 4200);
      v76 = 0LL;
      while ( 1 )
      {
        v77 = *v75;
        v78 = 0;
        if ( dword_140C4DEFC )
          break;
LABEL_139:
        ++v76;
        ++v75;
        if ( v76 > 1 )
          return result;
      }
      while ( 1 )
      {
        result = *v77;
        v74 += result;
        if ( v74 >= 0xA0 )
          break;
        ++v78;
        v77 += 8;
        if ( v78 >= dword_140C4DEFC )
          goto LABEL_139;
      }
    }
    v79 = v103;
    CurrentIrql = 17;
    memset(&v101, 0, sizeof(v101));
    if ( v103 )
    {
      result = *(unsigned int *)(v96 + 4);
      if ( (result & 0x40) != 0 )
        return result;
      v81 = v103;
      v82 = v103 + 4544;
    }
    else
    {
      v81 = *(_QWORD *)(v96 + 16);
      v82 = v81 + 4544LL * (unsigned __int16)KeNumberNodes;
    }
    result = *(unsigned int *)(v96 + 6340);
    if ( !(_DWORD)result && v81 < v82 )
    {
      for ( i = (_BYTE *)(v81 + 4490); (unsigned __int64)(i - 4490) < v82; i += 4544 )
      {
        if ( !*i )
        {
          if ( !v79 )
          {
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              v84 = KeGetCurrentPrcb()->SchedulerAssist;
              v74 = (-1 << (CurrentIrql + 1)) & 4u | v84[5];
              v84[5] = v74;
            }
LABEL_157:
            if ( *(_BYTE *)(v73 + 6297) )
            {
              v85 = *(_QWORD *)(i - 58);
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v85 + 24), &v101);
              if ( !*i )
              {
                *i = 1;
                MiWakeZeroingThreads(v85, 2LL);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
              OldIrql = v101.OldIrql;
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v87 = KeGetCurrentIrql();
                  if ( v87 <= 0xFu && v101.OldIrql <= 0xFu && v87 >= 2u )
                  {
                    v88 = KeGetCurrentPrcb();
                    v89 = v88->SchedulerAssist;
                    v90 = ~(unsigned __int16)(-1LL << (v101.OldIrql + 1));
                    v16 = (v90 & v89[5]) == 0;
                    v74 = (unsigned int)v90 & v89[5];
                    v89[5] = v74;
                    if ( v16 )
                      KiRemoveSystemWorkPriorityKick(v88);
                  }
                }
              }
              __writecr8(OldIrql);
            }
            else
            {
              v101.LockQueue.Next = 0LL;
              v101.LockQueue.Lock = (unsigned __int64 *volatile)(v73 + 4928);
              KxAcquireQueuedSpinLock(&v101, v73 + 4928, v74);
              if ( !*i )
              {
                *i = 1;
                KeSetEvent((PRKEVENT)(v73 + 6272), 0, 0);
              }
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&v101);
            }
            if ( !v79 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v91 = KeGetCurrentIrql();
                  if ( v91 <= 0xFu && CurrentIrql <= 0xFu && v91 >= 2u )
                  {
                    v92 = KeGetCurrentPrcb();
                    v93 = v92->SchedulerAssist;
                    v94 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v16 = (v94 & v93[5]) == 0;
                    v74 = (unsigned int)v94 & v93[5];
                    v93[5] = v74;
                    if ( v16 )
                      KiRemoveSystemWorkPriorityKick(v92);
                  }
                }
              }
              __writecr8(CurrentIrql);
            }
            goto LABEL_180;
          }
          if ( (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 1LL) >= 0x400
            && (unsigned __int64)MiNodeLargeFreeZeroPages(i - 4490, 4LL, 0LL) < 0x100000 )
          {
            goto LABEL_157;
          }
        }
LABEL_180:
        result = 2LL;
      }
    }
  }
  return result;
}
