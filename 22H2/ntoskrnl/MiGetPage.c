/*
 * XREFs of MiGetPage @ 0x1402135D0
 * Callers:
 *     MiGetPageChain @ 0x140212CD0 (MiGetPageChain.c)
 *     MiMigratePfn @ 0x1402185B0 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x14023E170 (MiAllocateKernelStackPages.c)
 *     MiCopyOnWrite @ 0x14023EC70 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x14027BCA0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x1402A4700 (MiMakePageAvoidRead.c)
 *     MiPrivateFixup @ 0x1402E29C8 (MiPrivateFixup.c)
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiTradeTransitionPage @ 0x1403346F8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiGetSystemPage @ 0x140339EE8 (MiGetSystemPage.c)
 *     MiGetPoolPages @ 0x14033DA1C (MiGetPoolPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403546C4 (MiCreateUltraThreadContextHelper.c)
 *     MiGetPageTablePages @ 0x140356F00 (MiGetPageTablePages.c)
 *     MiAllocateMdlPagesByLists @ 0x140374EF4 (MiAllocateMdlPagesByLists.c)
 *     MiGetFileHashPage @ 0x14038C960 (MiGetFileHashPage.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MmAllocateNonChargedSecurePages @ 0x14053424C (MmAllocateNonChargedSecurePages.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiSplitDirectMapPage @ 0x14054207C (MiSplitDirectMapPage.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 *     MiBuildForkPte @ 0x1405581FC (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x14055A078 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x14055A9A4 (MiHandleForkTransitionPte.c)
 *     MiPfPrepareReadList @ 0x14063D030 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x1406FE0F4 (MiAllocateTopLevelPage.c)
 *     MiAllocateDriverPage @ 0x1406FF348 (MiAllocateDriverPage.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MiFillPerSessionProtos @ 0x1408D8030 (MiFillPerSessionProtos.c)
 *     MiComputeOptimalZeroPath @ 0x140A548A8 (MiComputeOptimalZeroPath.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 *     MiAllocateDummyPage @ 0x140A55B98 (MiAllocateDummyPage.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 *     MiInitializeGapFrames @ 0x140A66B10 (MiInitializeGapFrames.c)
 * Callees:
 *     MiUnlinkFreeOrZeroedPage @ 0x140235D30 (MiUnlinkFreeOrZeroedPage.c)
 *     MiPfnZeroingNeeded @ 0x1402384D0 (MiPfnZeroingNeeded.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiPageToChannel @ 0x14027F788 (MiPageToChannel.c)
 *     MiReturnFreeZeroPage @ 0x1402836D0 (MiReturnFreeZeroPage.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiReplenishPageSlist @ 0x140298D80 (MiReplenishPageSlist.c)
 *     MiCheckZeroFreeRebalance @ 0x1402993D0 (MiCheckZeroFreeRebalance.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiGetFreeOrZeroPageAnyColor @ 0x1402EC204 (MiGetFreeOrZeroPageAnyColor.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EC698 (MiGetPerfectColorHeadPage.c)
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EC8BC (KxTryToAcquireQueuedSpinLock.c)
 *     MiZeroPhysicalPage @ 0x1403578E0 (MiZeroPhysicalPage.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     MiArePageContentsZero @ 0x14054EB08 (MiArePageContentsZero.c)
 *     MiCheckNodeChannelStandbyCount @ 0x14054ED1C (MiCheckNodeChannelStandbyCount.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiPageAvailable @ 0x14055BEF4 (MiPageAvailable.c)
 */

