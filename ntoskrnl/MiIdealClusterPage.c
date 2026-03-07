volatile signed __int32 *__fastcall MiIdealClusterPage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 *a5,
        void *a6,
        _BYTE *a7)
{
  volatile signed __int32 *v7; // r14
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  bool v14; // zf
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 *v23; // r12
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // r15
  __int64 v27; // rax
  __int64 *v28; // rcx
  ULONG_PTR v29; // rdx
  ULONG_PTR v30; // r8
  unsigned int v31; // ebx
  unsigned __int64 v32; // rax
  unsigned int v33; // ebx
  ULONG_PTR v34; // r8
  __int64 v36; // r8
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v39; // eax
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  unsigned __int8 CurrentIrql; // r13
  _DWORD *SchedulerAssist; // r9
  __int64 v46; // rdx
  unsigned int v47; // eax
  int v48; // r10d
  __int64 LargePage; // rax
  __int64 v50; // r8
  char *v51; // rbx
  unsigned __int8 v52; // cl
  struct _KPRCB *v53; // r9
  int v54; // eax
  struct _KPRCB *v55; // r9
  __int64 v56; // r8
  __int64 v57; // rdx
  signed __int32 v58; // eax
  int ContiguousPages; // edi
  unsigned __int64 v60; // rdi
  __int64 v61; // r14
  ULONG_PTR v62; // rcx
  unsigned __int8 v63; // cl
  int v64; // eax
  int v65; // ecx
  bool v66; // bl
  void *v67; // rax
  void *v68; // r12
  void *v69; // rax
  __int64 v70; // r8
  struct _KPRCB *v71; // r8
  __int64 v72; // rdx
  signed __int32 v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  _WORD *v76; // rbx
  unsigned __int64 v77; // r8
  struct _KPRCB *v78; // r9
  __int64 v79; // rdx
  signed __int32 v80; // eax
  unsigned __int8 v81[8]; // [rsp+70h] [rbp-1C8h] BYREF
  void *Buf2; // [rsp+78h] [rbp-1C0h] BYREF
  int v83; // [rsp+80h] [rbp-1B8h] BYREF
  unsigned __int64 v84; // [rsp+88h] [rbp-1B0h]
  ULONG_PTR v85; // [rsp+90h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+98h] [rbp-1A0h]
  unsigned __int8 *v87; // [rsp+A0h] [rbp-198h]
  __int64 v88; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-188h]
  unsigned __int64 v90; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-178h]
  __int64 v92; // [rsp+C8h] [rbp-170h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp-168h]
  __int64 v94; // [rsp+D8h] [rbp-160h]
  _BYTE *v95; // [rsp+E0h] [rbp-158h]
  __int64 v96; // [rsp+E8h] [rbp-150h] BYREF
  unsigned __int64 v97; // [rsp+F0h] [rbp-148h]
  volatile signed __int32 *v98; // [rsp+F8h] [rbp-140h]
  __int128 v99; // [rsp+100h] [rbp-138h] BYREF
  __int128 Buf1; // [rsp+110h] [rbp-128h] BYREF
  __int128 v101; // [rsp+120h] [rbp-118h]
  __int128 v102; // [rsp+130h] [rbp-108h]
  _OWORD v103[3]; // [rsp+140h] [rbp-F8h] BYREF
  _BYTE v104[128]; // [rsp+170h] [rbp-C8h] BYREF

  v7 = (volatile signed __int32 *)a5;
  v88 = a2;
  v90 = a4;
  v89 = a1;
  v94 = a3;
  v83 = *(_DWORD *)(a1 + 80) >> 5;
  Buf2 = a6;
  v11 = *(_QWORD *)(a1 + 56);
  v12 = *(_QWORD *)a1;
  *a7 = 0;
  v95 = a7;
  v98 = (volatile signed __int32 *)a5;
  v92 = 0LL;
  v85 = 0LL;
  v13 = ((v12 & 0xFFFFFFFFFFFFF000uLL) - (v12 & 0xFFFFFFFFFFFF0000uLL)) >> 12;
  v14 = (*(_DWORD *)(a2 + 48) & 0x200000) == 0;
  Buf1 = 0LL;
  v91 = v11;
  v101 = 0LL;
  v97 = v12 & 0xFFFFFFFFFFFF0000uLL;
  v102 = 0LL;
  v84 = v13;
  v99 = 0LL;
  if ( v14 )
  {
    ProtoPteAddress = MiGetProtoPteAddress(a2, v12 >> 12, 4, &v92);
    if ( !ProtoPteAddress || !v92 || ProtoPteAddress != a3 )
      return v7;
    v16 = *(_QWORD *)(v92 + 8);
    v17 = v16 + 8 * (*(unsigned int *)(v92 + 44) - (unsigned __int64)(*(_DWORD *)(v92 + 52) & 0x3FFFFFFF));
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) > v16 )
      v16 = a3 & 0xFFFFFFFFFFFFF000uLL;
    if ( v17 > (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
      v17 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( v16 >= v17 )
      return v7;
    v18 = 8 * v13;
    if ( a3 - 8 * v13 < v16 || a3 + 8 * (16 - v13) > v17 )
      return v7;
    v19 = *(_WORD *)(*(_QWORD *)v92 + 60LL) & 0x3FF;
  }
  else
  {
    v20 = *((_QWORD *)a5 + 1) | 0x8000000000000000uLL;
    if ( v20 < 0xFFFFF68000000000uLL || v20 > 0xFFFFF6FFFFFFFFFFuLL )
      return v7;
    v19 = *(unsigned __int16 *)(v11 + 174);
    v18 = 8 * v13;
  }
  v21 = a3;
  v22 = 16LL;
  v23 = (__int64 *)v104;
  v24 = v21 - v18;
  v25 = 1LL;
  v26 = *(_QWORD *)(qword_140C67048 + 8 * v19);
  do
  {
    v27 = MI_READ_PTE_LOCK_FREE(v24);
    v24 += 8LL;
    *v23++ = v27;
    --v22;
  }
  while ( v22 );
  v28 = (__int64 *)v104;
  v29 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a5 + 0x220000000000LL) >> 4);
  v30 = -1LL;
  v31 = 0;
  BugCheckParameter2 = v29;
  BugCheckParameter3 = -1LL;
  while ( 1 )
  {
    v96 = *v28;
    if ( (v96 & 1) != 0 )
      break;
    ++v31;
    ++v28;
    if ( v31 >= 0x10 )
      goto LABEL_24;
  }
  v32 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v96);
  v30 = (v32 >> 12) & 0xFFFFFFFFFFLL;
  BugCheckParameter3 = v30;
  if ( (unsigned __int16)v32 >> 12 != (unsigned __int64)v31 )
    return v7;
  LOBYTE(v29) = BugCheckParameter2;
