/*
 * XREFs of MiSwapNumaStandbyPage @ 0x140551310
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiPruneStandbyPages @ 0x140550D14 (MiPruneStandbyPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x14023FAD0 (MiSetPfnTbFlushStamp.c)
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetPfnChannel @ 0x140284844 (MiGetPfnChannel.c)
 *     MiSetPfnBlink @ 0x1402987B0 (MiSetPfnBlink.c)
 *     MiInsertNumaStandbyPage @ 0x1402A9F20 (MiInsertNumaStandbyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiIsDecayPfn @ 0x14031034C (MiIsDecayPfn.c)
 *     MiCanPageMove @ 0x1403349A0 (MiCanPageMove.c)
 *     MiUpdateTransitionPteFrame @ 0x1403369F0 (MiUpdateTransitionPteFrame.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     KeMakeKernelDirectoryTableBase @ 0x1403558E0 (KeMakeKernelDirectoryTableBase.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C344 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReuseStandbyPage @ 0x1405512A0 (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiSwapNumaStandbyPage(ULONG_PTR a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v4; // rbx
  __int64 v6; // r12
  unsigned int v7; // edx
  __int64 v8; // r15
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // r10
  unsigned __int8 *v12; // rax
  __int64 v13; // r13
  int v14; // r8d
  unsigned __int64 v15; // rax
  _QWORD *v16; // r13
  volatile __int64 *v17; // rdi
  unsigned __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  ULONG_PTR v21; // r13
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r9
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  _DWORD *v36; // r8
  int v37; // eax
  __int64 v38; // r11
  __int64 v39; // rdx
  __int64 v40; // r8
  _DWORD *v41; // r9
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  ULONG_PTR v47; // r9
  unsigned __int64 v48; // rdx
  volatile signed __int32 *v49; // r8
  unsigned int v50; // eax
  unsigned __int64 v51; // rcx
  __int64 v52; // r10
  ULONG_PTR v53; // rcx
  __int64 v54; // rbx
  unsigned __int64 *v55; // r8
  ULONG_PTR v56; // r10
  __int64 updated; // rax
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  _DWORD *v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r9
  __int64 v65; // r12
  unsigned __int64 v66; // rax
  __int64 v67; // rbx
  __int64 KernelDirectoryTableBase; // rax
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // r8
  int v76; // eax
  bool v77; // zf
  char v78; // bl
  char v79; // al
  char v80; // r8
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  _DWORD *v83; // r9
  int v84; // edx
  signed __int32 v85[8]; // [rsp+0h] [rbp-69h] BYREF
  int v86; // [rsp+20h] [rbp-49h]
  int v87; // [rsp+24h] [rbp-45h]
  __int64 v88; // [rsp+28h] [rbp-41h]
  unsigned __int8 *v89; // [rsp+30h] [rbp-39h]
  int v90; // [rsp+38h] [rbp-31h]
  _QWORD *v91; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  unsigned __int64 v93; // [rsp+60h] [rbp-9h]
  unsigned __int64 *v94; // [rsp+68h] [rbp-1h]
  __int64 v95; // [rsp+70h] [rbp+7h]
  int v96; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v97; // [rsp+80h] [rbp+17h]
  unsigned __int8 *v98; // [rsp+88h] [rbp+1Fh]
  int v100; // [rsp+D8h] [rbp+6Fh]

  v4 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a1;
  v7 = MmNumberOfChannels;
  v8 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  v100 = 0;
  v10 = (*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL;
  v86 = 0;
  v87 = MmNumberOfChannels;
  v11 = *(_QWORD *)(qword_140C4E648 + 8 * v10);
  v12 = 0LL;
  v95 = v11;
  v89 = 0LL;
  v13 = *(_QWORD *)(v11 + 16) + 4544 * v4;
  v97 = v13;
  v14 = *(_DWORD *)(v13 + 4280) & 1;
  v90 = v14;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    v12 = (unsigned __int8 *)(v13 + 4313);
    v89 = (unsigned __int8 *)(v13 + 4313);
    if ( v14 )
    {
      if ( (a4 & 0x20) != 0 )
      {
        v7 = 1;
        v100 = a3;
        v12 = 0LL;
        v87 = 1;
        v89 = 0LL;
        goto LABEL_10;
      }
      if ( (a4 & 8) != 0 )
      {
        v12 = (unsigned __int8 *)(v13 + 4317);
        v89 = (unsigned __int8 *)(v13 + 4317);
      }
    }
    else
    {
      if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4 )
        return v6;
      v12 = v89;
      v9 = a3;
      v7 = v87;
      v14 = v90;
      v11 = v95;
      v86 = a3;
    }
  }
  a3 = 0;
LABEL_10:
  v98 = &v12[v7];
  while ( 1 )
  {
    if ( v12 )
    {
      if ( v14 )
      {
        a3 = *v12;
        v100 = a3;
        if ( *((_DWORD *)MiSearchNumaNodeTable((v8 + 0x58000000000LL) / 48) + 2) == (_DWORD)v4
          && a3 == (unsigned int)MiGetPfnChannel(v8) )
        {
          return v6;
        }
        v11 = v95;
      }
      else
      {
        v100 = v9;
        a3 = v9;
        v9 = v9 + 1 < v7 ? v9 + 1 : 0;
        v86 = v9;
      }
    }
    v93 = v11 + 2752;
    v15 = v11 + 2432;
    v88 = v11 + 2432;
    if ( v11 + 2432 < (unsigned __int64)(v11 + 2752) )
      break;
LABEL_51:
    v12 = v89 + 1;
    v89 = v12;
    if ( v12 >= v98 )
      return v6;
    v7 = v87;
    v14 = v90;
  }
  v16 = (_QWORD *)(192LL * a3 + 3264 + v13);
  v17 = (volatile __int64 *)(v11 + 2464);
  v91 = v16;
  v18 = v11 + 2752;
  v94 = (unsigned __int64 *)(v11 + 2464);
  while ( *v16 == 0xFFFFFFFFFLL )
  {
LABEL_49:
    v15 += 40LL;
    v17 += 5;
    v16 += 3;
    v88 = v15;
    v94 = (unsigned __int64 *)v17;
    v91 = v16;
    if ( v15 >= v18 )
    {
      v9 = v86;
      v13 = v97;
      a3 = v100;
      v11 = v95;
      goto LABEL_51;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)v17;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v17);
  v21 = *v16;
  if ( v21 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v77 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v16 = v91;
    v15 = v88;
LABEL_48:
    v18 = v93;
    goto LABEL_49;
  }
  v26 = 48 * v21 - 0x58000000000LL;
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
    goto LABEL_53;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v96 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v96, v27, v28, v29);
    while ( *(__int64 *)(v26 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v26 + 34) & 7) != 2 )
  {
LABEL_40:
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v77 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick((__int64)v31);
        }
      }
    }
    __writecr8(CurrentIrql);
    v15 = v88 - 40;
    v17 = (volatile __int64 *)(v94 - 5);
    v16 = v91 - 3;
    goto LABEL_48;
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v94;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v94);
  if ( v21 != *v91 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_40;
  }
LABEL_53:
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v77 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v77 )
            KiRemoveSystemWorkPriorityKick((__int64)v35);
        }
      }
    }
    goto LABEL_70;
  }
  if ( MiCanPageMove(48 * v21 - 0x58000000000LL) )
  {
    if ( dword_140C4E6CC != 1 )
      goto LABEL_82;
    v47 = v21 & 0x1F;
    LOBYTE(v48) = 1;
    v49 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v21 >> 5));
    if ( v47 + 1 > 0x20 )
    {
      if ( (v21 & 0x1F) != 0 )
      {
        _InterlockedOr(v49++, ((1 << (32 - (v21 & 0x1F))) - 1) << v47);
        v48 = 1LL - (32 - (unsigned int)(v21 & 0x1F));
        if ( v48 >= 0x20 )
        {
          v51 = v48 >> 5;
          v48 += -32LL * (v48 >> 5);
          do
          {
            *v49++ = -1;
            --v51;
          }
          while ( v51 );
        }
        if ( !v48 )
        {
LABEL_82:
          v52 = v38 & *(_QWORD *)v26;
          v53 = v38 & *(_QWORD *)(v26 + 24);
          v54 = v38 & v6;
          if ( (*(_BYTE *)(v26 + 35) & 8) != 0 )
          {
            if ( MiIsDecayPfn(v53) )
            {
              updated = MiUpdateTransitionPteFrame(v55[2], v6);
              *(_QWORD *)(v58 + 16) = updated;
            }
            else
            {
              *v55 = v54 | *v55 & 0xFFFFFFF000000000uLL;
            }
            if ( MiIsDecayPfn(v56) )
            {
              *(_QWORD *)(v59 + 40) = v54 | *(_QWORD *)(v59 + 40) & 0xFFFFFFF000000000uLL;
              goto LABEL_96;
            }
            v60 = v59;
          }
          else
          {
            if ( v53 == v38 )
            {
              v61 = v88;
              *(_QWORD *)(v88 + 16) = v6;
            }
            else
            {
              *(_QWORD *)(48 * v53 - 0x58000000000LL) = v54 | *(_QWORD *)(48 * v53 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
              v61 = v88;
            }
            if ( v52 == v38 )
            {
              *(_QWORD *)(v61 + 24) = v6;
LABEL_96:
              MiUnlinkNumaStandbyPage(48 * v21 - 0x58000000000LL);
              MiFinalizePageAttribute(v8, *(unsigned __int8 *)(v26 + 34) >> 6, 1, v62);
              MiCopyPfnEntryEx(v8, 48 * v21 - 0x58000000000LL);
              MiInsertNumaStandbyPage(v63);
              _InterlockedOr(v85, 0);
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
                MiSetPfnTbFlushStamp(v8, KiTbFlushTimeStamp, 1);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              v65 = *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL;
              if ( v65 == v21 )
              {
                v66 = v54 | *(_QWORD *)(v8 + 40) & 0xFFFFFFF000000000uLL;
                v67 = a1;
                *(_QWORD *)(v8 + 40) = v66;
                KernelDirectoryTableBase = KeMakeKernelDirectoryTableBase(a1 << 12);
                *(_QWORD *)((v70 | v69) - 1392) = KernelDirectoryTableBase;
                v71 = (__int64 *)(v70 | *(_QWORD *)(v26 + 8));
              }
              else
              {
                v67 = a1;
                v71 = (__int64 *)(MiMapPageInHyperSpaceWorker(
                                    *(_QWORD *)(v26 + 40) & 0xFFFFFFFFFLL,
                                    0LL,
                                    0x80000000,
                                    v64)
                                + 8LL * ((*(_DWORD *)(v26 + 8) >> 3) & 0x1FF));
              }
              v72 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v71);
              v73 = MiUpdateTransitionPteFrame(v72, v67);
              if ( MiPteInShadowRange((unsigned __int64)v71) )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  v76 = 1;
                  if ( !HIBYTE(word_140C4E008) )
                  {
                    v77 = (v73 & 1) == 0;
                    goto LABEL_105;
                  }
                }
                else
                {
                  v76 = 0;
                  if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                  {
                    v77 = (v73 & 1) == 0;
LABEL_105:
                    if ( !v77 )
                      v73 |= 0x8000000000000000uLL;
                  }
                }
              }
              else
              {
                v76 = 0;
              }
              *v71 = v73;
              if ( v76 )
                MiWritePteShadow((__int64)v71, v73, v75);
              if ( v65 != v21 )
              {
                LOBYTE(v74) = 17;
                MiUnmapPageInHyperSpaceWorker((unsigned __int64)v71, v74, 0x80000000LL);
              }
              MiCopyPage(a1, v21, 0LL, 6);
              _InterlockedOr(v85, 0);
              v78 = KiTbFlushTimeStamp;
              if ( (((unsigned __int8)KiTbFlushTimeStamp ^ *(_BYTE *)(v8 + 31)) & 0xF) != 0 )
              {
                LockHandle.LockQueue.Next = 0LL;
                LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v88 + 32);
                KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v88 + 32));
                MiSetPfnTbFlushStamp(v8, v78, 1);
                KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
              }
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v79 = *(_BYTE *)(v26 + 34);
              *(_QWORD *)(v26 + 40) &= ~0x8000000000000000uLL;
              *(_BYTE *)(v26 + 34) = v79 & 0xC7;
              *(_BYTE *)(v26 + 35) &= ~0x20u;
              _InterlockedOr(v85, 0);
              MiSetPfnTbFlushStamp(48 * v21 - 0x58000000000LL, KiTbFlushTimeStamp, 1);
              *(_QWORD *)v26 = 0LL;
              MiSetPfnBlink(48 * v21 - 0x58000000000LL, 0LL, 1);
              *(_BYTE *)(v26 + 34) = *(_BYTE *)(v26 + 34) & 0xF8 | 5;
              *(_QWORD *)(v26 + 16) = ZeroPte;
              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v26 + 16));
              v80 = *(_BYTE *)(v26 + 35);
              *(_QWORD *)(v26 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(v26 + 35) = v80 & 0xF7;
              *(_BYTE *)(v26 + 35) &= 0xF8u;
              _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v81 = KeGetCurrentIrql();
                  if ( v81 <= 0xFu && CurrentIrql <= 0xFu && v81 >= 2u )
                  {
                    v82 = KeGetCurrentPrcb();
                    v83 = v82->SchedulerAssist;
                    v84 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v77 = (v84 & v83[5]) == 0;
                    v83[5] &= v84;
                    if ( v77 )
                      KiRemoveSystemWorkPriorityKick((__int64)v82);
                  }
                }
              }
              __writecr8(CurrentIrql);
              return v21;
            }
            v60 = 48 * v52 - 0x58000000000LL;
          }
          MiSetPfnBlink(v60, v6, 0);
          goto LABEL_96;
        }
      }
      v50 = (1 << v48) - 1;
    }
    else
    {
      v50 = 1 << v47;
    }
    _InterlockedOr(v49, v50);
    goto LABEL_82;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiReuseStandbyPage(48 * v21 - 0x58000000000LL);
  *(_QWORD *)v26 = 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(v26 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiReleaseFreshPage(v8, v39, v40, v41);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v42 = KeGetCurrentIrql();
      if ( v42 <= 0xFu && CurrentIrql <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v77 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v77 )
          KiRemoveSystemWorkPriorityKick((__int64)v43);
      }
    }
  }
  v6 = v21;
LABEL_70:
  __writecr8(CurrentIrql);
  return v6;
}
