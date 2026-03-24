/*
 * XREFs of MiConvertStandbyToProto @ 0x1403668C8
 * Callers:
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiMakePrototypePteDirect @ 0x14027D390 (MiMakePrototypePteDirect.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x140283FF8 (MiTryLockLeafPage.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A6480 (MiPfnReferenceCountIsZero.c)
 *     MiMakeTransitionPte @ 0x1402AF040 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x140304A94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x14032161C (MiUnlockNestedProtoPoolPage.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiRecheckCombineVm @ 0x140367420 (MiRecheckCombineVm.c)
 *     MiComparePages @ 0x14036A380 (MiComparePages.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036A904 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036A95C (MiFillCombinePage.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055CE7C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D08C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiConvertStandbyToProto(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        ULONG_PTR BugCheckParameter2,
        __int64 a7,
        __int64 a8)
{
  int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r8
  char v12; // si
  __int64 v13; // r9
  __int64 v14; // rax
  ULONG_PTR **v15; // rdx
  ULONG_PTR *v16; // rcx
  __int64 TransitionPte; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int8 v21; // di
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 *v25; // r10
  _BOOL8 v26; // r9
  unsigned __int64 v27; // r11
  char v28; // si
  bool v29; // zf
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  _DWORD *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rdi
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v44; // eax
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rdi
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r9
  __int64 *v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  char v60; // [rsp+20h] [rbp-98h]
  char v61; // [rsp+21h] [rbp-97h]
  char v62; // [rsp+22h] [rbp-96h]
  int v63; // [rsp+24h] [rbp-94h]
  __int64 v64; // [rsp+28h] [rbp-90h] BYREF
  __int64 ContainingPageTable; // [rsp+30h] [rbp-88h]
  __int64 v66; // [rsp+38h] [rbp-80h]
  ULONG_PTR *v67; // [rsp+40h] [rbp-78h]
  unsigned __int64 v68; // [rsp+48h] [rbp-70h]
  int v69; // [rsp+50h] [rbp-68h] BYREF
  __int64 v70; // [rsp+58h] [rbp-60h]
  __int64 v71; // [rsp+60h] [rbp-58h]
  __int64 v72; // [rsp+68h] [rbp-50h]
  ULONG_PTR *v73; // [rsp+70h] [rbp-48h]
  int v76; // [rsp+C8h] [rbp+10h]
  __int64 v77; // [rsp+C8h] [rbp+10h]
  unsigned __int64 v78; // [rsp+C8h] [rbp+10h]
  int v81; // [rsp+E0h] [rbp+28h]
  int v82; // [rsp+E0h] [rbp+28h]
  __int64 v83; // [rsp+F8h] [rbp+40h]

  ContainingPageTable = BugCheckParameter2;
  v64 = 0LL;
  v8 = *(_DWORD *)(a5 + 40) & 0x1F;
  v63 = v8;
  v9 = MiMakePrototypePteDirect(a5 + 48) | 0x800;
  v71 = v9;
  v11 = (__int64)(*(_QWORD *)(v10 + 56) << 25) >> 16;
  v70 = v11;
  v60 = 0;
  v12 = 1;
  v61 = 1;
  v14 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v13 + 174));
  v66 = v14;
  v16 = *v15;
  v67 = v16;
  v73 = v16;
  if ( a8 == -1 )
  {
    v61 = 1;
    if ( v16 != (ULONG_PTR *)v14 )
    {
      v21 = 1;
      v60 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v16, 1LL) )
        goto LABEL_15;
      v61 = 0;
    }
    v45 = MiLockProtoPoolPage(a5 + 48, 0LL);
    v46 = v45;
    v72 = v45;
    if ( !v45 )
    {
LABEL_85:
      v21 = v60;
      goto LABEL_15;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
    {
      MiUnlockProtoPoolPage(v45, 0x11u);
      goto LABEL_85;
    }
    if ( a7 == (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
      && v66 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
      && (unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
      && (MiTryLockLeafPage((__int64 *)(a5 + 48), v47, &v64), (v48 = v64) != 0) )
    {
      if ( (*(_BYTE *)(v64 + 35) & 0x40) == 0
        && !MiIsPageOnBadList(v64)
        && v67 == *(ULONG_PTR **)(qword_140C4E648 + 8 * ((*(_QWORD *)(v48 + 40) >> 39) & 0x3FFLL))
        && ((*(_BYTE *)(v48 + 34) & 7) == 6 || (*(_BYTE *)(v48 + 34) & 0x20) == 0) )
      {
        v78 = MiMapPageInHyperSpaceWorker((v48 + 0x58000000000LL) / 48, 0LL, 0x80000000, v49);
        v62 = MiComparePages(v78, v70);
        LOBYTE(v50) = 17;
        MiUnmapPageInHyperSpaceWorker(v78, v50, 0x80000000LL);
        if ( v62 )
        {
          if ( (**(_BYTE **)(a3 + 56) & 1) != 0 )
          {
            if ( ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v63 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v46);
LABEL_101:
              _InterlockedAnd64((volatile signed __int64 *)(ContainingPageTable + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_85;
            }
            if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockNestedProtoPoolPage(v46);
              MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
              goto LABEL_101;
            }
            *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
            MiGetPfnPriority(BugCheckParameter2);
            MiUpdatePfnPriority(v48);
            _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockNestedProtoPoolPage(v46);
            if ( !v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)(a5 + 56), 1uLL) )
              MiReturnCrossPartitionCombineCharges(v67, 1LL);
            v83 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
            v52 = (__int64 *)(MiMapPageInHyperSpaceWorker(v83, 0LL, 0x80000000, v51)
                            + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
            v82 = 0;
            if ( MiPteInShadowRange((unsigned __int64)v52) )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v82 = 1;
                if ( !HIBYTE(word_140C4E008) )
                {
LABEL_112:
                  if ( (v9 & 1) != 0 )
                    v9 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                goto LABEL_112;
              }
            }
            *v52 = v9;
            if ( v82 )
              MiWritePteShadow((__int64)v52, v9, v54);
            LOBYTE(v53) = 17;
            MiUnmapPageInHyperSpaceWorker((unsigned __int64)v52, v53, 0x80000000LL);
            v55 = ContainingPageTable;
            *(_QWORD *)(ContainingPageTable + 24) |= 0x4000000000000000uLL;
            MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
            v56 = 48 * v83 - 0x58000000000LL;
            MiLockNestedPageAtDpcInline(v56, v57, v58, v59);
            MiDecrementShareCount(v56);
            _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_117;
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockNestedProtoPoolPage(v46);
    }
    else
    {
      MiUnlockNestedProtoPoolPage(v46);
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_85;
  }
  v64 = 48 * a8 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(v16, v64, BugCheckParameter2, v11) )
    goto LABEL_14;
  TransitionPte = MiMakeTransitionPte(a8, v8);
  v70 = (a5 + 48) & 0x7FFFFFFFFFFFFFFFLL;
  v68 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(a5 + 48);
  if ( v67 != (ULONG_PTR *)v66 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v67, 0LL) )
    {
      v12 = 0;
      v61 = 0;
      goto LABEL_6;
    }
LABEL_14:
    v21 = 0;
LABEL_15:
    if ( !v61 )
      MiReturnCrossPartitionCombineCharges(v67, v21);
    return 0LL;
  }
LABEL_6:
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69, v18, v19, v20);
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  if ( (**(_BYTE **)(a3 + 56) & 1) == 0
    || (unsigned __int8)((*(_BYTE *)(BugCheckParameter2 + 34) & 7) - 2) > 1u
    || v66 != *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL))
    || a7 != (*(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL)
    || !(unsigned int)MiRecheckCombineVm(a2, a4, BugCheckParameter2, a1)
    || ((*(_DWORD *)(BugCheckParameter2 + 16) >> 5) & 0x1F) != v63 )
  {
    goto LABEL_13;
  }
  if ( !(unsigned int)MiUnlinkPageFromList(BugCheckParameter2, 0) )
  {
    MiDiscardTransitionPteEx(BugCheckParameter2, 0LL);
LABEL_13:
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_14;
  }
  LOBYTE(v23) = *(_BYTE *)(BugCheckParameter2 + 34);
  v25 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  if ( (v23 & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(*v25) )
  {
    LOBYTE(v23) = v23 | 0x10;
    *(_BYTE *)(BugCheckParameter2 + 34) = v23;
  }
  v26 = 0LL;
  if ( (*v25 & 2) != 0 )
  {
    if ( v12 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v66, v25) )
      v68 = v27;
    else
      LOBYTE(v26) = 1;
    v28 = 1;
  }
  else
  {
    v29 = v12 == 0;
    v28 = 0;
    if ( v29 )
      v26 = (*v25 & 4) != 0;
  }
  if ( v26 )
  {
    v68 = MiCapturePageFileInfoInline(v25, 1, 1);
    *(_BYTE *)(BugCheckParameter2 + 34) |= 0x10u;
    v25 = (unsigned __int64 *)(BugCheckParameter2 + 16);
  }
  if ( v28 )
    *v25 &= ~2uLL;
  v30 = 48 * ContainingPageTable - 0x58000000000LL;
  MiLockNestedPageAtDpcInline(v30, v23, v24, v26);
  *(_QWORD *)(v30 + 24) ^= (*(_QWORD *)(v30 + 24) ^ ((*(_QWORD *)(v30 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockNestedPageAtDpcInline(v64, 0x3FFFFFFFFFFFFFFFLL, v31, v32);
  MiFinalizePageAttribute(v64, *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6, 1, v33);
  MiCopyPfnEntryEx(v64, BugCheckParameter2);
  if ( (unsigned int)MiGetPfnPriority(v34) < 5 )
    *(_BYTE *)(v64 + 35) = *(_BYTE *)(v64 + 35) & 0xF8 | 5;
  v35 = v64;
  *(_QWORD *)(v64 + 8) = v70;
  *(_QWORD *)(v35 + 40) = ContainingPageTable & 0xFFFFFFFFFLL | *(_QWORD *)(v35 + 40) & 0xFFFFFFF000000000uLL | 0x8000000000000000uLL;
  *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v35 + 16);
  if ( !v61 )
    *(_QWORD *)(a5 + 56) = 1LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  v76 = 0;
  if ( MiPteInShadowRange(a5 + 48) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v76 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_48;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_48;
    }
    if ( (TransitionPte & 1) != 0 )
      TransitionPte |= 0x8000000000000000uLL;
  }
LABEL_48:
  *(_QWORD *)(a5 + 48) = TransitionPte;
  if ( v76 )
    MiWritePteShadow(a5 + 48, TransitionPte, v36);
  v77 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
  v38 = (__int64 *)(MiMapPageInHyperSpaceWorker(v77, 0LL, 0x80000000, v37)
                  + (*(_DWORD *)(BugCheckParameter2 + 8) & 0xFFF));
  v81 = 0;
  if ( !MiPteInShadowRange((unsigned __int64)v38) )
    goto LABEL_57;
  if ( (unsigned int)MiPteHasShadow() )
  {
    v81 = 1;
    if ( !HIBYTE(word_140C4E008) )
    {
LABEL_55:
      if ( (v9 & 1) != 0 )
        v9 |= 0x8000000000000000uLL;
    }
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
  {
    goto LABEL_55;
  }
LABEL_57:
  *v38 = v9;
  if ( v81 )
    MiWritePteShadow((__int64)v38, v9, v40);
  LOBYTE(v39) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v38, v39, 0x80000000LL);
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  MiPfnReferenceCountIsZero(v64, a8);
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v61 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 16) & 4) != 0 )
    {
      *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
      if ( v68 )
        v68 &= ~4uLL;
    }
  }
  *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
  MiPfnReferenceCountIsZero(BugCheckParameter2, (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( !v61 )
    goto LABEL_77;
  MiReturnCommit(v66, 1LL);
  v41 = 1LL;
  if ( (ULONG_PTR *)v66 != &MiSystemPartition )
    goto LABEL_74;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_74;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v44 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              CachedResidentAvailable + 1,
              CachedResidentAvailable);
      v29 = (_DWORD)CachedResidentAvailable == v44;
      LODWORD(CachedResidentAvailable) = v44;
      if ( v29 )
        goto LABEL_75;
    }
    while ( v44 != -1 && (unsigned __int64)(v44 + 1LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v41 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v41 )
LABEL_74:
    v41 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v66 + 7168), v41);
LABEL_75:
  if ( v67 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFB8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_77:
  MiLockAndDecrementShareCount(48 * v77 - 0x58000000000LL, 0LL, v41);
  if ( v68 )
    MiReleasePageFileInfo(v66, v68, 1);
LABEL_117:
  if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[13],
      0xFFFFFFFFFFFFFFFFuLL);
  return 1LL;
}
