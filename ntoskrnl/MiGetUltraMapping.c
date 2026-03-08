/*
 * XREFs of MiGetUltraMapping @ 0x140276080
 * Callers:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiMakeProtoTransition @ 0x1402C59B0 (MiMakeProtoTransition.c)
 *     MiFillPhysicalPages @ 0x1402CE820 (MiFillPhysicalPages.c)
 *     MiAllocateHyperSpace @ 0x1402EF1E0 (MiAllocateHyperSpace.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 *     MiComputeCombineHash @ 0x14032C2E0 (MiComputeCombineHash.c)
 *     MiGetPteMappingSet @ 0x14032E050 (MiGetPteMappingSet.c)
 *     MiDeleteUltraMapContext @ 0x1403513B4 (MiDeleteUltraMapContext.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1403BFBC8 (MiInitializeNewUltraHugeContext.c)
 *     MiReplacePageOfProtoPool @ 0x14061B5A0 (MiReplacePageOfProtoPool.c)
 *     MiHugePageOperation @ 0x14061E158 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x14062CC90 (MmMapMdl.c)
 *     MiScrubLargePage @ 0x14065C38C (MiScrubLargePage.c)
 *     MiScrubPage @ 0x14065CB10 (MiScrubPage.c)
 * Callees:
 *     RtlFindSetBitsAndClearEx @ 0x14020F8A0 (RtlFindSetBitsAndClearEx.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiReuseUltraPageTable @ 0x140466B2C (MiReuseUltraPageTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rbp
  unsigned __int64 ValidPte; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rbx
  unsigned __int64 *v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // ebx
  int v37; // ebx
  unsigned __int64 SetBitsAndClear; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdi
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdi
  __int64 v43; // r15
  __int64 *v44; // r14
  unsigned __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v51; // r9
  unsigned __int64 i; // r8
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r11
  __int64 v56; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v60; // eax
  bool v61; // zf
  unsigned __int8 v62; // cl
  struct _KPRCB *v63; // r10
  _DWORD *v64; // r8
  int v65; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v67; // [rsp+70h] [rbp+8h]
  _QWORD *v68; // [rsp+70h] [rbp+8h]

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_21;
    v10 = v4 & 0x1FFFFF;
    v11 = a3 << 12;
    if ( (a3 << 12) + v10 > 0x200000 )
    {
      v4 = (v4 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
      *a1 = v4;
    }
    else if ( v10 != 0 && (a4 & 2) == 0 )
    {
      *a1 = v11 + v4;
      return v4;
    }
    v13 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v67 = (_QWORD *)v13;
    if ( a2 <= 1 )
    {
      v49 = 2 - a2;
      do
      {
        v13 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v49;
      }
      while ( v49 );
      v67 = (_QWORD *)v13;
    }
    v14 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v13) )
    {
      if ( (unsigned int)MiPteHasShadow(v16, v15, v17) )
      {
        if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
          v14 = v55 | ZeroPte;
        v56 = v14;
        *v67 = v14;
        v18 = (unsigned __int64)v67;
        MiWritePteShadow(v67, v56);
LABEL_10:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v19 = v18 + 8;
            v68 = (_QWORD *)v19;
            if ( (v19 & 0xFFF) != 0 )
            {
              if ( byte_140C65769 )
                MiReuseUltraPageTable(a1, 1LL);
              v20 = (__int64)(v19 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v19, a1[2], -1207959548);
              if ( (unsigned int)MiPteInShadowRange(v68) )
              {
                if ( (unsigned int)MiPteHasShadow(v23, v22, v24) )
                {
                  if ( !HIBYTE(word_140C6697C) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v68 = ValidPte;
                  MiWritePteShadow(v68, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v68 = ValidPte;
LABEL_17:
              result = v20;
              *a1 = v11 + v20;
              return result;
            }
          }
          goto LABEL_21;
        }
        if ( a2 > 1 )
        {
          v25 = (unsigned __int64 *)(((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v26 = ZeroPte;
          if ( (unsigned int)MiPteInShadowRange(v25) )
          {
            if ( (unsigned int)MiPteHasShadow(v28, v27, v29) )
            {
              if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
                v26 = ZeroPte | 0x8000000000000000uLL;
              *v25 = v26;
              MiWritePteShadow(v25, v26);
              goto LABEL_21;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v26 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v25 = v26;
        }
LABEL_21:
        v4 -= v9;
        goto LABEL_22;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v14 = v55 | ZeroPte;
      }
    }
    *v67 = v14;
    v18 = (unsigned __int64)v67;
    goto LABEL_10;
  }
LABEL_22:
  KeAcquireInStackQueuedSpinLock(&qword_140C68170, &LockHandle);
  if ( !v4 )
  {
    v36 = a4 & 2;
    goto LABEL_28;
  }
  v30 = (v4 - qword_140C68178) >> 30;
  v31 = ZeroPte;
  v32 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( (unsigned int)MiPteInShadowRange(v32) )
  {
    if ( (unsigned int)MiPteHasShadow(v34, v33, v35) )
    {
      if ( !HIBYTE(word_140C6697C) && (ZeroPte & 1) != 0 )
        v31 = ZeroPte | 0x8000000000000000uLL;
      *v32 = v31;
      MiWritePteShadow(v32, v31);
      goto LABEL_25;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v31 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v32 = v31;
LABEL_25:
  v36 = a4 & 2;
  if ( (a4 & 2) == 0 && byte_140C65769 != (_BYTE)v36 && a1[1] != -1LL )
    MiReuseUltraPageTable(a1, 0LL);
  _bittestandset64((signed __int64 *)qword_140C681A0, v30);
LABEL_28:
  if ( v36 )
  {
    *a1 = 0LL;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v61 = (v60 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v60;
        if ( v61 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    return 0LL;
  }
  else
  {
    v37 = 0;
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx((unsigned __int64 *)&qword_140C68188, 1uLL, qword_140C68180);
      v39 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0LL, 2LL);
      v51 = 0LL;
      for ( i = (unsigned __int64)qword_140C68188 >> 6; v51 < i; *v53 |= v54 )
      {
        v53 = (_QWORD *)(qword_140C68190 + 8 * v51);
        v54 = *((_QWORD *)qword_140C681A0 + v51++);
      }
      memset(qword_140C681A0, 0, 4 * (((qword_140C68198 & 0x1F) != 0) + ((unsigned __int64)qword_140C68198 >> 5)));
    }
    qword_140C68180 = SetBitsAndClear + 1;
    KxReleaseQueuedSpinLock(&LockHandle);
    v40 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v62 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v62 <= 0xFu && LockHandle.OldIrql <= 0xFu && v62 >= 2u )
      {
        v63 = KeGetCurrentPrcb();
        v64 = v63->SchedulerAssist;
        v65 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v61 = (v65 & v64[5]) == 0;
        v64[5] &= v65;
        if ( v61 )
          KiRemoveSystemWorkPriorityKick(v63);
      }
    }
    __writecr8(v40);
    v41 = qword_140C68178 + (v39 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v41 + (a3 << 12);
    if ( a2 )
    {
      v42 = ((v41 >> 27) & 0x1FFFF8) - 0x90482600000LL;
      LOBYTE(v37) = a2 != 1;
      v43 = (unsigned int)(v37 + 1);
      v44 = (__int64 *)(a1 + 1);
      do
      {
        v45 = MiMakeValidPte(v42, *v44, -1207959548);
        if ( (unsigned int)MiPteInShadowRange(v42) )
        {
          if ( (unsigned int)MiPteHasShadow(v47, v46, v48) )
          {
            if ( !HIBYTE(word_140C6697C) && (v45 & 1) != 0 )
              v45 |= 0x8000000000000000uLL;
            *(_QWORD *)v42 = v45;
            MiWritePteShadow(v42, v45);
            goto LABEL_38;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v45 & 1) != 0 )
          {
            v45 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v42 = v45;
LABEL_38:
        ++v44;
        v42 = (__int64)(v42 << 25) >> 16;
        --v43;
      }
      while ( v43 );
    }
    return v41;
  }
}
