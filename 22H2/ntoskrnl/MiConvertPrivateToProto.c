/*
 * XREFs of MiConvertPrivateToProto @ 0x1403699A0
 * Callers:
 *     MiSharePages @ 0x140367CB0 (MiSharePages.c)
 * Callees:
 *     MiGetPfnPriority @ 0x140218590 (MiGetPfnPriority.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiGetContainingPageTable @ 0x14023DDC0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiReturnCommit @ 0x140298920 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14029A790 (MiLockProtoPoolPage.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402B73B0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiRemoveWsle @ 0x1402B9670 (MiRemoveWsle.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     EtwpLogKernelEvent @ 0x1402D0790 (EtwpLogKernelEvent.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DAED0 (MiRebuildPageTableLeafAges.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x140304A94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWriteValidPteNewPage @ 0x14030E048 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x140339D50 (MiGetWsleContents.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiComparePages @ 0x14036A380 (MiComparePages.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036A858 (MiUpdateWorkingSetPrivateSize.c)
 *     MI_MAKE_PROTECT_WRITE_COPY @ 0x14036A904 (MI_MAKE_PROTECT_WRITE_COPY.c)
 *     MiFillCombinePage @ 0x14036A95C (MiFillCombinePage.c)
 *     MiSetWsleProtection @ 0x14036AB70 (MiSetWsleProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiGetCrossPartitionCombineCharges @ 0x14055CE7C (MiGetCrossPartitionCombineCharges.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x14055D08C (MiReturnCrossPartitionCombineCharges.c)
 */