__int64 __fastcall MiGetPage(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r10d
  __int64 *CurrentIrql; // r11
  __int64 v5; // r14
  unsigned int v6; // ebx
  int v7; // esi
  unsigned __int8 *SchedulerAssist; // r9
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned int v11; // r12d
  unsigned int v12; // edi
  __int64 v13; // rdx
  unsigned int v14; // ecx
  bool v15; // zf
  __int64 *v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned int i; // r13d
  _SLIST_HEADER *v20; // rcx
  __int64 PerfectColorHeadPage; // r14
  __int64 v22; // r13
  unsigned int v23; // r13d
  __int64 v24; // r8
  __int64 v25; // rdx
  ULONG_PTR v26; // rdi
  char *v27; // rax
  int v28; // eax
  int v30; // r8d
  int v31; // ecx
  unsigned int v32; // edx
  __int64 v33; // rcx
  ULONG_PTR v34; // r12
  __int64 *v35; // r13
  __int64 v36; // r12
  __int64 *v37; // rdx
  unsigned int v38; // r8d
  int v39; // eax
  _SLIST_HEADER *v40; // rcx
  __int64 FreeOrZeroPageAnyColor; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  int v49; // ecx
  volatile signed __int64 *v50; // rcx
  signed __int8 v51; // al
  __int64 *v52; // rdx
  unsigned __int8 *v54; // r8
  char *v55; // rax
  int v56; // r9d
  __int64 v57; // rdx
  int v58; // ecx
  volatile signed __int32 *v59; // r13
  unsigned __int8 v60; // al
  struct _KPRCB *v61; // r10
  int v62; // eax
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r10
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r10
  _DWORD *v68; // r9
  int v69; // eax
  unsigned __int8 v70; // al
  struct _KPRCB *v71; // r10
  _DWORD *v72; // r9
  int v73; // eax
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  unsigned __int8 v78; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v80; // r9
  int v81; // eax
  int v83; // eax
  __int64 v84; // rax
  BOOL v85; // esi
  unsigned int v86; // [rsp+30h] [rbp-A8h]
  unsigned int v87; // [rsp+34h] [rbp-A4h]
  volatile signed __int64 *v88; // [rsp+38h] [rbp-A0h]
  __int64 *v89; // [rsp+40h] [rbp-98h]
  unsigned __int8 *v90; // [rsp+48h] [rbp-90h]
  BOOL v91; // [rsp+50h] [rbp-88h]
  char v92; // [rsp+54h] [rbp-84h] BYREF
  char v93; // [rsp+55h] [rbp-83h] BYREF
  unsigned int v94; // [rsp+58h] [rbp-80h]
  int v95; // [rsp+5Ch] [rbp-7Ch] BYREF
  int v96; // [rsp+60h] [rbp-78h]
  __int64 *v97; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  __int64 v99; // [rsp+88h] [rbp-50h]
  __int64 v100; // [rsp+90h] [rbp-48h]
  unsigned __int8 *v101; // [rsp+98h] [rbp-40h]
  unsigned int v103; // [rsp+E8h] [rbp+10h]
  unsigned int v104; // [rsp+F8h] [rbp+20h]
  int v105; // [rsp+F8h] [rbp+20h]

  v103 = a2;
  v3 = MmNumberOfChannels;
  CurrentIrql = &MiFreeThenFree;
  v5 = a1;
  v96 = MmNumberOfChannels;
  v6 = a2 >> byte_140C4DE8C;
  v7 = 0;
  SchedulerAssist = 0LL;
  v9 = 1;
  v91 = 1;
  v86 = 0;
  v10 = a3;
  v11 = a2;
  v12 = a2 >> byte_140C4DE8C;
  while ( 2 )
  {
    v90 = 0LL;
LABEL_3:
    v13 = *(_QWORD *)(v5 + 16) + 4544LL * v12;
    if ( !*(_QWORD *)(v13 + 4176) && (_DWORD)InitializationPhase )
    {
      if ( (unsigned int)MiPageAvailable(v5, v10, a3, SchedulerAssist) )
      {
        SchedulerAssist = v90;
        goto LABEL_193;
      }
      return -1LL;
    }
    if ( v3 > 1 )
    {
      SchedulerAssist = (unsigned __int8 *)(v13 + 4313);
      v90 = (unsigned __int8 *)(v13 + 4313);
      if ( v12 == v6 )
      {
        v54 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
        v91 = (*(_DWORD *)(v13 + 4280) & 1) == 0;
        v90 = v54;
        SchedulerAssist = v54;
        if ( (v10 & 0x20) != 0 )
        {
          v90 = (unsigned __int8 *)(v13 + ((v10 & 8 | 0x21B2uLL) >> 1));
          if ( (*(_DWORD *)(v13 + 4280) & 1) != 0 )
          {
            v55 = &v93;
            v56 = (unsigned __int16)(unsigned __int8)MiChannelMaximumPowerOf2Mask & (unsigned __int16)(v11 >> byte_140C4DE8D);
            v92 = MiChannelMaximumPowerOf2Mask & (v11 >> byte_140C4DE8D);
            v57 = v3;
            do
            {
              v58 = *v54;
              if ( v58 != v56 )
                *v55++ = v58;
              ++v54;
              --v57;
            }
            while ( v57 );
            SchedulerAssist = (unsigned __int8 *)&v92;
            v90 = (unsigned __int8 *)&v92;
          }
        }
        CurrentIrql = &MiFreeThenFree;
        v86 = *SchedulerAssist;
      }
    }
    LODWORD(a3) = v10 & 2;
    v101 = &SchedulerAssist[v3];
    v94 = a3;
    do
    {
      if ( SchedulerAssist )
      {
        v14 = v11 & dword_140C4DEF8 | (v12 << byte_140C4DE8C) | (*SchedulerAssist << byte_140C4DE8D);
        v103 = v14;
      }
      else
      {
        v14 = v103;
      }
      v15 = (_DWORD)a3 == 0;
      v16 = &MiZeroThenZero;
      v17 = v14;
      if ( v15 )
        v16 = CurrentIrql;
      v100 = v14;
      v18 = 16LL * v14;
      v99 = v18;
      for ( i = *(_DWORD *)v16; ; i = *((_DWORD *)v16 + 1) )
      {
        v20 = (_SLIST_HEADER *)(v18 + *(_QWORD *)(v5 + 8LL * (int)i + 4200));
        if ( LOWORD(v20->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v20);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !i )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_15;
            }
            if ( ZeroPte )
            {
              v46 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
            }
            else
            {
              v45 = 128LL;
              if ( !qword_140C4DF40 )
              {
LABEL_68:
                *(_QWORD *)(PerfectColorHeadPage + 16) = v45;
LABEL_15:
                *(_QWORD *)PerfectColorHeadPage = 0LL;
                goto LABEL_16;
              }
              if ( (qword_140C4DF40 & 0x80) != 0 )
              {
                v45 = 144LL;
                goto LABEL_68;
              }
              v46 = qword_140C4DF40;
            }
            v45 = v46 | 0x80;
            goto LABEL_68;
          }
          v18 = v99;
          v5 = a1;
        }
        if ( i == *((_DWORD *)v16 + 1) )
          break;
      }
      v104 = *(_DWORD *)v16;
      v32 = v104;
      memset(&LockHandle, 0, sizeof(LockHandle));
      v33 = *(_QWORD *)(v5 + 8LL * (int)v104 + 2176);
      v34 = *(_QWORD *)(v33 + 40 * v100 + 16);
      v35 = (__int64 *)(v33 + 40 * v100);
      v97 = v35;
      if ( v34 == 0xFFFFFFFFFLL )
      {
LABEL_45:
        PerfectColorHeadPage = 0LL;
        goto LABEL_16;
      }
      v49 = v10 & 1;
      while ( 2 )
      {
        PerfectColorHeadPage = 48 * v34 - 0x58000000000LL;
        if ( v49 )
        {
          v50 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL) )
            goto LABEL_45;
          LOBYTE(CurrentIrql) = 17;
          v89 = CurrentIrql;
        }
        else
        {
          CurrentIrql = (__int64 *)KeGetCurrentIrql();
          v89 = CurrentIrql;
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
          {
            SchedulerAssist = (unsigned __int8 *)KeGetCurrentPrcb()->SchedulerAssist;
            v17 = (unsigned int)(-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4 | *((_DWORD *)SchedulerAssist + 5);
            v32 = v104;
            *((_DWORD *)SchedulerAssist + 5) = v17;
          }
          v50 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          v51 = _interlockedbittestandset64((volatile signed __int32 *)(PerfectColorHeadPage + 24), 0x3FuLL);
          v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
          if ( (v10 & 0x4000) != 0 )
          {
            v95 = 0;
            if ( v51 )
            {
              v59 = (volatile signed __int32 *)(PerfectColorHeadPage + 24);
              do
              {
                do
                  KeYieldProcessorEx(&v95);
                while ( *(__int64 *)v59 < 0 );
              }
              while ( _interlockedbittestandset64(v59, 0x3FuLL) );
              v35 = v97;
              v32 = v104;
              v50 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
              CurrentIrql = v89;
            }
          }
          else
          {
            v88 = (volatile signed __int64 *)(PerfectColorHeadPage + 24);
            if ( v51 )
            {
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v78 = KeGetCurrentIrql();
                  if ( v78 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v78 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    v80 = CurrentPrcb->SchedulerAssist;
                    v81 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                    v15 = (v81 & v80[5]) == 0;
                    v80[5] &= v81;
                    if ( v15 )
                    {
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                      LOBYTE(CurrentIrql) = (_BYTE)v89;
                    }
                  }
                }
              }
              __writecr8((unsigned __int8)CurrentIrql);
              goto LABEL_45;
            }
          }
        }
        if ( (*(_BYTE *)(PerfectColorHeadPage + 34) & 7) != v32 )
        {
          _InterlockedAnd64(v50, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)CurrentIrql != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v60 = KeGetCurrentIrql();
                if ( v60 <= 0xFu && (unsigned __int8)CurrentIrql <= 0xFu && v60 >= 2u )
                {
                  v61 = KeGetCurrentPrcb();
                  SchedulerAssist = (unsigned __int8 *)v61->SchedulerAssist;
                  v62 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
                  v15 = (v62 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  v17 = (unsigned int)v62 & *((_DWORD *)SchedulerAssist + 5);
                  *((_DWORD *)SchedulerAssist + 5) = v17;
                  if ( v15 )
                  {
                    KiRemoveSystemWorkPriorityKick(v61);
                    CurrentIrql = v89;
                  }
                  v32 = v104;
                }
              }
            }
            __writecr8((unsigned __int8)CurrentIrql);
          }
          goto LABEL_107;
        }
        LockHandle.LockQueue.Next = 0LL;
        v52 = v35 + 4;
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v35 + 4);
        if ( (v10 & 0x4000) != 0 )
        {
          KxAcquireQueuedSpinLock(&LockHandle, v52, v17);
        }
        else if ( !(unsigned int)KxTryToAcquireQueuedSpinLock(&LockHandle, v52, v17, SchedulerAssist) )
        {
          _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v89 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v74 = KeGetCurrentIrql();
                if ( v74 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v74 >= 2u )
                {
                  v75 = KeGetCurrentPrcb();
                  v76 = v75->SchedulerAssist;
                  v77 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                  v15 = (v77 & v76[5]) == 0;
                  v76[5] &= v77;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v75);
                }
              }
            }
            __writecr8((unsigned __int8)v89);
          }
          goto LABEL_45;
        }
        if ( v34 != v35[2] )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
          if ( (_BYTE)v89 != 17 )
          {
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v63 = KeGetCurrentIrql();
                if ( v63 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v63 >= 2u )
                {
                  v64 = KeGetCurrentPrcb();
                  SchedulerAssist = (unsigned __int8 *)v64->SchedulerAssist;
                  v65 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                  v15 = (v65 & *((_DWORD *)SchedulerAssist + 5)) == 0;
                  v17 = (unsigned int)v65 & *((_DWORD *)SchedulerAssist + 5);
                  *((_DWORD *)SchedulerAssist + 5) = v17;
                  if ( v15 )
                    KiRemoveSystemWorkPriorityKick(v64);
                }
              }
            }
            __writecr8((unsigned __int8)v89);
          }
          v32 = v104;