LABEL_24:
  v87 = 0LL;
  if ( v31 != 16 )
  {
    v34 = v84 - v31 + v30;
    BugCheckParameter3 = v34;
    if ( v34 > qword_140C65820 || !_bittest64((const signed __int64 *)(48 * v34 - 0x21FFFFFFFFD8LL), 0x36u) )
      return v7;
    v87 = (unsigned __int8 *)(48 * v34 - 0x220000000000LL);
    if ( v87 != a5 )
    {
      v33 = *((_DWORD *)MiSearchNumaNodeTable(v34) + 2);
      goto LABEL_34;
    }
LABEL_31:
    *v95 = 1;
    return v7;
  }
  if ( (v29 & 0xF) == v84 )
    goto LABEL_31;
  if ( (int)MiAcquireNonPagedResources(v26, 1uLL, 0LL, 0) < 0 )
    return v7;
  LOBYTE(v22) = 1;
  MiInitializePageColorBase(v91, (*(_DWORD *)(v88 + 48) >> 12) & 0x7F, (__int64)&v99);
  v33 = HIDWORD(v99) >> byte_140C6570D;
  _InterlockedAdd((volatile signed __int32 *)v99, 1u);
LABEL_34:
  *(_BYTE *)(*(_QWORD *)(v26 + 16) + 25408LL * v33 + 3251) = 1;
  *((_QWORD *)a5 + 3) &= 0xC000000000000000uLL;
  if ( !(unsigned int)MiAddLockedPageCharge((__int64)a5, 0) )
  {
    if ( (_BYTE)v22 == 1 )
    {
      MiReturnCommit(v26, 1LL, v36);
      if ( (unsigned __int16 *)v26 != MiSystemPartition )
        goto LABEL_46;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_46;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v39 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v14 = (_DWORD)CachedResidentAvailable == v39;
          LODWORD(CachedResidentAvailable) = v39;
          if ( v14 )
            return v7;
        }
        while ( v39 != -1 && (unsigned __int64)(v39 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v25 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v25 )
LABEL_46:
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v25);
    }
    return v7;
  }
  v40 = *((_OWORD *)a5 + 1);
  v103[0] = *(_OWORD *)a5;
  v41 = *((_OWORD *)a5 + 2);
  v103[1] = v40;
  v103[2] = v41;
  _InterlockedAnd64((volatile signed __int64 *)a5 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( Buf2 )
  {
    MiObtainProtoReference((__int64)Buf2, 0);
    v42 = *((_OWORD *)Buf2 + 1);
    Buf1 = *(_OWORD *)Buf2;
    v43 = *((_OWORD *)Buf2 + 2);
    v101 = v42;
    v102 = v43;
    MiUnlockProtoPoolPage((__int64)Buf2, 0x11u);
  }
  v91 = MiReleaseFaultState(v89 + 56, 1u, v81);
  if ( (_BYTE)v22 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v46) = 4;
      else
        v46 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v46;
    }
    v81[0] = CurrentIrql;
    v47 = MiProtectionToCacheAttribute((v90 >> 5) & 0x1F);
    LargePage = MiGetLargePage(v26, v97, v48, v33, v47, 4, 0LL);
    v51 = (char *)LargePage;
    if ( !LargePage )
    {
      if ( KiIrqlFlags )
      {
        v52 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v52 <= 0xFu && CurrentIrql <= 0xFu && v52 >= 2u )
        {
          v53 = KeGetCurrentPrcb();
          v50 = (__int64)v53->SchedulerAssist;
          v54 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v54 & *(_DWORD *)(v50 + 20)) == 0;
          *(_DWORD *)(v50 + 20) &= v54;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick((__int64)v53);
        }
      }
      __writecr8(CurrentIrql);
      MiReturnCommit(v26, 1LL, v50);
      v56 = 1LL;
      if ( (unsigned __int16 *)v26 != MiSystemPartition )
        goto LABEL_75;
      v55 = KeGetCurrentPrcb();
      v57 = (int)v55->CachedResidentAvailable;
      if ( (_DWORD)v57 == -1 )
        goto LABEL_75;
      if ( (unsigned __int64)(v57 + 1) <= 0x100 )
      {
        do
        {
          v58 = _InterlockedCompareExchange((volatile signed __int32 *)&v55->CachedResidentAvailable, v57 + 1, v57);
          v14 = (_DWORD)v57 == v58;
          LODWORD(v57) = v58;
          if ( v14 )
            goto LABEL_76;
        }
        while ( v58 != -1 && (unsigned __int64)(v58 + 1LL) <= 0x100 );
      }
      if ( (int)v57 > 192
        && (_DWORD)v57 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v55->CachedResidentAvailable,
                            192,
                            v57) )
      {
        v56 = (int)v57 - 192 + 1LL;
      }
      if ( v56 )
