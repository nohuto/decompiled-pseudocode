/*
 * XREFs of MiGetUltraMapping @ 0x140234070
 * Callers:
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiAllocateHyperSpace @ 0x14023CA7C (MiAllocateHyperSpace.c)
 *     MiPfnShareCountIsZero @ 0x1402A6820 (MiPfnShareCountIsZero.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402ACA70 (MiDecrementAndInsertStandbyPages.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiDeleteUltraMapContext @ 0x140357B94 (MiDeleteUltraMapContext.c)
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 *     MiInitializeNewUltraHugeContext @ 0x140399FC4 (MiInitializeNewUltraHugeContext.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403AB548 (MiTimeSingleLargePageZeroWorker.c)
 *     MiZeroWithUltraSpace @ 0x1403F4B98 (MiZeroWithUltraSpace.c)
 *     MiHugePageOperation @ 0x140532EB8 (MiHugePageOperation.c)
 *     MmMapMdl @ 0x1405374F0 (MmMapMdl.c)
 *     MiScrubNodeLargePageList @ 0x140556D78 (MiScrubNodeLargePageList.c)
 *     MiCombinePte @ 0x14055C840 (MiCombinePte.c)
 *     MiScrubPage @ 0x140564234 (MiScrubPage.c)
 *     MiCombineAllPhysicalMemory @ 0x140727470 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x14022FA90 (KeFlushTb.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     RtlFindSetBitsAndClearEx @ 0x1403266F0 (RtlFindSetBitsAndClearEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall MiGetUltraMapping(unsigned __int64 *a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned __int64 v4; // rdi
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r11
  __int64 *v22; // r11
  __int64 v23; // rbp
  __int64 ValidPte; // rbx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v33; // r13
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 v35; // r13
  __int64 v36; // rdi
  _QWORD *v37; // r14
  __int64 v38; // rbp
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // r13
  unsigned __int64 v46; // rbx
  unsigned __int64 *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  unsigned __int64 v52; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r8
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // r10
  _DWORD *v60; // r8
  int v61; // eax
  bool v62; // zf
  unsigned __int64 v63; // r9
  unsigned __int64 i; // r8
  unsigned __int64 *v65; // rdx
  __int64 v66; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v70; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  _QWORD *v72; // [rsp+70h] [rbp+8h]
  __int64 *v73; // [rsp+70h] [rbp+8h]
  unsigned __int64 *v74; // [rsp+70h] [rbp+8h]

  v4 = *a1;
  v9 = MiUltraMapSizes[a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
  {
    if ( a2 == 1 )
    {
      v10 = v9 << 9;
    }
    else
    {
      if ( !a2 )
        goto LABEL_39;
      v10 = 0x200000LL;
    }
    v11 = v10 - 1;
    v12 = a3 << 12;
    if ( (a3 << 12) + (v4 & (v10 - 1)) > v10 )
    {
      v4 = ~v11 & (v10 + v4 - 1);
      *a1 = v4;
    }
    if ( (v11 & v4) != 0 && (a4 & 2) == 0 )
    {
      *a1 = v12 + v4;
      return v4;
    }
    v14 = (((v4 - 1) >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v72 = (_QWORD *)v14;
    if ( a2 <= 1 )
    {
      v57 = 2 - a2;
      do
      {
        v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v57;
      }
      while ( v57 );
      v72 = (_QWORD *)v14;
    }
    v15 = ZeroPte;
    v16 = MiPteInShadowRange(v14, 0xFFFFF68000000000uLL);
    v20 = 0x8000000000000000uLL;
    if ( v16 )
    {
      if ( (unsigned int)MiPteHasShadow(v17, 0x8000000000000000uLL, v18, v19) )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v15 = v20 | ZeroPte;
        *v72 = v15;
        MiWritePteShadow(v72, v15);
LABEL_12:
        if ( (a4 & 2) == 0 )
        {
          if ( a2 != 1 )
          {
            v22 = (__int64 *)(v21 + 8);
            v73 = v22;
            if ( ((unsigned __int16)v22 & 0xFFF) != 0 )
            {
              v23 = (__int64)((_QWORD)v22 << 25) >> 16 << 25 >> 16;
              ValidPte = MiMakeValidPte(v22, a1[2], 3087007748LL);
              if ( (unsigned int)MiPteInShadowRange(v73, v25) )
              {
                if ( (unsigned int)MiPteHasShadow(v27, v26, v28, v29) )
                {
                  if ( !HIBYTE(word_140C4E008) && (ValidPte & 1) != 0 )
                    ValidPte |= 0x8000000000000000uLL;
                  *v73 = ValidPte;
                  MiWritePteShadow(v73, ValidPte);
                  goto LABEL_17;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (ValidPte & 1) != 0 )
                {
                  ValidPte |= 0x8000000000000000uLL;
                }
              }
              *v73 = ValidPte;
LABEL_17:
              result = v23;
              *a1 = v12 + v23;
              return result;
            }
          }
          goto LABEL_39;
        }
        if ( a2 > 1 )
        {
          v52 = ZeroPte;
          v74 = (unsigned __int64 *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          if ( (unsigned int)MiPteInShadowRange(v74, v20) )
          {
            if ( (unsigned int)MiPteHasShadow(v54, v53, v55, v56) )
            {
              if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
                v52 = ZeroPte | 0x8000000000000000uLL;
              *v74 = v52;
              MiWritePteShadow(v74, v52);
              goto LABEL_39;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (ZeroPte & 1) != 0 )
            {
              v52 = ZeroPte | 0x8000000000000000uLL;
            }
          }
          *v74 = v52;
        }
LABEL_39:
        v4 -= v9;
        goto LABEL_19;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v15 = v20 | ZeroPte;
      }
    }
    v21 = (unsigned __int64)v72;
    *v72 = v15;
    goto LABEL_12;
  }
LABEL_19:
  KeAcquireInStackQueuedSpinLock(&qword_140C4EBF0, &LockHandle);
  if ( !v4 )
    goto LABEL_20;
  v45 = (v4 - qword_140C4EBF8) >> 30;
  v46 = ZeroPte;
  v47 = (unsigned __int64 *)(((v4 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  if ( (unsigned int)MiPteInShadowRange(v47, v30) )
  {
    if ( (unsigned int)MiPteHasShadow(v49, v48, v50, v51) )
    {
      if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
        v46 = ZeroPte | 0x8000000000000000uLL;
      *v47 = v46;
      MiWritePteShadow(v47, v46);
      goto LABEL_35;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v46 = ZeroPte | 0x8000000000000000uLL;
    }
  }
  *v47 = v46;
LABEL_35:
  _bittestandset64((signed __int64 *)qword_140C4EC20, v45);
LABEL_20:
  if ( (a4 & 2) == 0 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(&BitMapHeader, 1uLL, HintIndex);
      v33 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 2u);
      v63 = 0LL;
      for ( i = BitMapHeader.SizeOfBitMap >> 6; v63 < i; *v65 |= v66 )
      {
        v65 = &BitMapHeader.Buffer[v63];
        v66 = *((_QWORD *)qword_140C4EC20 + v63++);
      }
      memset(qword_140C4EC20, 0, 4 * (((unsigned __int64)qword_140C4EC18 >> 5) + ((qword_140C4EC18 & 0x1F) != 0)));
    }
    HintIndex = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v70 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v62 = (v70 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v70;
          if ( v62 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v35 = qword_140C4EBF8 + (v33 << 30);
    if ( (a4 & 1) == 0 )
      *a1 = v35 + (a3 << 12);
    if ( !a2 )
      return v35;
    v36 = ((v35 >> 27) & 0x1FFFF8) - 0x90482600000LL;
    v37 = a1 + 1;
    v38 = (a2 != 1) + 1LL;
    while ( 1 )
    {
      v39 = MiMakeValidPte(v36, *v37, 3087007748LL);
      if ( (unsigned int)MiPteInShadowRange(v36, v40) )
      {
        if ( (unsigned int)MiPteHasShadow(v42, v41, v43, v44) )
        {
          if ( !HIBYTE(word_140C4E008) && (v39 & 1) != 0 )
            v39 |= 0x8000000000000000uLL;
          *(_QWORD *)v36 = v39;
          MiWritePteShadow(v36, v39);
          goto LABEL_31;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v39 & 1) != 0 )
        {
          v39 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v36 = v39;
LABEL_31:
      ++v37;
      v36 = v36 << 25 >> 16;
      if ( !--v38 )
        return v35;
    }
  }
  *a1 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v31 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v58 = KeGetCurrentIrql();
      if ( v58 <= 0xFu && LockHandle.OldIrql <= 0xFu && v58 >= 2u )
      {
        v59 = KeGetCurrentPrcb();
        v60 = v59->SchedulerAssist;
        v61 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v62 = (v61 & v60[5]) == 0;
        v60[5] &= v61;
        if ( v62 )
          KiRemoveSystemWorkPriorityKick(v59);
      }
    }
  }
  __writecr8(v31);
  return 0LL;
}
