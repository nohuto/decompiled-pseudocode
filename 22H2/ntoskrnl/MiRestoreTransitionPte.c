/*
 * XREFs of MiRestoreTransitionPte @ 0x1402FB620
 * Callers:
 *     MiWriteCompletePfn @ 0x1402A6310 (MiWriteCompletePfn.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiHandleInPageError @ 0x1402FB5D4 (MiHandleInPageError.c)
 *     MiRelinkStandbyPage @ 0x14033AFE8 (MiRelinkStandbyPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x1405512A0 (MiReuseStandbyPage.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140218D20 (MiIsPfnFileOnly.c)
 *     KeInsertQueueDpc @ 0x14021FD00 (KeInsertQueueDpc.c)
 *     MI_IS_RESET_PTE @ 0x14023D690 (MI_IS_RESET_PTE.c)
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402D1100 (KxAcquireQueuedSpinLock.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F4E60 (MiDereferenceControlAreaPfnList.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MI_CLEAR_RESET_PTE @ 0x14031B060 (MI_CLEAR_RESET_PTE.c)
 *     MiGetTopLevelPfn @ 0x140333500 (MiGetTopLevelPfn.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiGetPagingFileOffset @ 0x14033A2B0 (MiGetPagingFileOffset.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  _QWORD *v4; // r14
  BOOL IsPfnFileOnly; // r12d
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 TopLevelPfn; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int8 *v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  IsPfnFileOnly = MiIsPfnFileOnly(BugCheckParameter2);
  MiClearPfnImageVerified(BugCheckParameter2, 12LL);
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x1000000000LL) != 0
      || (v6 = *(_QWORD *)(BugCheckParameter2 + 8), v6 <= 0) )
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
        && !(unsigned int)MiGetPagingFileOffset(BugCheckParameter2 + 16)
        && MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
      {
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
        v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      }
    }
    else
    {
      v7 = *(_QWORD *)(BugCheckParameter2 + 40);
      *(_QWORD *)(BugCheckParameter2 + 8) = v6 | 0x8000000000000000uLL;
    }
  }
  else
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*(_QWORD *)(BugCheckParameter2 + 16)) )
        MI_CLEAR_RESET_PTE(BugCheckParameter2 + 16);
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v9 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v9 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v9 + 1872));
    }
    v7 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v7 & 0xFFFFFFFFFLL) == (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48 )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((v7 >> 39) & 0x3FF));
  v24 = *(_QWORD *)(BugCheckParameter2 + 16);
  MiSetNonResidentPteHeat(&v24, 0);
  if ( v4 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = 48 * (v7 & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v7 & 0xFFFFFFFFFLL, v11, 0x80000000, v12)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v14 = v24;
  if ( !MiPteInShadowRange((unsigned __int64)v4) )
    goto LABEL_31;
  if ( !(unsigned int)MiPteHasShadow(v16, v15, v17, v18) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v14 & 1) != 0 )
      v14 |= 0x8000000000000000uLL;
LABEL_31:
    *v4 = v14;
    goto LABEL_32;
  }
  if ( !HIBYTE(word_140C4E008) && (v14 & 1) != 0 )
    v14 |= 0x8000000000000000uLL;
  *v4 = v14;
  MiWritePteShadow(v4, v14);
LABEL_32:
  if ( v13 )
  {
    LOBYTE(v15) = 17;
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, v15, 0x80000000LL);
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
  {
    v20 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( (v20 & 0x400) != 0 )
    {
      if ( qword_140C4DF40 && (v20 & 0x10) == 0 )
        v20 &= ~qword_140C4DF40;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v20 >> 16), v20 >> 16, v19, 3LL);
    }
  }
  if ( v13 )
  {
    MiLockNestedPageAtDpcInline(v13);
    MiDecrementShareCount(v13);
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !IsPfnFileOnly )
  {
    *(_QWORD *)(BugCheckParameter2 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 4280));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( P )
      {
        LockHandle.LockQueue.Next = 0LL;
        LockHandle.LockQueue.Lock = &qword_140C4E840;
        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)&qword_140C4E840);
        v21 = (unsigned __int64)P;
        if ( !P )
          goto LABEL_54;
        v22 = (__int64)P[2].Next & 0xFFF;
        if ( ((__int64)P[2].Next & 0xFFF) != 0 )
        {
          P[2].Next->Next = (_SLIST_ENTRY *)((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
          *(_QWORD *)(v21 + 32) += 8LL;
          v22 = *(_QWORD *)(v21 + 32) & 0xFFFLL;
        }
        if ( v22 < 0xC00 )
        {
          if ( v22 )
            v21 = 0LL;
          else
            *(_QWORD *)(v21 + 24) = MEMORY[0xFFFFF78000000320];
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
        else
        {
LABEL_54:
          v21 = (unsigned int)dword_140C4E828;
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        }
      }
      else
      {
        v21 = (unsigned int)dword_140C4E828;
      }
      if ( v21 )
        KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    }
  }
}