LABEL_107:
          v34 = v35[2];
          if ( v34 == 0xFFFFFFFFFLL )
            goto LABEL_45;
          v49 = v10 & 1;
          continue;
        }
        break;
      }
      if ( (unsigned int)MiUnlinkFreeOrZeroedPage(v34) )
      {
        _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v10 & 1) != 0 )
        {
          v22 = a1;
        }
        else
        {
          v15 = v35[2] == 0xFFFFFFFFFLL;
          v22 = a1;
          if ( !v15 )
            MiReplenishPageSlist(a1, v104, v103);
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        if ( (_BYTE)v89 != 17 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v70 = KeGetCurrentIrql();
              if ( v70 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v70 >= 2u )
              {
                v71 = KeGetCurrentPrcb();
                v72 = v71->SchedulerAssist;
                v73 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
                v15 = (v73 & v72[5]) == 0;
                v72[5] &= v73;
                if ( v15 )
                  KiRemoveSystemWorkPriorityKick(v71);
              }
            }
          }
          __writecr8((unsigned __int8)v89);
        }
        goto LABEL_17;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      MiReturnFreeZeroPage(48 * v34 - 0x58000000000LL, 0LL);
      _InterlockedAnd64(v88, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (_BYTE)v89 != 17 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v66 = KeGetCurrentIrql();
            if ( v66 <= 0xFu && (unsigned __int8)v89 <= 0xFu && v66 >= 2u )
            {
              v67 = KeGetCurrentPrcb();
              v68 = v67->SchedulerAssist;
              v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v89 + 1));
              v15 = (v69 & v68[5]) == 0;
              v68[5] &= v69;
              if ( v15 )
                KiRemoveSystemWorkPriorityKick(v67);
            }
          }
        }
        __writecr8((unsigned __int8)v89);
      }
      PerfectColorHeadPage = 1LL;
