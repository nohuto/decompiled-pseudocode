__int64 __fastcall MiResolveProtoPteFault(ULONG_PTR *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 CurrentPrcb; // rdx
  int v4; // r15d
  ULONG_PTR v5; // rax
  __int64 v6; // rcx
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int64 *v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  char v17; // di
  _QWORD *v18; // r12
  unsigned __int64 v19; // rdx
  void *v20; // rbx
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // eax
  volatile signed __int64 *v24; // rbx
  char v25; // al
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r14
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r13
  unsigned __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int16 v39; // cx
  bool v40; // zf
  __int16 v41; // cx
  __int64 v42; // r8
  int v43; // edx
  __int64 v44; // rax
  unsigned __int64 v45; // r11
  unsigned __int64 v46; // rdx
  char v47; // al
  __int64 v48; // rcx
  __int64 v49; // rbx
  struct _KPRCB *v50; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v52; // eax
  __int64 result; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rax
  unsigned int v57; // r8d
  __int64 v58; // r10
  char v59; // cl
  ULONG_PTR *v60; // r14
  __int16 v61; // ax
  unsigned __int64 v62; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // rcx
  int IsPrototypePteVadLookup; // eax
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r13
  unsigned int v68; // eax
  int v69; // r15d
  __int64 v70; // rax
  _QWORD *v71; // rdi
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  unsigned __int64 v77; // rcx
  unsigned int v78; // edi
  unsigned int PfnPriority; // eax
  __int64 v80; // rdx
  int v81; // eax
  unsigned __int64 v82; // r13
  unsigned __int64 v83; // r15
  __int64 v84; // rax
  __int64 **Address; // rax
  __int64 v86; // rdx
  __int64 **v87; // r15
  struct _LIST_ENTRY *Flink; // r8
  __int64 v89; // rax
  struct _LIST_ENTRY *v90; // r9
  __int64 v91; // rax
  unsigned int v92; // ebx
  unsigned __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned __int64 v98; // [rsp+30h] [rbp-98h]
  _QWORD *v99; // [rsp+38h] [rbp-90h]
  __int64 v100; // [rsp+40h] [rbp-88h]
  unsigned __int64 v101; // [rsp+48h] [rbp-80h]
  __int64 v102; // [rsp+50h] [rbp-78h]
  unsigned __int64 v103; // [rsp+58h] [rbp-70h]
  int v104; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v105; // [rsp+68h] [rbp-60h]
  unsigned __int64 v106; // [rsp+70h] [rbp-58h] BYREF
  __int64 v107; // [rsp+78h] [rbp-50h]
  ULONG_PTR v108; // [rsp+80h] [rbp-48h]
  ULONG_PTR *v109; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v110; // [rsp+D8h] [rbp+10h]
  _QWORD *v111; // [rsp+E0h] [rbp+18h] BYREF
  int v112; // [rsp+E8h] [rbp+20h] BYREF

  v111 = a3;
  v110 = a2;
  v109 = a1;
  CurrentPrcb = (unsigned __int64)a1;
  v4 = 0;
  v108 = a1[7];
  v5 = *a1;
  v106 = 0LL;
  *a3 = 0LL;
  v98 = v5;
  v105 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = a1[2];
  v100 = v6;
  v102 = v6 & 1;
  if ( (v6 & 1) == 0 || (v103 = v6 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v6 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v103 = 0LL;
  v101 = *(_QWORD *)(CurrentPrcb + 96);
  v7 = (unsigned __int64 *)(((v101 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    v8 = *v7;
    if ( (*v7 & 1) == 0 || (v8 & 0x200) != 0 )
      return 3221225494LL;
    do
    {
      do
        v9 = (v8 >> 12) & 0xFFFFFFFFFFLL;
      while ( v9 > qword_140C65820 );
      v10 = 48 * v9;
      v107 = 48 * v9;
    }
    while ( (*(_QWORD *)(48 * v9 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 );
    v11 = (unsigned __int64 *)v101;
    v12 = v10 - 0x220000000000LL;
    v112 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v112);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    v13 = *v7;
    if ( (*v7 & 1) == 0 || (v13 & 0x200) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 3221225494LL;
    }
    if ( v9 == ((v13 >> 12) & 0xFFFFFFFFFFLL) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v14 = *(_QWORD *)(v12 + 40);
  v15 = 0x3FFFFFFFFFFFFFFFLL;
  if ( (v14 & 0x10000000000LL) != 0 || (v14 & 0x20000000000000LL) != 0 )
    goto LABEL_29;
  CurrentPrcb = *(unsigned __int16 *)(v12 + 32);
  v16 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  v15 = 0LL;
  if ( (_WORD)CurrentPrcb )
  {
    if ( (_WORD)CurrentPrcb == 1 )
    {
      if ( v16 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
        v15 = 1LL;
      if ( !(_DWORD)v15 )
        goto LABEL_29;
    }
    else if ( (_WORD)CurrentPrcb != 2 || !v16 || (*(_BYTE *)(v12 + 34) & 8) == 0 )
    {
      goto LABEL_29;
    }
  }
  v17 = 0;
  if ( v14 < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0 )
  {
    v18 = (_QWORD *)(v12 + 8);
    v99 = (_QWORD *)(v12 + 8);
  }
  else
  {
    v18 = (_QWORD *)(v12 + 8);
    v19 = *(_QWORD *)(v12 + 8) | 0x8000000000000000uLL;
    v99 = (_QWORD *)(v12 + 8);
    if ( v19 > 0xFFFFF6BFFFFFFF78uLL || v19 < 0xFFFFF68000000000uLL || (*(_BYTE *)(v12 + 35) & 0x20) == 0 )
    {
      v20 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF));
      goto LABEL_22;
    }
  }
  v17 = 1;
  v20 = *(void **)(qword_140C67048 + 8 * (((unsigned __int64)v14 >> 43) & 0x3FF));
  if ( !(unsigned int)MiChargeCommit(v20, 1LL, 4LL) )
    goto LABEL_31;
LABEL_22:
  if ( v20 == &MiSystemPartition )
  {
    CurrentPrcb = (unsigned __int64)KeGetCurrentPrcb();
    v21 = *(_DWORD *)(CurrentPrcb + 34460);
    while ( v21 )
    {
      if ( v21 == -1 )
        break;
      v14 = (unsigned int)(v21 - 1);
      v22 = v21;
      v21 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 34460), v14, v21);
      if ( v22 == v21 )
        goto LABEL_29;
    }
  }
  v23 = MiChargePartitionResidentAvailable(v20, 1LL, 0xFFFFFFFFLL);
  if ( !v23 && v17 )
  {
    MiReturnCommit(v20, 1LL);
    goto LABEL_30;
  }
  v99 = v18;
  if ( v23 )
  {
LABEL_29:
    ++*(_WORD *)(v12 + 32);
    v18 = (_QWORD *)(v12 + 8);
LABEL_30:
    v99 = v18;
  }
LABEL_31:
  v24 = (volatile signed __int64 *)(*v18 | 0x8000000000000000uLL);
  v25 = *(_BYTE *)(v12 + 34);
  if ( (v25 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v78 = 0;
      while ( (*(_BYTE *)(v12 + 34) & 0x20) != 0 )
      {
        if ( (++v78 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v14) )
        {
          HvlNotifyLongSpinWait(v78);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v12);
      v25 = *(_BYTE *)(v12 + 34);
    }
    while ( (v25 & 0x20) != 0 );
    v11 = (unsigned __int64 *)v101;
  }
  *(_BYTE *)(v12 + 34) = v25 | 0x20;
  if ( (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) == 0 && (*v24 & 0x20) == 0 )
    MiWriteValidPteVolatile(v24, 1, 0);
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  while ( 1 )
  {
    while ( 1 )
    {
      v26 = *v11;
      v27 = *v11;
      if ( (*v11 & 1) != 0 )
        goto LABEL_37;
      if ( (*v11 & 0xC00) != 0x800 )
      {
        v29 = 0LL;
        goto LABEL_43;
      }
      if ( !v26 || !qword_140C657C0 || (v26 & qword_140C657C0) != 0 )
      {
        v27 = *v11;
        if ( qword_140C657C0 && (v26 & 0x10) == 0 )
          v27 = v26 & ~qword_140C657C0;
LABEL_37:
        v28 = (v27 >> 12) & 0xFFFFFFFFFFLL;
        if ( v28 <= qword_140C65820 )
        {
          CurrentPrcb = 6 * v28;
          if ( _bittest64((const signed __int64 *)(48 * v28 - 0x21FFFFFFFFD8LL), 0x36u) )
            break;
        }
      }
    }
    v29 = 48 * v28 - 0x220000000000LL;
    v104 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v104);
      while ( *(__int64 *)(v29 + 24) < 0 );
    }
    if ( *v11 == v26 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  CurrentPrcb = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FFLL));
  if ( (*(_DWORD *)(CurrentPrcb + 4) & 0x80u) != 0 )
    v29 = MiLockSpecialPurposeMemoryCachedPage(v29, 2LL);
LABEL_43:
  v30 = *v11;
  v31 = *v11;
  v32 = v101;
  if ( v101 >= 0xFFFFF6FB7DBED000uLL
    && v101 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v31 & 1) != 0
    && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
  {
    CurrentPrcb = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( CurrentPrcb )
    {
      v84 = *(_QWORD *)(CurrentPrcb + 8 * ((v101 >> 3) & 0x1FF));
      if ( (v84 & 0x20) != 0 )
        v31 |= 0x20uLL;
      if ( (v84 & 0x42) != 0 )
        v31 |= 0x42uLL;
    }
  }
  v106 = v31;
  if ( (v31 & 1) == 0 )
  {
    if ( !v31 )
      goto LABEL_178;
    v54 = 0LL;
    v55 = *(_QWORD *)v105;
    if ( v105 >= 0xFFFFF6FB7DBED000uLL
      && v105 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v55 & 1) != 0
      && ((v55 & 0x20) == 0 || (v55 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v89 = *((_QWORD *)&Flink->Flink + ((v105 >> 3) & 0x1FF));
        if ( (v89 & 0x20) != 0 )
          v55 |= 0x20uLL;
        if ( (v89 & 0x42) != 0 )
          v55 |= 0x42uLL;
      }
    }
    if ( (v55 & 0x400) == 0 )
      goto LABEL_92;
    v56 = v55;
    if ( qword_140C657C0 && (v55 & 0x10) == 0 )
      v56 = v55 & ~qword_140C657C0;
    if ( HIDWORD(v56) == 0xFFFFFFFF )
    {
      v60 = v109;
      v54 = (v55 >> 5) & 0x1F;
      if ( ((v55 >> 5) & 0x18) == 0x10 && (*((_BYTE *)v109 + 69) & 8) != 0 )
        goto LABEL_190;
    }
    else
    {
LABEL_92:
      if ( (v55 & 8) == 0 )
      {
        v54 = (v31 >> 5) & 0x1F;
        v57 = ((v31 >> 5) & 0x1F) >> 3;
        if ( v57 == 2 && (*((_BYTE *)v109 + 69) & 8) != 0 )
          goto LABEL_190;
        if ( v101 >= 0xFFFFF6FB7DBED000uLL
          && v101 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0x600000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v30 & 1) == 0 )
            goto LABEL_96;
          if ( (v30 & 0x20) == 0 || (v30 & 0x42) == 0 )
          {
            v90 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v90 )
            {
              v91 = *((_QWORD *)&v90->Flink + ((v101 >> 3) & 0x1FF));
              if ( (v91 & 0x20) != 0 )
                v30 |= 0x20uLL;
              if ( (v91 & 0x42) != 0 )
                v30 |= 0x42uLL;
            }
          }
        }
        if ( (v30 & 1) != 0 )
        {
          v58 = v110;
          if ( !v110 || (v30 & 0xA00) != 0 )
          {
LABEL_101:
            v60 = v109;
LABEL_102:
            v61 = v31;
            if ( qword_140C657C0 && (v31 & 0x10) == 0 )
              v61 = v31 & ~(_WORD)qword_140C657C0;
            if ( (v61 & 0x400) != 0
              || (v61 & 0x800) != 0
              || (v61 & 4) != 0
              || (v54 & 5) != 5
              || !v58 && (((unsigned __int8)v31 >> 5) & 5) == 4
              || (*(_BYTE *)(v108 + 184) & 7) == 0
              && KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[12] )
            {
              v62 = v98;
            }
            else
            {
              v62 = v98;
              if ( (MiFlags & 0x8000) == 0 || v98 < 0xFFFF800000000000uLL || (v54 & 2) == 0 )
              {
                LODWORD(v109) = 0;
                while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
                {
                  do
                    KeYieldProcessorEx(&v109);
                  while ( *(__int64 *)(v12 + 24) < 0 );
                }
                *(_BYTE *)(v12 + 34) &= ~0x20u;
                MiRemoveLockedPageChargeAndDecRef(v12);
                _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                if ( v103 )
                {
                  if ( !v102 )
                    return 0LL;
                  v64 = v100 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( *(_BYTE *)(v100 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v64 + 80) & 0x4000) == 0 )
                    return 0LL;
                  v63 = v100;
                }
                else
                {
                  v63 = v100;
                  v64 = v100 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                if ( v102 )
                {
                  if ( *(_BYTE *)v64 != 1 && *(_BYTE *)v64 != 3 && *(_BYTE *)v64 != 6 || *(_BYTE *)v64 == 6 )
                  {
LABEL_131:
                    IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v55);
                    v66 = v55 >> 5;
                    v67 = v31 >> 5;
                    v40 = IsPrototypePteVadLookup == 0;
                    v68 = 4;
                    if ( v40 )
                      LOBYTE(v66) = v67;
                    if ( (v66 & 2) != 0 )
                      v68 = 6;
                    v69 = v66 & 0x18;
                    if ( v69 == 8 )
                    {
                      v68 |= 8u;
                    }
                    else if ( v69 == 24 )
                    {
                      v68 |= 0x18u;
                    }
                    v70 = MiSwizzleInvalidPte(32LL * v68);
                    v71 = (_QWORD *)v105;
                    v72 = v70;
                    if ( (unsigned int)MiPteInShadowRange(v105) )
                    {
                      if ( (unsigned int)MiPteHasShadow(v74, v73, v75) )
                      {
                        if ( !HIBYTE(word_140C6697C) && (v72 & 1) != 0 )
                          v72 |= 0x8000000000000000uLL;
                        *v71 = v72;
                        MiWritePteShadow(v71, v72);
                        return MiResolveDemandZeroFault((__int64)v60, (unsigned __int64)v71, 0LL, v110);
                      }
                      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                        && (v72 & 1) != 0 )
                      {
                        v72 |= 0x8000000000000000uLL;
                      }
                    }
                    *v71 = v72;
                    return MiResolveDemandZeroFault((__int64)v60, (unsigned __int64)v71, 0LL, v110);
                  }
                }
                else if ( !(unsigned __int8)KeInvalidAccessAllowed(v63, 0LL) )
                {
                  goto LABEL_131;
                }
                if ( v98 < 0xFFFF800000000000uLL )
                  goto LABEL_131;
                return 3221225477LL;
              }
            }
            if ( (v31 & 0x400) != 0 )
            {
              if ( (*((_BYTE *)v60 + 69) & 8) == 0 )
                return MiResolveMappedFileFault(v60, v32, v12, v111);
            }
            else
            {
              if ( (v31 & 0x800) != 0 )
                return MiResolveTransitionFault(v60, v32, v12, v58, v111);
              if ( !(unsigned int)MiGetPagingFileOffset(&v106) )
              {
                if ( v103 )
                {
                  if ( !v102
                    || (v77 = v100 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v100 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
                    || (*(_DWORD *)(v77 + 80) & 0x4000) == 0 )
                  {
                    LOBYTE(v54) = 17;
                    MiUnlockProtoPoolPage(v12, v54);
                    return 0LL;
                  }
                  v76 = v100;
                }
                else
                {
                  v76 = v100;
                  v77 = v100 & 0xFFFFFFFFFFFFFFFEuLL;
                }
                if ( v102 )
                {
                  if ( *(_BYTE *)v77 != 1 && *(_BYTE *)v77 != 3 && *(_BYTE *)v77 != 6 || *(_BYTE *)v77 == 6 )
                    return MiResolveDemandZeroFault((__int64)v60, v32, v12, v110);
                }
                else if ( !(unsigned __int8)KeInvalidAccessAllowed(v76, 0LL) )
                {
                  return MiResolveDemandZeroFault((__int64)v60, v32, v12, v110);
                }
                if ( v62 < 0xFFFF800000000000uLL )
                  return MiResolveDemandZeroFault((__int64)v60, v32, v12, v110);
                v81 = MiIsPrototypePteVadLookup(v55);
                v82 = v31 >> 5;
                v83 = v55 >> 5;
                if ( v81 )
                  LOBYTE(v82) = v83;
                if ( (v82 & 0x18) != 0x10 )
                  return MiResolveDemandZeroFault((__int64)v60, v32, v12, v110);
LABEL_178:
                LOBYTE(CurrentPrcb) = 17;
                MiUnlockProtoPoolPage(v12, CurrentPrcb);
                return 3221225477LL;
              }
              if ( (*((_BYTE *)v60 + 69) & 8) == 0 )
                return MiResolvePageFileFault(v60, v32, v12, v111);
            }
LABEL_190:
            LOBYTE(v54) = 17;
            MiUnlockProtoPoolPage(v12, v54);
            return 3221226548LL;
          }
          v92 = -1073741819;
LABEL_322:
          if ( v29 )
            _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          LOBYTE(v54) = 17;
          MiUnlockProtoPoolPage(v12, v54);
          return v92;
        }
LABEL_96:
        v58 = v110;
        v59 = 1;
        if ( !v110 )
          v59 = v110;
        if ( *((char *)MiReadWrite + ((unsigned __int8)v31 >> 5)) - v59 >= 10 )
        {
          if ( v57 == 2 && (!v102 || *(_BYTE *)(v100 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
          {
            if ( !(unsigned int)MiAllowGuardFault(v100) )
            {
              v92 = -1073741819;
              goto LABEL_322;
            }
            v93 = v30 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v31 >> 5) & 0xF));
            if ( (v30 & 0xC00) == 0x800 )
            {
              if ( !(unsigned int)MiPteInShadowRange(v101) )
                goto LABEL_320;
              if ( (unsigned int)MiPteHasShadow(v94, v54, v95) )
              {
                if ( HIBYTE(word_140C6697C) || (v30 & 1) == 0 )
                  goto LABEL_308;
                goto LABEL_307;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
                || (v30 & 1) == 0 )
              {
                goto LABEL_320;
              }
            }
            else
            {
              if ( !(unsigned int)MiPteInShadowRange(v101) )
                goto LABEL_320;
              if ( (unsigned int)MiPteHasShadow(v96, v54, v97) )
              {
                if ( HIBYTE(word_140C6697C) || (v30 & 1) == 0 )
                  goto LABEL_308;
LABEL_307:
                v93 |= 0x8000000000000000uLL;
LABEL_308:
                *(_QWORD *)v101 = v93;
                MiWritePteShadow(v101, v93);
LABEL_321:
                v92 = -2147483647;
                goto LABEL_322;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
                || (v30 & 1) == 0 )
              {
LABEL_320:
                *(_QWORD *)v101 = v93;
                goto LABEL_321;
              }
            }
            v93 |= 0x8000000000000000uLL;
            goto LABEL_320;
          }
          v32 = v101;
          goto LABEL_101;
        }
        v92 = -1073741819;
        goto LABEL_322;
      }
      v60 = v109;
    }
    v58 = v110;
    goto LABEL_102;
  }
  if ( v103 )
  {
    PfnPriority = MiGetPfnPriority(v29);
    if ( (unsigned int)v80 > PfnPriority )
      *(_BYTE *)(v29 + 35) = v80 | *(_BYTE *)(v29 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v80) = 17;
    MiUnlockProtoPoolPage(v12, v80);
    return 0LL;
  }
  else
  {
    v33 = *(_QWORD *)(v29 + 40);
    if ( v33 >= 0 )
      goto LABEL_55;
    v34 = *(_QWORD *)(v29 + 16);
    if ( (v34 & 0x400) == 0 || (((unsigned __int64)v33 >> 60) & 7) == 3 )
      goto LABEL_55;
    v35 = *(_QWORD *)(v29 + 16);
    if ( qword_140C657C0 && (v34 & 0x10) == 0 )
      v35 = ~qword_140C657C0 & v34;
    v36 = v35 >> 16;
    if ( (*(_DWORD *)(*(_QWORD *)v36 + 56LL) & 0x20) == 0 )
      goto LABEL_55;
    v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v36 + 96LL) + 40LL);
    if ( !v37 || (v37 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v37 & 3) == 2 )
      goto LABEL_55;
    if ( v98 < 0xFFFF800000000000uLL )
    {
      MiLockVadTree(1LL);
      Address = MiLocateAddress(v98);
      LOBYTE(v86) = 17;
      v87 = Address;
      MiUnlockVadTree(1LL, v86);
      if ( v87 )
      {
        CurrentPrcb = *((unsigned int *)v87 + 12);
        if ( ((_DWORD)v87[6] & 0x70) == 0x20 )
        {
          CurrentPrcb &= 0xF80u;
          if ( (_DWORD)CurrentPrcb == 128
            || ((_DWORD)v87[8] & 0x8000000) != 0 && (v37 & 4) == 0
            || (MiFlags & 0x400) != 0 && (*(_BYTE *)(v36 + 34) & 2) != 0 )
          {
            v4 = 0;
            goto LABEL_250;
          }
        }
      }
LABEL_248:
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(CurrentPrcb) = 17;
      MiUnlockProtoPoolPage(v12, CurrentPrcb);
      return 3221226536LL;
    }
    else
    {
      if ( (MiFlags & 0x8000) != 0 && (v34 & 0x40) != 0 )
        goto LABEL_248;
LABEL_250:
      v18 = v99;
LABEL_55:
      v38 = *(_QWORD *)(v29 + 24);
      *(_QWORD *)(v29 + 24) = v38 ^ ((v38 + 1) ^ v38) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LODWORD(v111) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v111);
        while ( *(__int64 *)(v12 + 24) < 0 );
      }
      *(_BYTE *)(v12 + 34) &= ~0x20u;
      v39 = *(_WORD *)(v12 + 32);
      if ( !v39 )
        MiBadRefCount(v12, v38, v15);
      v40 = v39 == 1;
      v41 = v39 - 1;
      *(_WORD *)(v12 + 32) = v41;
      if ( v40 && (*(_QWORD *)(v12 + 40) & 0x20000000000000LL) != 0 )
      {
LABEL_253:
        MiPfnReferenceCountIsZero(v12, 0xAAAAAAAAAAAAAAABuLL * (v107 >> 4));
        goto LABEL_75;
      }
      v42 = *(_QWORD *)(v12 + 40);
      if ( (v42 & 0x10000000000LL) == 0 && (v42 & 0x20000000000000LL) == 0 )
      {
        v43 = 0;
        v44 = *(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL;
        if ( !v41 )
        {
          v45 = 1LL;
          v4 = 1;
          goto LABEL_65;
        }
        if ( v41 == 1 )
        {
          if ( v44 || (*(_BYTE *)(v12 + 34) & 8) != 0 )
          {
            v45 = 1LL;
            v43 = 1;
          }
          else
          {
            v45 = 1LL;
          }
          if ( v43 )
          {
LABEL_65:
            v46 = *v18 | 0x8000000000000000uLL;
            if ( (v46 > 0xFFFFF6BFFFFFFF78uLL || v46 < 0xFFFFF68000000000uLL)
              && (v47 = *(_BYTE *)(v12 + 35), (v47 & 0x20) != 0) )
            {
              *(_BYTE *)(v12 + 35) = v47 & 0xDF;
            }
            else
            {
              v48 = ((unsigned __int64)v42 >> 43) & 0x3FF;
              v49 = *(_QWORD *)(qword_140C67048 + 8 * v48);
              if ( v42 < 0 && (*(_DWORD *)(v12 + 16) & 0x400LL) != 0
                || v46 <= 0xFFFFF6BFFFFFFF78uLL && v46 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 + 35) & 0x20) != 0
                || v4 && (*(_QWORD *)(v12 + 24) & 0x4000000000000000LL) != 0 )
              {
                MiReturnCommit(*(_QWORD *)(qword_140C67048 + 8 * v48), 1LL);
                v45 = 1LL;
              }
              if ( (_UNKNOWN *)v49 != &MiSystemPartition )
                goto LABEL_197;
              v50 = KeGetCurrentPrcb();
              CachedResidentAvailable = (int)v50->CachedResidentAvailable;
              if ( (_DWORD)CachedResidentAvailable == -1 )
                goto LABEL_197;
              if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
              {
                do
                {
                  v52 = _InterlockedCompareExchange(
                          (volatile signed __int32 *)&v50->CachedResidentAvailable,
                          CachedResidentAvailable + 1,
                          CachedResidentAvailable);
                  v40 = (_DWORD)CachedResidentAvailable == v52;
                  LODWORD(CachedResidentAvailable) = v52;
                  if ( v40 )
                    goto LABEL_74;
                }
                while ( v52 != -1 && (unsigned __int64)(v52 + 1LL) <= 0x100 );
              }
              if ( (int)CachedResidentAvailable > 192
                && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                        (volatile signed __int32 *)&v50->CachedResidentAvailable,
                                                        192,
                                                        CachedResidentAvailable) )
              {
                v45 = (int)CachedResidentAvailable - 192 + 1LL;
              }
              if ( v45 )
LABEL_197:
                _InterlockedExchangeAdd64((volatile signed __int64 *)(v49 + 17280), v45);
            }
LABEL_74:
            if ( v4 )
              goto LABEL_253;
          }
        }
        else if ( v41 == 2 && v44 && (*(_BYTE *)(v12 + 34) & 8) != 0 )
        {
          v45 = 1LL;
          goto LABEL_65;
        }
      }
LABEL_75:
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __incgsdword(0x2E98u);
      result = MiCompleteProtoPteFault(v109, v31, v110, 0, v100);
      if ( (int)result >= 0 )
        return 272LL;
    }
  }
  return result;
}
