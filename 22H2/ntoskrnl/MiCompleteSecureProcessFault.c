/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1405480C4
 * Callers:
 *     MiAllocateWsle @ 0x140211C80 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140548E9C (MiValidVirtualizationFault.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MiCaptureDirtyBitToPfn @ 0x140290190 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiTradeActivePage @ 0x14030DD40 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x140310124 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x140357CD4 (MiReleaseFreshPage.c)
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 SlabPage; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned __int64 v28; // rax
  int v29; // [rsp+28h] [rbp-30h]
  int v30; // [rsp+60h] [rbp+8h] BYREF
  int v31; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( !MI_PFN_IS_PROTO(*a1) )
  {
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v30, v7, v8, v9);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v10 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL));
    v11 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v12 = (__int64)(v11 << 25) >> 16;
    if ( (*(_DWORD *)(v10 + 4) & 8) != 0 && !MiIsPfnFromSlabAllocation(v3) && v12 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), v13);
      SlabPage = MiGetSlabPage(v10, 0x18u, 0, a3, 0);
      if ( SlabPage == -1 )
      {
        if ( *a3 )
          return 0LL;
      }
      else
      {
        v18 = 48 * SlabPage - 0x58000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v18, v12, 1u, 0, v29) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
          MiReleaseFreshPage(v3, v22, v23, v24);
          v3 = v18;
          *a2 = MI_READ_PTE_LOCK_FREE(v11);
          *a1 = v18;
        }
        else
        {
          MiReleaseFreshPage(v18, v19, v20, v21);
        }
      }
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v31, v15, v16, v17);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
    {
      MiAbortCombineScan(v3);
      MiMarkPfnVerified(v3, 4, v26, v27);
    }
    v28 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v28 )
      MiReleasePageFileInfo(v10, v28, 1);
  }
  return 1LL;
}
