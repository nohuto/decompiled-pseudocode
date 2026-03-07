__int64 __fastcall MiCombineInitialInstance(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned __int64 v4; // r11
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 *v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // r12
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r11
  __int64 v23; // r13
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  int v26; // edi
  BOOL v27; // edi
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  __int64 v30; // rdi
  __int64 v31; // r9
  __int64 v32; // rcx
  volatile signed __int64 *v33; // rdi
  ULONG_PTR v34; // rbx
  int v35; // edi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 *v39; // rax
  unsigned __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v44; // r9
  int v45; // esi
  unsigned __int64 *v46; // rax
  unsigned __int64 v47; // rdi
  int v48; // r13d
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  unsigned __int64 *v52; // r11
  __int64 v53; // rax
  __int64 v54; // rbx
  unsigned int v56; // [rsp+38h] [rbp-1A0h]
  BOOL v57; // [rsp+38h] [rbp-1A0h]
  unsigned int v58; // [rsp+3Ch] [rbp-19Ch] BYREF
  __int64 *v59; // [rsp+40h] [rbp-198h]
  unsigned __int64 *v60; // [rsp+48h] [rbp-190h]
  _QWORD *v61; // [rsp+50h] [rbp-188h]
  __int64 v62; // [rsp+58h] [rbp-180h]
  unsigned __int64 v63; // [rsp+60h] [rbp-178h]
  __int64 v64; // [rsp+68h] [rbp-170h] BYREF
  __int64 v65; // [rsp+70h] [rbp-168h]
  __int64 v66; // [rsp+78h] [rbp-160h]
  __int64 v67; // [rsp+80h] [rbp-158h]
  int v68; // [rsp+88h] [rbp-150h] BYREF
  ULONG_PTR v69; // [rsp+90h] [rbp-148h]
  unsigned __int64 v70; // [rsp+98h] [rbp-140h]
  _QWORD *v71; // [rsp+A0h] [rbp-138h]
  unsigned __int64 ContainingPageTable; // [rsp+A8h] [rbp-130h]
  __int64 v73; // [rsp+B0h] [rbp-128h]
  _QWORD *v74; // [rsp+B8h] [rbp-120h]
  __int64 v75; // [rsp+C0h] [rbp-118h]
  __int64 v76; // [rsp+C8h] [rbp-110h]
  __int64 v77; // [rsp+D0h] [rbp-108h]
  unsigned __int64 v78; // [rsp+D8h] [rbp-100h]
  _BYTE *v79; // [rsp+E0h] [rbp-F8h]
  __int64 v80; // [rsp+E8h] [rbp-F0h]
  __int64 v81; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v82; // [rsp+F8h] [rbp-E0h]
  unsigned __int64 v83; // [rsp+100h] [rbp-D8h]
  unsigned __int64 v84; // [rsp+108h] [rbp-D0h]
  __int64 v85; // [rsp+110h] [rbp-C8h]
  _QWORD *v86; // [rsp+118h] [rbp-C0h]
  _QWORD *v87; // [rsp+120h] [rbp-B8h]
  __int64 v88; // [rsp+128h] [rbp-B0h]
  __int64 v89; // [rsp+130h] [rbp-A8h]
  __int64 v90; // [rsp+138h] [rbp-A0h]
  __int64 v91; // [rsp+140h] [rbp-98h]
  __int64 v92; // [rsp+148h] [rbp-90h]
  unsigned int *v93; // [rsp+150h] [rbp-88h]
  __int64 v94; // [rsp+158h] [rbp-80h]
  __int64 v95; // [rsp+160h] [rbp-78h]
  _QWORD *v96; // [rsp+168h] [rbp-70h]
  _QWORD *v97; // [rsp+170h] [rbp-68h]
  __int128 v98; // [rsp+178h] [rbp-60h] BYREF
  __int128 v99; // [rsp+188h] [rbp-50h]
  __int64 *v100; // [rsp+198h] [rbp-40h] BYREF
  int v101; // [rsp+1A0h] [rbp-38h]
  int v102; // [rsp+1A4h] [rbp-34h]

  v62 = a2;
  v73 = a1;
  v88 = a1;
  v89 = a2;
  v90 = a3;
  v98 = 0LL;
  v99 = 0LL;
  v96 = (_QWORD *)(a1 + 296);
  v61 = *(_QWORD **)(a1 + 296);
  v87 = v61;
  v97 = (_QWORD *)(a1 + 304);
  v3 = *(_QWORD *)(a1 + 304);
  v66 = v3;
  v92 = v3;
  v76 = v3;
  v71 = *(_QWORD **)a1;
  v86 = v71;
  v58 = *(_DWORD *)(a1 + 140);
  v67 = *(_QWORD *)(a1 + 112);
  v85 = v67;
  v78 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v67 + 174));
  ContainingPageTable = v78;
  v63 = v78;
  v4 = *(_QWORD *)(a1 + 144);
  v70 = v4;
  v82 = v4;
  v5 = 48 * v4 - 0x220000000000LL;
  v81 = v5;
  v95 = v5;
  v6 = *(_QWORD *)(a1 + 96);
  v83 = v6;
  v77 = *v71;
  v91 = v77;
  v65 = v77;
  v7 = v6 + 4096;
  v84 = v6 + 4096;
  v100 = (__int64 *)(a2 + 16);
  v8 = (__int64 *)(((*(_QWORD *)(a2 + 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v59 = v8;
  v93 = (unsigned int *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 32);
  v56 = v9;
  v10 = v3 + 0x220000000000LL;
  if ( a3 )
  {
    v11 = *v8;
    v80 = *v8;
    MiMapSinglePage(v6, v4, 3221225488LL, 0LL);
    v64 = 56LL;
    v12 = 0xAAAAAAAAAAAAAAABuLL;
  }
  else
  {
    v11 = MiSwizzleInvalidPte(32 * (v9 & 0x1F | (((0xAAAAAAAAAAAAAAABuLL * (v10 >> 4)) & 0xFFFFFFFFFFLL) << 7) | 0x40));
    v80 = v11;
    v64 = v44 + 72;
  }
  v13 = v61 + 4;
  v74 = v61 + 4;
  v60 = v61 + 4;
  v14 = (unsigned __int64)(v61 + 4) & 0x7FFFFFFFFFFFFFFFLL;
  v75 = v14;
  *((_OWORD *)v61 + 2) = 0LL;
  *((_OWORD *)v13 + 1) = 0LL;
  v94 = v3 + 16;
  MiSetOriginalPtePfnFromFreeList(v3 + 16, v14, v12);
  v17 = v16 * (v10 >> 4);
  v69 = v17;
  v79 = (_BYTE *)(v5 + 34);
  if ( ((*(_BYTE *)(v3 + 34) ^ *(_BYTE *)(v5 + 34)) & 0xC0) != 0 )
    MiChangePageAttribute(v3, *(unsigned __int8 *)(v5 + 34) >> 6, 0LL, v15);
  MiMapSinglePage(v6 + 4096, v17, 1073741840LL, 0LL);
  v18 = 1;
  if ( a3 )
  {
    KeCopyPage(v6 + 4096, v6);
LABEL_7:
    v19 = a3;
    goto LABEL_8;
  }
  v68 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v68);
    while ( *(__int64 *)(v5 + 24) < 0 );
  }
  if ( (**(_DWORD **)v64 & 1) == 0
    || !(unsigned int)MiStandbyPageStillCombineCandidate(v5, v63, v59, v56)
    || !(unsigned int)MiRecheckCombineVm(v71, v58, v5, v67) )
  {
    v18 = 0;
    goto LABEL_7;
  }
  KeCopyPage(v6 + 4096, v6);
  v19 = 0LL;
LABEL_8:
  if ( v19 )
    *(_QWORD *)(((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( v18 )
  {
    v20 = MiComputeHash64(v7, 0x7FFFFFFFF8LL);
    if ( v20 == v22 )
    {
      if ( *(_QWORD *)(v21 + 24) == qword_140C66ED0 )
        v18 = MiHashIsCommon(v73, v22, (void *)v7) ? v18 : 0;
    }
    else
    {
      v18 = 0;
    }
  }
  *(_QWORD *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) = ZeroPte;
  if ( v18 )
  {
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)v60);
    v23 = 48 * ContainingPageTable - 0x220000000000LL;
    v24 = v61;
    v61[6] ^= (v61[6] ^ ((unsigned __int64)*v93 << 55)) & 0xF80000000000000LL;
    v25 = v62;
    v24[3] = *(_QWORD *)(v62 + 8);
    v24[8] = *(_QWORD *)(v25 + 24);
    v26 = 0;
    if ( a3 )
    {
      v58 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v58);
        while ( *(__int64 *)(v5 + 24) < 0 );
      }
      if ( (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v5 + 32) != 1
        || !(unsigned int)MiChargeCrossPartitionSharedPage(v65, v63, v74, 0LL) )
      {
        v26 = -1073741800;
      }
    }
    else
    {
      v45 = (int)v74;
      if ( !(unsigned int)MiChargeCrossPartitionSharedPage(v65, v63, v74, 0LL) )
      {
        v26 = -1073741800;
        goto LABEL_74;
      }
      if ( (MiUnlinkPageFromListEx(v5, 0LL) & 3) != 0 )
      {
        LODWORD(v64) = 0;
        MiDiscardTransitionPteEx(v5, 0LL);
        v61[7] = 1LL;
        MiDecrementCloneBlock(v65, v67, v45, 4, (__int64)&v64);
        v26 = -1073741800;
      }
    }
    if ( v26 >= 0 )
    {
      v61[7] = 1LL;
      v27 = v65 != v63;
      if ( a3 )
      {
        v57 = (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
          MiIdentifyPfn(v70, &v98);
        v28 = MI_READ_PTE_LOCK_FREE(v59);
        v11 = v28;
        if ( (v28 & 0x42) != 0 )
          v11 = v28 & 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        v57 = 0;
      }
      MiLockNestedPageAtDpcInline(v23);
      *(_QWORD *)(v23 + 24) ^= (*(_QWORD *)(v23 + 24) ^ (*(_QWORD *)(v23 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v29 = MiAbandonPrivatePfn(v5, v27);
      v30 = v66;
      MiLockNestedPageAtDpcInline(v66);
      MiFinalizePageAttribute(v30, (unsigned __int8)*v79 >> 6, 1u, v31);
      MiCopyPfnEntryEx(v30, (__int128 *)v5);
      if ( (unsigned int)MiGetPfnPriority(v30) < 5 )
        *(_BYTE *)(v30 + 35) = *(_BYTE *)(v30 + 35) & 0xF8 | 5;
      *(_QWORD *)(v30 + 8) = v75;
      *(_QWORD *)(v30 + 40) |= 0x8000000000000000uLL;
      MiSetPfnPteFrame(v32, ContainingPageTable);
      MI_MAKE_PROTECT_WRITE_COPY(v94);
      if ( a3 )
      {
        MiTransferPageFileOwnership(v30, v59);
        v33 = (volatile signed __int64 *)(v95 + 24);
        goto LABEL_31;
      }
      *(_QWORD *)(v76 + 24) &= 0xC000000000000000uLL;
      v46 = v60;
      *v60 = 0LL;
      v47 = v11;
      v48 = 0;
      if ( !(unsigned int)MiPteInShadowRange(v46) )
      {
LABEL_63:
        v52 = v60;
        *v60 = v47;
        if ( v48 )
          MiWritePteShadow(v52, v47);
        v53 = MiSwizzleInvalidPte(((_QWORD)v52 << 16) | 0x400LL);
        MiWriteRepurposedTransitionPte(v5, v53 | 0x800);
        v33 = (volatile signed __int64 *)(v5 + 24);
        *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
        MiTransferPageFileOwnership(v66, v59);
        MiPfnReferenceCountIsZero(v66, v69);
LABEL_31:
        _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v77 == v78 && (*(_QWORD *)(v5 + 16) & 4) != 0 )
        {
          *(_QWORD *)(v5 + 16) &= ~4uLL;
          if ( v29 )
            v29 &= ~4uLL;
        }
        if ( !a3 )
        {
          v54 = *(_QWORD *)(v5 + 40) & 0xFFFFFFFFFFLL;
          *v33 &= 0xC000000000000000uLL;
          MiPfnReferenceCountIsZero(v5, v70);
          _InterlockedAnd64(v33, 0x7FFFFFFFFFFFFFFFuLL);
          MiLockAndDecrementShareCount(48 * v54 - 0x220000000000LL, 0);
LABEL_43:
          if ( v29 )
            MiReleasePageFileInfo(v63, v29, 1);
          *v96 = 0LL;
          *v97 = 0LL;
          MiActivateCombineBlock(v71, v61);
          return 0LL;
        }
        v34 = (v11 ^ (v69 << 12)) & 0xFFFFFFFFFF000LL ^ v11;
        if ( (v34 & 0x800) != 0 )
          v34 = v34 & 0xFFFFFFFFFFFFF5FFuLL | 0x200;
        MiWriteValidPteNewPage(v59, v34, 0);
        v35 = 0;
        if ( !(unsigned int)MiPteInShadowRange(v60) )
        {
LABEL_37:
          v39 = v60;
          *v60 = v34;
          if ( v35 )
            MiWritePteShadow(v39, v34);
          *(_QWORD *)(v5 + 24) |= 0x4000000000000000uLL;
          *(_BYTE *)(v5 + 34) = *v79 | 7;
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v40 = *v100 & 0xFFFFFFFFFFFFF000uLL;
          *v100 = v5;
          MiInsertTbFlushEntry(a3, v40, 1LL);
          v42 = v67;
          if ( (*(_BYTE *)(v67 + 184) & 7) == 0 )
            MiSetWsleProtection(v41, v40);
          MiUpdateWorkingSetPrivateSize(v42, v40, -1LL, 0LL);
          if ( v57 )
          {
            *((_QWORD *)&v99 + 1) = v60;
            v100 = (__int64 *)&v98;
            v101 = 32;
            v102 = 0;
            EtwTraceKernelEvent((unsigned int)&v100, 1, 671088641, 634, 289413892);
          }
          goto LABEL_43;
        }
        if ( (unsigned int)MiPteHasShadow(v37, v36, v38) )
        {
          v35 = 1;
          if ( HIBYTE(word_140C6697C) )
            goto LABEL_37;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_37;
        }
        if ( (v34 & 1) != 0 )
          v34 |= 0x8000000000000000uLL;
        goto LABEL_37;
      }
      if ( (unsigned int)MiPteHasShadow(v50, v49, v51) )
      {
        v48 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_63;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_63;
      }
      if ( (v11 & 1) != 0 )
        v47 = v11 | 0x8000000000000000uLL;
      goto LABEL_63;
    }
LABEL_74:
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return (unsigned int)v26;
  }
  if ( !a3 )
    _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 3221225496LL;
}