__m128i *__fastcall MiConvertPrivateToProto(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 v7; // r15
  __m128i *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r13
  int v21; // r10d
  __m128i *v22; // r14
  __int64 v23; // r9
  _DWORD *v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rbx
  __int64 v30; // r8
  int HasShadow; // eax
  __int64 v32; // r11
  int v33; // eax
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r13
  unsigned __int64 v40; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v43; // zf
  signed __int32 v44; // eax
  __int64 v45; // r14
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v52; // r9
  __int64 v53; // r13
  unsigned __int64 v54; // rbx
  __int64 v55; // rdx
  __int64 v56; // rbx
  __int64 v57; // rcx
  char WsleContents; // al
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  char v62; // di
  BOOL v63; // r14d
  __int8 v64; // cl
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rbx
  unsigned __int64 v71; // r15
  unsigned int v72; // ebx
  __int64 v73; // r8
  __int64 v74; // rcx
  unsigned int v75; // ecx
  char v76; // [rsp+30h] [rbp-B1h]
  unsigned __int8 v77; // [rsp+31h] [rbp-B0h]
  char v78; // [rsp+32h] [rbp-AFh]
  int v80; // [rsp+40h] [rbp-A1h]
  __int64 v81; // [rsp+48h] [rbp-99h] BYREF
  __int64 v82; // [rsp+50h] [rbp-91h]
  unsigned __int64 v83; // [rsp+58h] [rbp-89h]
  int v84; // [rsp+60h] [rbp-81h] BYREF
  int v85; // [rsp+64h] [rbp-7Dh] BYREF
  int v86; // [rsp+68h] [rbp-79h] BYREF
  int v87; // [rsp+6Ch] [rbp-75h] BYREF
  __int64 v88; // [rsp+70h] [rbp-71h]
  __int64 v89; // [rsp+78h] [rbp-69h]
  __int64 v90; // [rsp+80h] [rbp-61h]
  __int64 v91; // [rsp+88h] [rbp-59h]
  __int64 v92; // [rsp+98h] [rbp-49h]
  __int64 ContainingPageTable; // [rsp+A0h] [rbp-41h]
  _KPROCESS *Process; // [rsp+A8h] [rbp-39h]
  __int128 v95; // [rsp+B0h] [rbp-31h] BYREF
  __int128 v96; // [rsp+C0h] [rbp-21h]
  _QWORD v97[2]; // [rsp+D0h] [rbp-11h] BYREF

  v7 = a3 + 48;
  v88 = a1;
  v95 = 0LL;
  v96 = 0LL;
  v90 = a6;
  v91 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v80 = DWORD1(PerfGlobalGroupMask) & 0x8000001;
  v81 = MI_READ_PTE_LOCK_FREE(a2);
  v10 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v81) >> 12) & 0xFFFFFFFFFLL)
                  - 0x58000000000LL);
  v11 = *(unsigned __int16 *)(a1 + 174);
  v12 = *a5;
  v82 = *a5;
  v13 = (__int64)(a2 << 25) >> 16;
  v83 = v13;
  v77 = 0;
  v14 = *(_QWORD *)(qword_140C4E648 + 8 * v11);
  v89 = v14;
  v76 = 1;
  if ( a7 == -1 )
  {
    v76 = 1;
    if ( v12 != v14 )
    {
      v77 = 1;
      if ( !(unsigned int)MiGetCrossPartitionCombineCharges(v12, 1LL) )
        return 0LL;
      v76 = 0;
    }
    v48 = MiLockProtoPoolPage(v7, 0LL);
    if ( v48 )
    {
      v49 = MiLockLeafPage((__int64 *)v7, 0, v46, v47);
      v50 = v49;
      if ( v49 )
      {
        if ( (*(_BYTE *)(v49 + 35) & 0x40) == 0 && !MiIsPageOnBadList(v49) )
        {
          v53 = v82;
          if ( v82 == *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v50 + 40) >> 39) & 0x3FFLL))
            && ((*(_BYTE *)(v50 + 34) & 7) == 6 || (*(_BYTE *)(v50 + 34) & 0x20) == 0) )
          {
            v54 = MiMapPageInHyperSpaceWorker((v50 + 0x58000000000LL) / 48, 0LL, 0x80000000, v52);
            v78 = MiComparePages(v54, v13);
            LOBYTE(v55) = 17;
            MiUnmapPageInHyperSpaceWorker(v54, v55, 0x80000000LL);
            if ( v78 == 1 )
            {
              MiGetPfnPriority((__int64)v10);
              MiUpdatePfnPriority(v50);
            }
            _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            MiUnlockProtoPoolPage(v48, 0x11u);
            if ( v78 )
            {
              if ( dword_140C4E828 )
                MI_WSLE_LOG_ACCESS(v88, (_BYTE *)a2);
              v56 = MiSwizzleInvalidPte((v7 << 16) | 0x400) | 0x800;
              WsleContents = MiGetWsleContents(v57, v83);
              v86 = 0;
              v62 = WsleContents;
              while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v86, v59, v60, v61);
                while ( v10[1].m128i_i64[1] < 0 );
              }
              if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) == 1 && v10[2].m128i_i16[0] == 1 )
              {
                v63 = MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED((__int64 *)a2, v56, v60, v61);
                if ( v80 )
                  MiIdentifyPfn(v10, (unsigned __int64 *)&v95);
                v64 = v10[2].m128i_i8[2];
                v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
                v65 = v10[2].m128i_i64[1] & 0xFFFFFFFFFLL;
                v10[2].m128i_i8[2] = v64 | 7;
                _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( v63 )
                  MiInsertTbFlushEntry(v90, v83, 1LL, 0);
                v45 = v88;
                MiRemoveWsle(v88, v83, 1LL, v62, 10, 1);
                MiRebuildPageTableLeafAges(v66, v83);
                v70 = 48 * v65 - 0x58000000000LL;
                v87 = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v70 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v87, v67, v68, v69);
                  while ( *(__int64 *)(v70 + 24) < 0 );
                }
                MiDecrementShareCount(v70);
                _InterlockedAnd64((volatile signed __int64 *)(v70 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( !v76 && _InterlockedIncrement64((volatile signed __int64 *)(v91 + 56)) != 1 )
                  MiReturnCrossPartitionCombineCharges(v53, 1LL);
                MiResolveProtoCombine(a2, v45, v7);
                goto LABEL_108;
              }
              _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            }
            v12 = v53;
            goto LABEL_79;
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v50 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      MiUnlockProtoPoolPage(v48, 0x11u);
    }
    v12 = v82;