LABEL_75:
        v56 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v56);
LABEL_76:
      ContiguousPages = -1073741801;
      goto LABEL_96;
    }
    MiConvertEntireLargePageToSmall(LargePage, 2, 2, 1, 0LL, 0LL, 0LL);
    v56 = 0xFFFFDE0000000000uLL;
    v60 = v84;
    v61 = 16LL;
    v62 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v51 + 0x220000000000LL) >> 4);
    v85 = v62;
    do
    {
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140C67BE0 & MmPageValidationFrequency) == 0 )
      {
        MiArePageContentsZero(v62, 1uLL);
        v62 = v85;
      }
      if ( (v62 & 0xF) == v60 )
      {
        BugCheckParameter3 = v62;
        v87 = (unsigned __int8 *)v51;
      }
      else
      {
        MiReleaseFreshPage((__int64)v51);
        v62 = v85;
      }
      ++v62;
      v51 += 48;
      v85 = v62;
      --v61;
    }
    while ( v61 );
    v7 = v98;
    if ( KiIrqlFlags )
    {
      v63 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v63 <= 0xFu && CurrentIrql <= 0xFu && v63 >= 2u )
      {
        v55 = KeGetCurrentPrcb();
        v56 = (__int64)v55->SchedulerAssist;
        v64 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v64 & *(_DWORD *)(v56 + 20)) == 0;
        *(_DWORD *)(v56 + 20) &= v64;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)v55);
      }
    }
    __writecr8(CurrentIrql);
    ContiguousPages = 0;
  }
  else
  {
    v87 = (unsigned __int8 *)(48 * BugCheckParameter3 - 0x220000000000LL);
    v65 = (((v83 & 1) == 0) + 8256) << 17;
    if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
      v65 |= 8u;
    ContiguousPages = MiFindContiguousPagesEx(
                        v26,
                        BugCheckParameter3,
                        BugCheckParameter3,
                        0LL,
                        0,
                        1uLL,
                        a5[34] >> 6,
                        v33,
                        0x80000000,
                        v65,
                        0,
                        0LL,
                        &v85);
  }