LABEL_16:
      v22 = a1;
LABEL_17:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
      {
LABEL_19:
        v23 = v86;
LABEL_20:
        *(_QWORD *)PerfectColorHeadPage = 0LL;
        v24 = 0x2AAAAAAAAAAAAAABLL;
        v25 = (unsigned int)dword_140C4DE88;
        v26 = (PerfectColorHeadPage + 0x58000000000LL) / 48;
        if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
          || (v27 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, v26 < *(_QWORD *)v27)
          || dword_140C4DE84 != dword_140C4DE88 && v26 >= *((_QWORD *)v27 + 2) )
        {
          v30 = 0;
          if ( dword_140C4DE88 < 0 )
LABEL_220:
            KeBugCheckEx(0x1Au, 0x6201uLL, (PerfectColorHeadPage + 0x58000000000LL) / 48, 0LL, 0LL);
          while ( 1 )
          {
            v31 = (v30 + (int)v25) >> 1;
            v27 = (char *)qword_140C4DEC8 + 16 * v31;
            if ( v26 < *(_QWORD *)v27 )
            {
              if ( !v31 )
                KeBugCheckEx(
                  0x1Au,
                  0x6200uLL,
                  (PerfectColorHeadPage + 0x58000000000LL) / 48,
                  (ULONG_PTR)qword_140C4DEC8,
                  0LL);
              v25 = (unsigned int)(v31 - 1);
            }
            else
            {
              if ( v31 == dword_140C4DE88 || v26 < *((_QWORD *)v27 + 2) )
              {
                dword_140C4DE84 = (v30 + (int)v25) >> 1;
                v24 = 0x2AAAAAAAAAAAAAABLL;
                break;
              }
              v30 = v31 + 1;
            }
            if ( (int)v25 < v30 )
              goto LABEL_220;
          }
        }
        if ( *((_DWORD *)v27 + 2) == v6 )
        {
          if ( qword_140C4DED0 )
          {
            v28 = MiPageToChannel((PerfectColorHeadPage + 0x58000000000LL) / 48);
            v24 = 0x2AAAAAAAAAAAAAABLL;
          }
          else
          {
            v28 = 0;
          }
          if ( v28 != v23 )
          {
            v85 = v91;
            if ( !v91 )
            {
LABEL_210:
              if ( (v10 & 1) == 0 )
              {
                if ( (v10 & 0x80u) == 0 )
                {
                  v26 = MiSwapNumaStandbyPage((PerfectColorHeadPage + 0x58000000000LL) / 48, v6, v23, v10 | 0x10);
                  PerfectColorHeadPage = 48 * v26 - 0x58000000000LL;
                  v24 = 0x2AAAAAAAAAAAAAABLL;
                }
                if ( (v10 & 0x10) != 0
                  && *(_DWORD *)(MiSearchNumaNodeTable((PerfectColorHeadPage + 0x58000000000LL) / 48) + 8) != v6
                  || (v10 & 0x20) != 0 && (unsigned int)MiGetPfnChannel(PerfectColorHeadPage, v25, v24) != v23 && !v85 )
                {
                  MiReleaseFreshPage(PerfectColorHeadPage);
                  return -1LL;
                }
              }
            }
          }
          if ( (v10 & 0x200) == 0 )
          {
            if ( (v10 & 0x400) != 0 )
            {
              v9 = 0;
            }
            else
            {
              v9 = 3;
              if ( (v10 & 0x800) != 0 )
                v9 = 2;
            }
          }
          if ( (v10 & 0x100) != 0 && (unsigned int)MiPfnZeroingNeeded(PerfectColorHeadPage, v9) )
          {
            MiZeroPhysicalPage(v26);
            *(_QWORD *)(PerfectColorHeadPage + 16) &= 0xFFFFFFFFFFFFFC1FuLL;
          }
          if ( v9 != 3 && *(unsigned __int8 *)(PerfectColorHeadPage + 34) >> 6 != v9 )
            MiChangePageAttribute(PerfectColorHeadPage, v9, 0LL);
          return v26;
        }
        v85 = v91;
        goto LABEL_210;
      }
      v36 = v99;
      v37 = &MiZeroThenZero;
      v38 = v10 & 0xFFFFFFFD;
      if ( !v94 )
        v38 = v10 | 2;
      v87 = v38;
      if ( (v38 & 2) == 0 )
        v37 = &MiFreeThenFree;
      v97 = v37;
      v39 = *(_DWORD *)v37;
      while ( 2 )
      {
        v105 = v39;
        v40 = (_SLIST_HEADER *)(v36 + *(_QWORD *)(v22 + 8LL * v39 + 4200));
        if ( LOWORD(v40->Alignment) )
        {
          PerfectColorHeadPage = (__int64)RtlpInterlockedPopEntrySList(v40);
          if ( PerfectColorHeadPage )
          {
            *(_QWORD *)(PerfectColorHeadPage + 16) = ZeroPte;
            if ( !v105 )
            {
              if ( (MiFlags & 0x80u) != 0 && (++dword_140C4E7CC & MmPageValidationFrequency) == 0 )
                MiArePageContentsZero((PerfectColorHeadPage + 0x58000000000LL) / 48);
              goto LABEL_55;
            }
            if ( ZeroPte )
            {
              v48 = ZeroPte & 0xFFFFFFFFFFFFFC9FuLL;
LABEL_73:
              v47 = v48 | 0x80;
            }
            else
            {
              v47 = 128LL;
              if ( qword_140C4DF40 )
              {
                if ( (qword_140C4DF40 & 0x80u) == 0LL )
                {
                  v48 = qword_140C4DF40;
                  goto LABEL_73;
                }
                v47 = 144LL;
              }
            }
            *(_QWORD *)(PerfectColorHeadPage + 16) = v47;
LABEL_55:
            v11 = v103;
            *(_QWORD *)PerfectColorHeadPage = 0LL;
            goto LABEL_56;
          }
          v37 = v97;
        }
        v39 = *((_DWORD *)v37 + 1);
        if ( v105 != v39 )
          continue;
        break;
      }
      v11 = v103;
      PerfectColorHeadPage = MiGetPerfectColorHeadPage(
                               v22,
                               *(_DWORD *)(v22 + 8LL * *(int *)v37 + 2176) + 40 * (int)v100,
                               v103,
                               *(_DWORD *)v37,
                               v87);
