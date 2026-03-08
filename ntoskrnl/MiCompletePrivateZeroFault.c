/*
 * XREFs of MiCompletePrivateZeroFault @ 0x14026C360
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14026BD60 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140210114 (MiLockAndDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiAllocateWsle @ 0x14026D1B0 (MiAllocateWsle.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402CFF20 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiUserPdeOrAbove @ 0x1402D39A0 (MiUserPdeOrAbove.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiAdvanceFaultList @ 0x140363F9C (MiAdvanceFaultList.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiFreePageChain @ 0x1404646F2 (MiFreePageChain.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  _QWORD *v4; // r15
  __int64 v5; // r14
  unsigned __int64 *v6; // rcx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r13d
  __int64 v14; // rsi
  int v15; // r9d
  unsigned __int64 v16; // rdi
  unsigned __int64 LeafVa; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  int v20; // r12d
  int v21; // eax
  __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r13
  volatile signed __int64 *v31; // r8
  __int64 v32; // rax
  volatile signed __int64 v33; // rdx
  signed __int64 v34; // rdi
  __int64 v35; // r12
  int v36; // r8d
  unsigned int v37; // edi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // r9
  __int64 v40; // rcx
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rdi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // r10
  __int64 v46; // rdi
  signed __int64 v47; // rax
  signed __int64 v48; // rax
  __int64 v49; // r13
  struct _KTHREAD *v50; // rax
  unsigned int Queue; // edi
  unsigned int v52; // edi
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  unsigned __int8 v55; // r11
  int v56; // edx
  char v57; // al
  __int64 v58; // r12
  __int64 v59; // rdi
  __int64 v60; // rdx
  int v61; // eax
  __int16 v62; // ax
  __int64 v63; // rcx
  unsigned int v64; // r12d
  __int64 v65; // r8
  unsigned int v66; // esi
  __int64 v68; // rax
  void *v69; // rdi
  unsigned int v70; // r8d
  unsigned __int64 v71; // rdi
  unsigned __int64 v72; // rdi
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  char v77; // al
  __int64 v78; // rcx
  unsigned __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rax
  __int64 **v83; // rdi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v85; // rax
  signed __int64 v86; // rcx
  volatile signed __int32 *v87; // r13
  struct _LIST_ENTRY *v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  struct _LIST_ENTRY *v91; // rcx
  __int64 v92; // rcx
  signed __int64 v93; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v97; // eax
  bool v98; // zf
  __int64 v99; // rdi
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 **Address; // rax
  __int64 v104; // rdx
  __int64 v105; // rdi
  struct _LIST_ENTRY *v106; // rcx
  __int64 v107; // rcx
  unsigned int v108; // [rsp+40h] [rbp-C0h]
  char v109; // [rsp+44h] [rbp-BCh]
  __int64 v110; // [rsp+48h] [rbp-B8h]
  unsigned int v111; // [rsp+50h] [rbp-B0h]
  int v112; // [rsp+54h] [rbp-ACh]
  int v113; // [rsp+5Ch] [rbp-A4h]
  int v114; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v115; // [rsp+68h] [rbp-98h]
  volatile signed __int64 *v116; // [rsp+70h] [rbp-90h]
  int v117; // [rsp+78h] [rbp-88h]
  int v118; // [rsp+7Ch] [rbp-84h] BYREF
  int v119; // [rsp+80h] [rbp-80h] BYREF
  int v120; // [rsp+84h] [rbp-7Ch] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp-78h]
  unsigned __int64 v122; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v123; // [rsp+98h] [rbp-68h]
  __int64 v124; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v125; // [rsp+A8h] [rbp-58h]
  __int64 v126; // [rsp+B0h] [rbp-50h]
  __int64 **v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+C0h] [rbp-40h]
  __int128 v129; // [rsp+C8h] [rbp-38h]
  __int128 v130; // [rsp+D8h] [rbp-28h]
  __int64 v131; // [rsp+E8h] [rbp-18h]
  signed __int64 v132; // [rsp+F0h] [rbp-10h]
  __int128 v133; // [rsp+F8h] [rbp-8h]
  __int128 v134; // [rsp+108h] [rbp+8h]
  __int64 v135; // [rsp+118h] [rbp+18h]
  unsigned __int64 v136; // [rsp+120h] [rbp+20h]
  _QWORD *v137; // [rsp+180h] [rbp+80h] BYREF
  __int64 v138; // [rsp+188h] [rbp+88h]
  unsigned __int64 v139; // [rsp+190h] [rbp+90h] BYREF
  char v140; // [rsp+198h] [rbp+98h]

  v139 = a3;
  v138 = a2;
  v137 = a1;
  v3 = a1[7];
  v4 = a1;
  v5 = (a1[2] >> 9) & 0x7FFFFFFFF8LL;
  v125 = v3;
  v6 = (unsigned __int64 *)a1[1];
  v7 = v5 - 0x98000000000LL;
  v109 = 0;
  v122 = v6[7];
  v112 = 0;
  v8 = v6[2];
  if ( (v8 & 1) != 0 )
    v112 = *(_BYTE *)(v8 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *v6;
  if ( (*(_DWORD *)v4 & 8) != 0 )
    v9 = v3;
  v128 = v9;
  Process = CurrentThread->ApcState.Process;
  v12 = v4[8];
  v126 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v108 = 16;
  v127 = (__int64 **)v12;
  v114 = 0;
  if ( v12 )
  {
    v75 = *(unsigned int *)(v12 + 52);
    LODWORD(v75) = v75 & 0x7FFFFFFF;
    if ( (v75 | ((unsigned __int64)*(unsigned __int8 *)(v12 + 34) << 31)) == 0x7FFFFFFFELL )
      v108 = 80;
  }
  v13 = *((_DWORD *)v4 + 8);
  v117 = v13;
  if ( (v13 & 2) == 0 || (v123 = 0xFFFFF6BFFFFFFF78uLL, v7 > 0xFFFFF6BFFFFFFF78uLL) || v7 < 0xFFFFF68000000000uLL )
  {
    v13 |= 0x80000000;
    v117 = v13;
    v123 = 0xFFFFF6BFFFFFFF78uLL;
  }
  if ( !*((_DWORD *)v4 + 9) )
    __incgsdword(0x2E9Cu);
  v14 = v13 & 0x1F;
  v15 = 0;
  v113 = 0;
  v16 = MmProtectToPteMask[v14] & 0xFFF0000000000E5EuLL | 0x21;
  if ( v7 >= 0xFFFFF68000000000uLL && v7 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    LeafVa = (__int64)(v7 << 25) >> 16;
    if ( v7 >= 0xFFFFF6FB40000000uLL && v7 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v7 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v16 = MmProtectToPteMask[v14] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v13 & 0x4000000) == 0 )
      {
        v16 = MmProtectToPteMask[v14] & 0x7FF0000000000E5ELL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(v7) )
        v16 |= 4uLL;
    }
    v18 = v16;
    v19 = v16 | 4;
    if ( v7 > 0xFFFFF6BFFFFFFF78uLL )
      v19 = v18;
    v20 = v13 & 0x4000000;
    if ( (v13 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(LeafVa);
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1
        || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
      {
LABEL_21:
        a3 = v139;
        v15 = 0;
        goto LABEL_22;
      }
      if ( LeafVa > qword_140C66CF0 || LeafVa < qword_140C6A1D8 )
        v21 = (unsigned __int8)word_140C6697C;
      else
        v21 = HIBYTE(word_140C6697C);
    }
    else
    {
      v21 = HIBYTE(word_140C6697C);
    }
    if ( v21 )
      v19 |= 0x100uLL;
    goto LABEL_21;
  }
  v19 = MmProtectToPteMask[v14] & 0xFFF0000000000E5EuLL | 0x121;
  v20 = v13 & 0x4000000;
LABEL_22:
  v22 = v19 | 0x42;
  if ( (v13 & 5) != 4 || v13 >= 0 )
    v22 = v19;
  if ( (v13 & 0x40000000) != 0 )
    v22 &= ~4uLL;
  if ( (v13 & 0x20000000) != 0 )
    v22 = ((unsigned __int16)v22 ^ (unsigned __int16)((unsigned __int8)word_140C6697C << 8)) & 0x100 ^ (unsigned __int64)v22;
  if ( (v13 & 0x8000000) != 0 )
    v22 &= ~0x100uLL;
  if ( v20 )
    v22 |= 0x80uLL;
  v23 = v22 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( a3 > 1 )
  {
    v76 = v4[1];
    v77 = *(_BYTE *)(v76 + 69);
    if ( (v77 & 4) == 0 )
    {
      v109 = 1;
      v24 = 0LL;
      *(_BYTE *)(v76 + 69) = v77 | 4;
      v115 = 0LL;
      goto LABEL_34;
    }
  }
  v24 = 0LL;
  v115 = 0LL;
  if ( !a3 )
  {
    v66 = 273;
    goto LABEL_102;
  }
  while ( 1 )
  {
LABEL_34:
    v25 = *(_QWORD *)v7;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v25 & 1) != 0
      && ((v25 & 0x20) == 0 || (v25 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v85 = *((_QWORD *)&Flink->Flink + ((v7 >> 3) & 0x1FF));
        if ( (v85 & 0x20) != 0 )
          v25 |= 0x20uLL;
        if ( (v85 & 0x42) != 0 )
          v25 |= 0x42uLL;
      }
      v24 = v115;
    }
    if ( *((_DWORD *)v4 + 9) )
    {
      if ( (v25 & 0x400) == 0 && (v25 & 0x4000000) != 0 && !v24 )
        v23 |= 0x40uLL;
    }
    else
    {
      if ( v25 )
        goto LABEL_42;
      v25 = 32LL * (v4[4] & 0x1F);
      v113 = v15 + 1;
      if ( qword_140C657C0 )
      {
        if ( (qword_140C657C0 & v25) != 0 )
          v25 |= 0x10uLL;
        else
          v25 |= qword_140C657C0;
      }
      v26 = v25;
      if ( !(unsigned int)MiPteInShadowRange(v7) )
        goto LABEL_41;
      if ( !(unsigned int)MiPteHasShadow(v28, v27, v29) )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v25 & 1) != 0 )
        {
          v26 = v25 | 0x8000000000000000uLL;
        }
LABEL_41:
        *(_QWORD *)v7 = v26;
        goto LABEL_42;
      }
      if ( !HIBYTE(word_140C6697C) && (v25 & 1) != 0 )
        v26 = v25 | 0x8000000000000000uLL;
      *(_QWORD *)v7 = v26;
      MiWritePteShadow(v7, v26);
    }
LABEL_42:
    v30 = v138;
    v110 = v138;
    v31 = (volatile signed __int64 *)(v138 + 24);
    v32 = *(_QWORD *)(v138 + 24) & 0xFFFFFFFFFFLL;
    v116 = (volatile signed __int64 *)(v138 + 24);
    if ( v32 == 0x3FFFFFFFFFLL )
      v138 = 0LL;
    else
      v138 = 48 * v32 - 0x220000000000LL;
    v33 = *v31;
    v34 = _InterlockedCompareExchange64(v31, *v31 & 0xFFFFFF0000000000uLL, *v31);
    if ( v33 != v34 )
    {
      do
      {
        v86 = v34;
        v34 = _InterlockedCompareExchange64(v31, v34 & 0xFFFFFF0000000000uLL, v34);
      }
      while ( v86 != v34 );
    }
    v35 = 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4);
    if ( *((_DWORD *)v4 + 9) && !v4[9] && (v25 & 0x400) != 0 )
    {
      v68 = v25;
      if ( qword_140C657C0 && (v25 & 0x10) == 0 )
        v68 = v25 & ~qword_140C657C0;
      if ( v68 >> 16 )
      {
        v118 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v31, 0x3FuLL) )
        {
          v87 = (volatile signed __int32 *)v31;
          do
          {
            do
              KeYieldProcessorEx(&v118);
            while ( *(__int64 *)v87 < 0 );
          }
          while ( _interlockedbittestandset64(v87, 0x3FuLL) );
          v30 = v110;
        }
        MiSetPfnIdentity(v30, 4LL);
        _InterlockedAnd64(v116, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v25 & 0x3E0) != 0 )
      {
        v25 &= ~0x400uLL;
      }
      else
      {
        v25 = 0LL;
      }
      v69 = (void *)MiMapPageInHyperSpaceWorker(v35, 0LL, 0x80000000);
      memset64(v69, v25 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v69, 0x11u);
      v25 = MiSwizzleInvalidPte(128LL);
      v36 = v108 | 8;
      v108 |= 8u;
    }
    else
    {
      v36 = v108;
    }
    if ( (*(_DWORD *)v4 & 4) != 0 )
    {
      v36 |= 0x20u;
      v108 = v36;
    }
    v37 = *((_DWORD *)v4 + 8);
    v38 = *(_QWORD *)v7;
    v39 = 0xFFFFF6FB7DBED000uLL;
    if ( v7 >= 0xFFFFF6FB7DBED000uLL
      && v7 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v38 & 1) != 0
      && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
    {
      v88 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v88 )
      {
        v89 = *((_QWORD *)&v88->Flink + ((v7 >> 3) & 0x1FF));
        if ( (v89 & 0x20) != 0 )
          v38 |= 0x20uLL;
        if ( (v89 & 0x42) != 0 )
          v38 |= 0x42uLL;
      }
      LOBYTE(v36) = v108;
    }
    if ( (v36 & 4) != 0 )
    {
      v90 = 32LL * (v37 & 0x1F);
      if ( v38 )
        v38 = v90 | v38 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v38 = MiSwizzleInvalidPte(v90);
    }
    v40 = -9LL;
    if ( (v38 & 0x400) != 0 )
      v40 = -2049LL;
    v41 = v38 & v40;
    *(_QWORD *)(v30 + 16) = v41;
    if ( (v36 & 2) != 0 )
    {
      *(_QWORD *)(v30 + 40) |= 0x8000000000000000uLL;
    }
    else if ( (v36 & 8) == 0 )
    {
      *(_QWORD *)v30 &= 0xFFFFFFFFFFFFC00FuLL;
      *(_QWORD *)(v30 + 16) = v41 & 0xFFFFFFFFFC00FFFFuLL;
    }
    v111 = 1;
    if ( v37 )
    {
      if ( v37 == 31 )
      {
        v111 = 1;
      }
      else if ( v37 >> 3 == 3 )
      {
        if ( (v37 & 7) != 0 )
          v111 = 2;
      }
      else
      {
        v111 = v37 >> 3 != 1;
      }
    }
    else
    {
      v111 = 3;
    }
    *(_WORD *)(v30 + 32) = 1;
    v42 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v43 = *(_QWORD *)v42;
    if ( v42 >= v39
      && v42 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v91 )
      {
        v92 = *((_QWORD *)&v91->Flink + ((v42 >> 3) & 0x1FF));
        if ( (v92 & 0x20) != 0 )
          v43 |= 0x20uLL;
        if ( (v92 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v124 = v43;
    v44 = MI_READ_PTE_LOCK_FREE(&v124);
    v45 = v110;
    v46 = (v44 >> 12) & 0xFFFFFFFFFFLL;
    v47 = *(_QWORD *)(v110 + 40);
    v131 = 0LL;
    v132 = v47;
    v135 = 0LL;
    v136 = v46 | v47 & 0xFFFFFF0000000000uLL;
    v129 = 0LL;
    v130 = 0LL;
    v133 = 0LL;
    v134 = 0LL;
    v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v110 + 40), v136, v47);
    v136 = v48;
    if ( v132 != v48 )
    {
      do
      {
        v132 = v48;
        v93 = v48;
        v136 = v46 | v48 & 0xFFFFFF0000000000uLL;
        v48 = _InterlockedCompareExchange64((volatile signed __int64 *)(v110 + 40), v136, v48);
        v136 = v48;
      }
      while ( v93 != v48 );
    }
    v49 = 48 * v46 - 0x220000000000LL;
    v50 = KeGetCurrentThread();
    Queue = (unsigned int)v50[1].Queue;
    if ( (Queue & 0x100) != 0 )
    {
      v52 = Queue >> 9;
    }
    else
    {
      v52 = (*((_DWORD *)&v50[1].SwapListEntry + 2) >> 12) & 7;
      v53 = v50->Process[1].Affinity.StaticBitmap[16];
      if ( v53 && v52 >= *(_DWORD *)(v53 + 1076) )
        LOBYTE(v52) = *(_DWORD *)(v53 + 1076);
    }
    v54 = v108;
    v55 = 17;
    v140 = 17;
    v56 = v108 & 1;
    if ( (v108 & 1) == 0 )
    {
      if ( (v108 & 0x10) != 0 )
      {
        v119 = 0;
        if ( !_interlockedbittestandset64((volatile signed __int32 *)v116, 0x3FuLL) )
          goto LABEL_67;
        do
        {
          do
            KeYieldProcessorEx(&v119);
          while ( *(__int64 *)v116 < 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)v116, 0x3FuLL) );
        v4 = v137;
        v55 = v140;
      }
      else
      {
        v55 = MiLockPageInline(v110);
        v140 = v55;
      }
      v54 = v108;
      v45 = v110;
      v56 = v108 & 1;
    }
LABEL_67:
    v120 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v120);
        while ( *(__int64 *)(v49 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) );
      v56 = v108 & 1;
      v45 = v110;
      v55 = v140;
      v54 = v108;
    }
    *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( *(unsigned __int8 *)(v45 + 34) >> 6 != v111 )
    {
      MiChangePageAttribute(v45, v111, 1LL, 0x3FFFFFFFFFFFFFFFLL);
      v56 = v108 & 1;
      v45 = v110;
      v55 = v140;
      v54 = v108;
    }
    *(_BYTE *)(v45 + 35) ^= (*(_BYTE *)(v45 + 35) ^ v52) & 7;
    *(_QWORD *)(v45 + 8) = v7;
    *v116 = *v116 & 0xC000000000000000uLL | 1;
    v57 = *(_BYTE *)(v45 + 34) & 0xF8 | 6;
    *(_BYTE *)(v45 + 34) = v57;
    if ( (v54 & 0x20) == 0 )
      *(_BYTE *)(v45 + 34) = v57 | 0x10;
    if ( (v54 & 0x40) != 0 )
      *(_BYTE *)(v45 + 35) |= 0x20u;
    if ( !v56 )
    {
      _InterlockedAnd64(v116, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v54 & 0x10) == 0 )
      {
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v55 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v97 = ~(unsigned __int16)(-1LL << (v55 + 1));
            v98 = (v97 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v97;
            if ( v98 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v45 = v110;
              v55 = v140;
            }
            v54 = v108;
          }
        }
        __writecr8(v55);
      }
    }
    if ( (v54 & 8) != 0 )
      *(_QWORD *)(v45 + 16) = v25;
    v58 = v35 & 0xFFFFFFFFFFLL;
    if ( (*(_DWORD *)v4 & 4) != 0 )
    {
      v99 = MiSwizzleInvalidPte(32 * ((v58 << 7) | v4[4] & 0x1F | 0x40));
      if ( (unsigned int)MiPteInShadowRange(v7) )
      {
        if ( (unsigned int)MiPteHasShadow(v101, v100, v102) )
        {
          if ( !HIBYTE(word_140C6697C) && (v99 & 1) != 0 )
            v99 |= 0x8000000000000000uLL;
          *(_QWORD *)v7 = v99;
          MiWritePteShadow(v7, v99);
          goto LABEL_266;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v99 & 1) != 0 )
        {
          v99 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v7 = v99;
LABEL_266:
      if ( (*(_DWORD *)v4 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v110, 0);
      if ( v125
        && (__int64)(v7 << 25) >> 16 == *(_QWORD *)(*(_QWORD *)(v125 + 8) + 16LL * *(_QWORD *)(v125 + 24))
                                      + (*(_QWORD *)(v125 + 32) << 12)
        && *(_BYTE *)v125 != 5 )
      {
        MiAdvanceFaultList(v125);
      }
      goto LABEL_99;
    }
    v23 = (v58 << 12) | v23 & 0xFFF0000000000FFFuLL | 0x20;
    if ( !v4[9] )
      break;
    v79 = v23;
    if ( (unsigned int)MiPteInShadowRange(v7) )
    {
      if ( (unsigned int)MiPteHasShadow(v81, v80, v65) )
      {
        if ( !HIBYTE(word_140C6697C) && (v23 & 1) != 0 )
          v79 = v23 | 0x8000000000000000uLL;
        *(_QWORD *)v7 = v79;
        MiWritePteShadow(v7, v79);
        goto LABEL_99;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v23 & 1) != 0 )
      {
        v79 = v23 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v7 = v79;
LABEL_99:
    v7 += 8LL;
    v15 = v113;
    v24 = v115 + 1;
    v115 = v24;
    if ( v24 >= v139 )
    {
      v66 = 273;
      goto LABEL_101;
    }
  }
  if ( v7 != v126 && (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v23 &= ~0x20uLL;
    if ( v117 < 0
      && v7 <= v123
      && v7 >= 0xFFFFF68000000000uLL
      && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v114 )
      {
        if ( v114 != 2 )
          goto LABEL_86;
      }
      else
      {
        if ( v127 )
        {
          v83 = v127;
        }
        else
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(v4[2]);
          LOBYTE(v104) = 17;
          v83 = Address;
          MiUnlockVadTree(1LL, v104);
          v45 = v110;
        }
        if ( ((_DWORD)v83[6] & 0x600000) != 0x600000 )
        {
          v114 = 1;
          goto LABEL_86;
        }
        v114 = 2;
      }
      v23 &= 0xFFFFFFFFFFFFFFBDuLL;
    }
  }
LABEL_86:
  v59 = v4[1];
  v60 = *(unsigned __int8 *)(v59 + 69);
  if ( (v60 & 5) != 4 || (v60 & 2) != 0 )
  {
    v64 = v112 & 0xFFFFFFFB;
    v112 &= ~4u;
  }
  else
  {
    v61 = *(unsigned __int16 *)(v59 + 66);
    if ( (_WORD)v61 )
    {
      if ( v61 + *(unsigned __int16 *)(v59 + 64) == (((unsigned int)v7 >> 3) & 0x1FF) )
      {
        if ( *(__int64 *)(v45 + 40) < 0 )
        {
          if ( (v60 & 0x10) == 0 )
            goto LABEL_92;
        }
        else if ( (v60 & 0x10) != 0 )
        {
          goto LABEL_92;
        }
      }
      MiEmptyDeferredWorkingSetEntries(v59 + 56, v60, v54);
      v45 = v110;
    }
LABEL_92:
    v62 = *(_WORD *)(v59 + 66);
    if ( v62 )
    {
      *(_WORD *)(v59 + 66) = v62 + 1;
    }
    else
    {
      *(_WORD *)(v59 + 66) = 1;
      *(_WORD *)(v59 + 64) = ((unsigned int)v7 >> 3) & 0x1FF;
      if ( *(__int64 *)(v45 + 40) < 0 )
        *(_BYTE *)(v59 + 69) &= ~0x10u;
      else
        *(_BYTE *)(v59 + 69) |= 0x10u;
    }
    v63 = v4[1];
    v64 = v112 | 4;
    v112 |= 4u;
    if ( (*(_BYTE *)(v63 + 69) & 8) != 0 )
    {
      v82 = *(_QWORD *)(v63 + 16);
      if ( (v82 & 1) == 0 || *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        v23 &= ~0x20uLL;
    }
  }
  if ( (unsigned int)MiAllocateWsle(v122, v7, v45, 0, v23, v64, v128) )
  {
    if ( (*(_DWORD *)v4 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_99;
  }
  v105 = 48 * (*(_QWORD *)(v110 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  LODWORD(v139) = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)v116, 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v139);
    while ( *(__int64 *)v116 < 0 );
  }
  MiCapturePageFileInfoInline(v110 + 16, 1LL, 0LL);
  *(_QWORD *)(v110 + 16) &= ~2uLL;
  *v116 |= 0x4000000000000000uLL;
  MiDecrementShareCount(v110);
  _InterlockedAnd64(v116, 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(v105, 0);
  v66 = -1073741801;
  MiFreePageChain(v138);
  if ( (v64 & 4) != 0 )
    --*(_WORD *)(v4[1] + 66LL);
LABEL_101:
  if ( v109 )
  {
    v78 = v4[1];
    if ( (*(_BYTE *)(v78 + 69) & 4) != 0 && *(_WORD *)(v78 + 66) )
      MiEmptyDeferredWorkingSetEntries(v78 + 56, v24, v65);
    *(_BYTE *)(v4[1] + 69LL) &= ~4u;
  }
LABEL_102:
  if ( !*((_DWORD *)v4 + 9) && v113 )
  {
    v70 = 0;
    v71 = v4[2];
    while ( v71 > 0x7FFFFFFEFFFFLL )
    {
      ++v70;
      v71 = (__int64)(v71 << 25) >> 16;
      if ( v70 >= 3 )
        return v66;
    }
    v72 = ((v4[2] >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL;
    v73 = *(_QWORD *)v72;
    if ( v72 >= 0xFFFFF6FB7DBED000uLL
      && v72 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v73 & 1) != 0
      && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
    {
      v106 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v106 )
      {
        v107 = *((_QWORD *)&v106->Flink + ((v72 >> 3) & 0x1FF));
        if ( (v107 & 0x20) != 0 )
          v73 |= 0x20uLL;
        if ( (v107 & 0x42) != 0 )
          v73 |= 0x42uLL;
      }
    }
    v122 = v73;
    v74 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v122) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    LODWORD(v137) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v137);
      while ( *(__int64 *)(v74 + 24) < 0 );
    }
    *(_QWORD *)(v74 + 16) ^= ((unsigned int)*(_QWORD *)(v74 + 16) ^ ((unsigned int)*(_QWORD *)(v74 + 16)
                                                                   + ((unsigned __int16)v113 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return v66;
}