LABEL_96:
  v66 = 0;
  MiRelockFaultState((__int64 *)(v89 + 56), v91, v56, (__int64)v55);
  if ( Buf2 )
  {
    *((_QWORD *)&v101 + 1) |= 0x8000000000000000uLL;
    MiRelockProtoPoolPage((__int64)Buf2, 0LL);
    v67 = Buf2;
    v83 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)Buf2 + 6, 0x3FuLL) )
    {
      v68 = v67;
      do
      {
        do
          KeYieldProcessorEx(&v83);
        while ( *((__int64 *)v68 + 3) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v68 + 6, 0x3FuLL) );
      v67 = Buf2;
    }
    v14 = memcmp(&Buf1, v67, 0x30uLL) == 0;
    v69 = Buf2;
    v66 = !v14;
    _InterlockedAnd64((volatile signed __int64 *)Buf2 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReturnPfnReferenceCount((__int64)v69);
  }
  LODWORD(v88) = 0;
  while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v88);
    while ( *((__int64 *)v7 + 3) < 0 );
  }
  if ( !v66
    && !memcmp(v103, (const void *)v7, 0x30uLL)
    && (*((_QWORD *)v7 + 3) & 0x4000000000000000LL) == 0
    && (unsigned int)MiIsFaultPteIntact(v89, *(_QWORD *)v89, v94, &v90) )
  {
    if ( ContiguousPages < 0 )
    {
      MiRemoveLockedPageCharge((__int64)v7, v74, v75);
      return v7;
    }
    MiCopyPage(BugCheckParameter3, BugCheckParameter2, (v90 & 0x40) != 0 ? 16 : 8);
    v76 = v87;
    MiSwapHardFaultPage(v94, v7, v87);
    v76[16] = 0;
    v77 = 1LL;
    if ( (unsigned __int16 *)v26 != MiSystemPartition )
      goto LABEL_136;
    v78 = KeGetCurrentPrcb();
    v79 = (int)v78->CachedResidentAvailable;
    if ( (_DWORD)v79 == -1 )
      goto LABEL_136;
    if ( (unsigned __int64)(v79 + 1) <= 0x100 )
    {
      do
      {
        v80 = _InterlockedCompareExchange((volatile signed __int32 *)&v78->CachedResidentAvailable, v79 + 1, v79);
        v14 = (_DWORD)v79 == v80;
        LODWORD(v79) = v80;
        if ( v14 )
          goto LABEL_137;
      }
      while ( v80 != -1 && (unsigned __int64)(v80 + 1LL) <= 0x100 );
    }
    if ( (int)v79 > 192
      && (_DWORD)v79 == _InterlockedCompareExchange((volatile signed __int32 *)&v78->CachedResidentAvailable, 192, v79) )
    {
      v77 = (int)v79 - 192 + 1LL;
    }
    if ( v77 )
LABEL_136:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v77);
LABEL_137:
    *v95 = 1;
    return (volatile signed __int32 *)v76;
  }
  if ( ContiguousPages >= 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)v7 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    MiReleaseFreshPage((__int64)v87);
    MiReturnCommit(v26, 1LL, v70);
    if ( (unsigned __int16 *)v26 != MiSystemPartition )
      goto LABEL_119;
    v71 = KeGetCurrentPrcb();
    v72 = (int)v71->CachedResidentAvailable;
    if ( (_DWORD)v72 == -1 )
      goto LABEL_119;
    if ( (unsigned __int64)(v72 + 1) <= 0x100 )
    {
      do
      {
        v73 = _InterlockedCompareExchange((volatile signed __int32 *)&v71->CachedResidentAvailable, v72 + 1, v72);
        v14 = (_DWORD)v72 == v73;
        LODWORD(v72) = v73;
        if ( v14 )
          goto LABEL_120;
      }
      while ( v73 != -1 && (unsigned __int64)(v73 + 1LL) <= 0x100 );
    }
    if ( (int)v72 > 192
      && (_DWORD)v72 == _InterlockedCompareExchange((volatile signed __int32 *)&v71->CachedResidentAvailable, 192, v72) )
    {
      v25 = (int)v72 - 192 + 1LL;
    }
    if ( v25 )
LABEL_119:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 17280), v25);
LABEL_120:
    LODWORD(Buf2) = 0;
    while ( _interlockedbittestandset64(v7 + 6, 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&Buf2);
      while ( *((__int64 *)v7 + 3) < 0 );
    }
  }
  MiRemoveLockedPageChargeAndDecRef((__int64)v7);
  return 0LL;
}