LABEL_56:
      if ( PerfectColorHeadPage == 1 )
        return -1LL;
      if ( PerfectColorHeadPage )
        goto LABEL_19;
      MiCheckZeroFreeRebalance(v22, v11);
      FreeOrZeroPageAnyColor = MiGetFreeOrZeroPageAnyColor(v22, v11, v10);
      PerfectColorHeadPage = FreeOrZeroPageAnyColor;
      if ( FreeOrZeroPageAnyColor == 1 )
        return -1LL;
      if ( FreeOrZeroPageAnyColor )
        goto LABEL_19;
      v42 = MiGetFreeOrZeroPageAnyColor(v22, v11, v87);
      PerfectColorHeadPage = v42;
      if ( v42 == 1 )
        return -1LL;
      if ( v42 )
        goto LABEL_19;
      v5 = a1;
      if ( !(unsigned int)MiPageAvailable(a1, v10, v43, v44) )
        return -1LL;
      CurrentIrql = &MiFreeThenFree;
      a3 = v94;
      SchedulerAssist = v90 + 1;
      v90 = SchedulerAssist;
    }
    while ( SchedulerAssist != v101 );
    v3 = v96;
LABEL_193:
    if ( (v10 & 0x4000) == 0 )
    {
      if ( ++v7 != (unsigned __int16)KeNumberNodes && (v10 & 0x10) == 0 )
      {
        v12 = *(_DWORD *)(qword_140C4DE98 + 4LL * (v7 + v6 * (unsigned __int16)KeNumberNodes));
        if ( v3 == 1 )
        {
          SchedulerAssist = 0LL;
          v83 = v11 & dword_140C4DEF8;
          v11 = v11 & dword_140C4DEF8 | (v12 << byte_140C4DE8C);
          v103 = v83 | (v12 << byte_140C4DE8C);
          continue;
        }
        goto LABEL_3;
      }
      if ( (v10 & 1) == 0 )
      {
        v23 = v86;
        if ( (v10 & 0x30) == 0 || (unsigned int)MiCheckNodeChannelStandbyCount(v5, v6, v86, SchedulerAssist) )
        {
          v84 = MiRemoveLowestPriorityStandbyPage(v5, 8LL, v10, SchedulerAssist);
          if ( v84 != -1 )
          {
            PerfectColorHeadPage = 48 * v84 - 0x58000000000LL;
            goto LABEL_20;
          }
        }
      }
    }
    return -1LL;
  }
}
