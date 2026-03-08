/*
 * XREFs of MiRestoreTransitionPte @ 0x14036A9C4
 * Callers:
 *     MiWriteCompletePfn @ 0x140212B10 (MiWriteCompletePfn.c)
 *     MiRelinkStandbyPage @ 0x140225A14 (MiRelinkStandbyPage.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiHandleInPageError @ 0x14036A984 (MiHandleInPageError.c)
 *     MiUnlinkStandbyPage @ 0x140464E9A (MiUnlinkStandbyPage.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiRepointPteAtExtendedStandby @ 0x14064F5DC (MiRepointPteAtExtendedStandby.c)
 *     MiReuseStandbyPage @ 0x14064F6CC (MiReuseStandbyPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiGetTopLevelPfn @ 0x14022A3D0 (MiGetTopLevelPfn.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     MiGetPfnPriority @ 0x14028A3F8 (MiGetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x14029EA80 (MiGetPagingFileOffset.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402CFBF0 (MiDereferenceControlAreaPfnList.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MI_IS_RESET_PTE @ 0x14032F190 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiTransferSoftwarePte @ 0x14032F630 (MiTransferSoftwarePte.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 */

void __fastcall MiRestoreTransitionPte(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // r13
  _QWORD *v4; // r15
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 *v8; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // r14d
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 TopLevelPfn; // rax
  unsigned __int64 v19; // rdx
  bool v20; // zf
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter2 + 40) >> 53;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = 0LL;
  v5 = v2 & 1;
  MiClearPfnImageVerified(BugCheckParameter2);
  v6 = *(_QWORD *)(BugCheckParameter2 + 40);
  if ( v6 >= 0 )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
    {
      if ( MI_IS_RESET_PTE(*v8) )
      {
        v17 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
        *v8 = MiUpdatePageFileHighInPte(v17, 0LL);
      }
      TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
      v19 = (*(_QWORD *)TopLevelPfn >> 13) & 0x7FFFFFFFFFF0LL | 0xFFFF800000000000uLL;
      if ( TopLevelPfn != BugCheckParameter2 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      if ( (*(_BYTE *)(v19 + 1851) & 0x60) == 0x40 )
        _InterlockedIncrement64((volatile signed __int64 *)(v19 + 1872));
    }
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (v9 & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4) )
      v4 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL);
  }
  else if ( (v6 & 0x10000000000LL) != 0 || (v7 = *(_QWORD *)(BugCheckParameter2 + 8), v7 <= 0) )
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && !(unsigned int)MiGetPagingFileOffset((__int64 *)(BugCheckParameter2 + 16))
      && MI_IS_RESET_PTE(*v8) )
    {
      v16 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2 + 16);
      *v8 = MiUpdatePageFileHighInPte(v16, 0LL);
      v9 = *(_QWORD *)(BugCheckParameter2 + 40);
    }
  }
  else
  {
    v8 = (unsigned __int64 *)(BugCheckParameter2 + 16);
    *(_QWORD *)(BugCheckParameter2 + 8) = v7 | 0x8000000000000000uLL;
    v9 = v6;
  }
  v10 = *(_QWORD *)(qword_140C67048 + 8 * ((v9 >> 43) & 0x3FF));
  v11 = MiTransferSoftwarePte(*v8, 0LL, 0, 4);
  if ( v4 )
  {
    v12 = 0LL;
  }
  else
  {
    v12 = 48 * (v9 & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v4 = (_QWORD *)(MiMapPageInHyperSpaceWorker(v9 & 0xFFFFFFFFFFLL, 0LL, 0x80000000)
                  + 8LL * ((*(_DWORD *)(BugCheckParameter2 + 8) >> 3) & 0x1FF));
  }
  v13 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v4) )
  {
    if ( MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_8;
      v20 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_8;
      v20 = (v11 & 1) == 0;
    }
    if ( !v20 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_8:
  *v4 = v11;
  if ( v13 )
    MiWritePteShadow((__int64)v4, v11, v14);
  if ( v12 )
    MiUnmapPageInHyperSpaceWorker((unsigned __int64)v4, 0x11u);
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    v15 = *v8;
    if ( (*v8 & 0x400) != 0 )
    {
      if ( qword_140C657C0 && (v15 & 0x10) == 0 )
        v15 &= ~qword_140C657C0;
      MiDereferenceControlAreaPfnList(*(_QWORD *)(v15 >> 16), v15 >> 16, v14, 3);
    }
  }
  if ( v12 )
  {
    MiLockNestedPageAtDpcInline(v12);
    MiDecrementShareCount(v12);
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v5 )
  {
    MiSetPfnIdentity(BugCheckParameter2, 0);
    if ( (a2 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10
                                                      + 4LL * (unsigned int)MiGetPfnPriority(BugCheckParameter2)
                                                      + 6888));
      *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
      if ( ListEntry )
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
        v21 = (unsigned __int64)ListEntry;
        if ( !ListEntry )
          goto LABEL_53;
        v22 = (__int64)ListEntry[2].Next & 0xFFF;
        if ( v22 )
        {
          ListEntry[2].Next->Next = (_SLIST_ENTRY *)(0xAAAAAAAAAAAAAAABuLL
                                                   * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
          *(_QWORD *)(v21 + 32) += 8LL;
          v22 = *(_QWORD *)(v21 + 32) & 0xFFFLL;
        }
        if ( v22 < 0xC00 )
        {
          if ( v22 )
            v21 = 0LL;
          else
            *(_QWORD *)(v21 + 24) = MEMORY[0xFFFFF78000000320];
        }
        else
        {
LABEL_53:
          v21 = (unsigned int)dword_140C67C68;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      }
      else
      {
        v21 = (unsigned int)dword_140C67C68;
      }
      if ( v21 )
        KiInsertQueueDpc((ULONG_PTR)&dword_140C67F20, 0LL, 0LL, 0LL, 0);
    }
  }
}