LABEL_79:
    if ( !v76 )
      MiReturnCrossPartitionCombineCharges(v12, v77);
    return 0LL;
  }
  v15 = 48 * a7 - 0x58000000000LL;
  if ( !(unsigned int)MiFillCombinePage(a7, v15, v10, (__int64)(a2 << 25) >> 16) )
    return 0LL;
  v92 = v7 & 0x7FFFFFFFFFFFFFFFLL;
  v16 = 0LL;
  ContainingPageTable = MiGetContainingPageTable(v7);
  v20 = 48 * ContainingPageTable - 0x58000000000LL;
  if ( v12 != v89 )
  {
    if ( (unsigned int)MiGetCrossPartitionCombineCharges(v12, 0LL) )
    {
      v76 = 0;
      goto LABEL_6;
    }
    return 0LL;
  }
LABEL_6:
  v84 = 0;
  while ( _interlockedbittestandset64(&v10[1].m128i_i32[2], 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v84, v17, v18, v19);
    while ( v10[1].m128i_i64[1] < 0 );
  }
  v21 = 1;
  if ( (v10[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFLL) != 1 || v10[2].m128i_i16[0] != 1 )
  {
    _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_79;
  }
  if ( v80 )
  {
    MiIdentifyPfn(v10, (unsigned __int64 *)&v95);
    v21 = 1;
  }
  if ( (v81 & 0x42) != 0 )
    v81 &= 0xFFFFFFFFFFFFFFBDuLL;
  LOBYTE(v17) = v10[2].m128i_i8[2];
  if ( (v17 & 0x10) == 0 && !IS_PTE_NOT_DEMAND_ZERO(v10[1].m128i_i64[0]) )
  {
    LOBYTE(v17) = v17 | 0x10;
    v10[2].m128i_i8[2] = v17;
  }
  v22 = v10 + 1;
  v23 = v10[1].m128i_i64[0];
  if ( (((unsigned __int8)v23 >> 1) & (unsigned __int8)v21) != 0 )
  {
    if ( v76 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v89, (__m128i *)v10[1].m128i_i16) )
    {
      v16 = v23;
    }
    else
    {
      v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
      v10[2].m128i_i8[2] |= 0x10u;
    }
    v22->m128i_i64[0] &= ~2uLL;
  }
  else if ( !v76 )
  {
    LOBYTE(v23) = (unsigned __int8)v23 >> 2;
    if ( ((unsigned __int8)v23 & (unsigned __int8)v21) != 0 )
    {
      v16 = MiCapturePageFileInfoInline((unsigned __int64 *)&v10[1], v21, v21);
      v10[2].m128i_i8[2] |= 0x10u;
    }
  }
  MiLockNestedPageAtDpcInline(v15, v17, v18, v23);
  MiFinalizePageAttribute(v15, v10[2].m128i_u8[2] >> 6, 1, v24);
  MiCopyPfnEntryEx(v15, (__int64)v10);
  if ( (unsigned int)MiGetPfnPriority(v25) < 5 )
    *(_BYTE *)(v15 + 35) = *(_BYTE *)(v15 + 35) & 0xF8 | 5;
  v26 = ContainingPageTable;
  *(_QWORD *)(v15 + 8) = v92;
  *(_QWORD *)(v15 + 40) = *(_QWORD *)(v15 + 40) & 0xFFFFFFF000000000uLL | v26 & 0xFFFFFFFFFLL | 0x8000000000000000uLL;
  MI_MAKE_PROTECT_WRITE_COPY(v15 + 16);
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v76 )
  {
    if ( (v22->m128i_i64[0] & 4) != 0 )
    {
      v22->m128i_i64[0] &= ~4uLL;
      if ( v16 )
        v16 &= ~4uLL;
    }
  }
  v27 = v81 ^ (v81 ^ (a7 << 12)) & 0xFFFFFFFFF000LL;
  v81 = v27;
  v28 = v27;
  if ( (v27 & 0x800) != 0 )
  {
    v27 = v27 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
    v81 = v27;
    v28 = v27;
  }
  MiWriteValidPteNewPage((__int64 *)a2, v27, 0);
  if ( !v76 )
    *(_QWORD *)(v91 + 56) = 1LL;
  *(_QWORD *)v7 = 0LL;
  v29 = v28;
  if ( MiPteInShadowRange(v7) )
  {
    HasShadow = MiPteHasShadow();
    v32 = 1LL;
    if ( HasShadow )
    {
      v33 = 1;
      if ( !HIBYTE(word_140C4E008) && (v28 & 1) != 0 )
        v29 = v28 | 0x8000000000000000uLL;
      goto LABEL_47;
    }
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v28 & 1) != 0 )
      v29 = v28 | 0x8000000000000000uLL;
  }
  else
  {
    v32 = 1LL;
  }
  v33 = 0;
