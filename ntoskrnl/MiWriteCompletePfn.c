/*
 * XREFs of MiWriteCompletePfn @ 0x140212B10
 * Callers:
 *     MiWriteComplete @ 0x1402126E0 (MiWriteComplete.c)
 *     MiBuildMappedCluster @ 0x140213100 (MiBuildMappedCluster.c)
 *     MiGatherPagefilePages @ 0x140637D34 (MiGatherPagefilePages.c)
 *     MiUnlockStoreLockedPages @ 0x14065A830 (MiUnlockStoreLockedPages.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiIsPfnCommitNotCharged @ 0x140286190 (MiIsPfnCommitNotCharged.c)
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14029DAB8 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 */

__int64 __fastcall MiWriteCompletePfn(ULONG_PTR BugCheckParameter2, char a2)
{
  __int64 v2; // rdi
  _DWORD *v5; // rcx
  _DWORD *v8; // r14
  unsigned int v9; // ebp
  unsigned __int64 v10; // r9

  v2 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v5 = (_DWORD *)(BugCheckParameter2 + 16);
    if ( (*v5 & 0x400LL) == 0 )
      v2 = MiCapturePageFileInfoInline(v5, 1LL, 0LL);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
  }
  else if ( (a2 & 2) != 0 )
  {
    v8 = (_DWORD *)(BugCheckParameter2 + 16);
    v9 = MI_IS_PTE_IN_WS_SWAP_SET(
           *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)),
           BugCheckParameter2 + 16);
    if ( !v9 && (*v8 & 2) != 0 )
      v9 = ((v10 >> 60) & 7) == 2;
    v2 = MiCapturePageFileInfoInline(v8, 1LL, v9);
    if ( v9 )
      *(_QWORD *)v8 &= ~2uLL;
  }
  *(_BYTE *)(BugCheckParameter2 + 34) &= ~8u;
  if ( (a2 & 8) != 0 )
    *(_BYTE *)(BugCheckParameter2 + 35) &= 0xF8u;
  if ( (*(_WORD *)(BugCheckParameter2 + 32))-- == 1 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0
      && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0
      && !(unsigned int)MiIsPfnCommitNotCharged(BugCheckParameter2) )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 43) & 0x3FFLL)), 1LL);
    }
    if ( (a2 & 4) != 0 )
    {
      MiRestoreTransitionPte(BugCheckParameter2);
      MiInsertPageInFreeOrZeroedList(0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
    else
    {
      MiPfnReferenceCountIsZero(
        BugCheckParameter2,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    }
  }
  return v2;
}
