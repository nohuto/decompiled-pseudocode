/*
 * XREFs of MiHandleSpecialPurposeMemoryCachedFault @ 0x14065DE28
 * Callers:
 *     MmCopyToCachedPage @ 0x14021DBE0 (MmCopyToCachedPage.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiResolveTransitionFault @ 0x140271760 (MiResolveTransitionFault.c)
 * Callees:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiComputeFaultNode @ 0x14028AE90 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiReplaceTransitionPage @ 0x1402C6784 (MiReplaceTransitionPage.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiReleaseFreshPage @ 0x14034E570 (MiReleaseFreshPage.c)
 *     MiReturnFreeZeroPage @ 0x14034E5C4 (MiReturnFreeZeroPage.c)
 *     MiPageAvailableEx @ 0x140350274 (MiPageAvailableEx.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 *     MiReuseStandbyPage @ 0x14064F6CC (MiReuseStandbyPage.c)
 */

ULONG_PTR __fastcall MiHandleSpecialPurposeMemoryCachedFault(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        ULONG_PTR a4)
{
  __int64 v6; // r9
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // edx
  signed __int32 v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 Page; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v25; // rbx
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 **v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v9 = **(_QWORD **)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL)) + 16944LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v10 = *(_QWORD *)(a4 + 16);
    if ( (v10 & 0x400) != 0 )
    {
      if ( qword_140C657C0 && (v10 & 0x10) == 0 )
        v10 &= ~qword_140C657C0;
      v6 = *(_QWORD *)(v10 >> 16);
    }
  }
  if ( a1 )
  {
    v11 = MiComputeFaultNode(a1, v6, &v27);
    v12 = *(_QWORD *)(a1 + 56);
    v13 = v11;
  }
  else
  {
    v13 = (*(_DWORD *)(v6 + 56) >> 20) & 0x7F;
    v12 = 0LL;
  }
  MiInitializePageColorBase(v12, v13, (__int64)&v26);
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u);
  v15 = HIDWORD(v26) | v14 & DWORD2(v26);
  v16 = 9;
  if ( (unsigned int)MiGetSystemRegionType(a2) != 12 )
    v16 = 1;
  Page = MiGetPage(v9, v15, v16);
  if ( Page != -1 )
    goto LABEL_26;
  v18 = *(_QWORD *)(v9 + 17216);
  v19 = v18 - 1;
  if ( !v18 )
    v19 = 0LL;
  if ( (unsigned int)MiPageAvailableEx(v9, v19, v16) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    Page = MiGetPage(v20, v15, v16 & 0xFFFFFFFE);
    if ( Page == -1 )
      return 0LL;
    if ( (unsigned __int64)a3 < 0xFFFFF68000000000uLL || (unsigned __int64)a3 > 0xFFFFF6FFFFFFFFFFuLL )
      v21 = MiLockLeafPage(a3, 2);
    else
      v21 = MiLockTransitionLeafPageEx((ULONG_PTR)a3, 0LL, 1);
    a4 = v21;
    if ( !v21 )
    {
      v22 = 48 * Page - 0x220000000000LL;
LABEL_30:
      MiReleaseFreshPage(v22);
      return 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x80u) == 0 )
    {
      v23 = 48 * Page - 0x220000000000LL;
      MiLockNestedPageAtDpcInline(v23);
      MiReturnFreeZeroPage(v23);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return a4;
    }
LABEL_26:
    v25 = 48 * Page - 0x220000000000LL;
    if ( (MiUnlinkPageFromListEx(a4, 4uLL) & 3) == 0 && *(char *)(a4 + 35) >= 0 )
    {
      MiLockNestedPageAtDpcInline(v25);
      MiReplaceTransitionPage(a4, v25, 6);
      *(_QWORD *)(a4 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a4 + 16));
      MiReturnFreeZeroPage(a4);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiInsertPageInList(v25, 4u);
      return v25;
    }
    MiDiscardTransitionPteEx(a4, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v25;
    goto LABEL_30;
  }
  MiReuseStandbyPage(a4);
  MiReturnFreeZeroPage(a4);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