LABEL_47:
  *(_QWORD *)v7 = v29;
  if ( v33 )
    MiWritePteShadow(v7, v29, v30);
  v10[1].m128i_i64[1] |= 0x4000000000000000uLL;
  v10[2].m128i_i8[2] |= 7u;
  _InterlockedAnd64(&v10[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  v34 = v83;
  MiInsertTbFlushEntry(v90, v83, v32, 0);
  if ( v16 )
    MiReleasePageFileInfo(
      *(_QWORD *)(qword_140C4E648 + 8 * (((unsigned __int64)v10[2].m128i_i64[1] >> 39) & 0x3FF)),
      v16,
      1);
  v85 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v85, v35, v36, v37);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  v38 = *(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) ^ (*(_QWORD *)(v20 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v20 + 24) = v38;
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v76 != 1 )
    goto LABEL_68;
  v39 = v82;
  MiReturnCommit(v82, 1LL);
  v40 = 1LL;
  if ( (ULONG_PTR *)v39 != &MiSystemPartition )
    goto LABEL_65;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_65;
  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
  {
    do
    {
      v38 = (unsigned int)(CachedResidentAvailable + 1);
      v44 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
              v38,
              CachedResidentAvailable);
      v43 = (_DWORD)CachedResidentAvailable == v44;
      LODWORD(CachedResidentAvailable) = v44;
      if ( v43 )
        goto LABEL_66;
    }
    while ( v44 != -1 && (unsigned __int64)(v44 + 1LL) <= 0x100 );
  }
  v38 = 192LL;
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v40 = (int)CachedResidentAvailable - 192 + 1LL;
  }
  if ( v40 )
LABEL_65:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 7168), v40);
LABEL_66:
  if ( (ULONG_PTR *)v39 == &MiSystemPartition )
    _InterlockedExchangeAdd64(&qword_140C4EFB8, 0xFFFFFFFFFFFFFFFFuLL);
LABEL_68:
  v45 = v88;
  if ( (*(_BYTE *)(v88 + 184) & 7) == 0 )
    MiSetWsleProtection(v38, v34, 0LL);
  MiUpdateWorkingSetPrivateSize(v45, v34, -1LL, 0LL);
LABEL_108:
  if ( (*(_BYTE *)(v45 + 184) & 7) == 0 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
  if ( v80 )
  {
    if ( a7 == -1 )
      v71 = v7 & 0xFFFFFFFFFFFFFFFEuLL;
    else
      v71 = v7 | 1;
    *((_QWORD *)&v96 + 1) = v71;
    v97[0] = &v95;
    v97[1] = 32LL;
    v72 = *(_DWORD *)(EtwpHostSiloState + 4224);
    while ( 1 )
    {
      v43 = !_BitScanForward(&v75, v72);
      if ( v43 )
        break;
      v72 &= v72 - 1;
      v73 = v75;
      v74 = 32LL * v75 + EtwpHostSiloState + 4260;
      if ( v74 )
      {
        if ( (*(_DWORD *)(v74 + 4) & 0x8000001) != 0 )
          EtwpLogKernelEvent(
            (__int64)v97,
            EtwpHostSiloState,
            *(unsigned __int8 *)(EtwpHostSiloState + 2 * v73 + 4208),
            1u,
            0x27Au,
            0x11401B02u);
      }
    }
  }
  return v10;
}
