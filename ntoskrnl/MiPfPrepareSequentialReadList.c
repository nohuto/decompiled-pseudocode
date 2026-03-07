__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        __int64 *a9)
{
  unsigned int v9; // r12d
  bool v11; // zf
  __int64 v13; // r15
  unsigned __int64 ControlAreaPtes; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r13
  _QWORD *Pool; // rax
  __int64 v18; // rbp
  _QWORD *v19; // rax
  int v20; // eax
  unsigned __int64 v21; // rbx
  __int64 *v22; // r14
  __int64 v23; // rsi
  int v24; // edi
  unsigned __int64 *v25; // rax
  _QWORD *v26; // r11
  unsigned int *v27; // r10
  unsigned __int64 PteShadow; // rbx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  unsigned int *v31; // r9
  unsigned __int64 v32; // r8
  _QWORD *v33; // r15
  __int64 PteAddress; // rax
  __int64 v35; // rdx
  ULONG_PTR v36; // r14
  int v37; // ecx
  __int16 v38; // bx
  __int64 result; // rax
  unsigned __int64 v40; // r15
  _QWORD *v41; // rbx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // r14
  _QWORD *v47; // r13
  __int64 v48; // r12
  unsigned int v49; // r15d
  unsigned int v50; // eax
  int v51; // r9d
  __int64 PageChain; // rax
  __int64 v53; // rbx
  _QWORD *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r8
  unsigned int Mdls; // eax
  __int64 v61; // r15
  unsigned int v62; // ecx
  __int64 v63; // rbx
  __int64 v64; // r14
  unsigned int *v65; // rax
  __int64 SharedProtos; // rax
  int v67; // ecx
  unsigned int NextPageColor; // eax
  __int64 v69; // r9
  __int64 SlabPage; // rax
  __int64 v71; // rcx
  int v72; // eax
  int v73; // eax
  unsigned int v74; // [rsp+40h] [rbp-F8h]
  void *ControlAreaPartition; // [rsp+48h] [rbp-F0h]
  unsigned __int64 v76; // [rsp+50h] [rbp-E8h]
  unsigned int *BugCheckParameter2; // [rsp+58h] [rbp-E0h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-D8h]
  _QWORD *v79; // [rsp+68h] [rbp-D0h]
  __int64 v80; // [rsp+70h] [rbp-C8h]
  __int64 v81; // [rsp+78h] [rbp-C0h]
  unsigned int *P; // [rsp+80h] [rbp-B8h]
  unsigned int v83; // [rsp+88h] [rbp-B0h] BYREF
  unsigned int *v84; // [rsp+90h] [rbp-A8h]
  _QWORD *v85; // [rsp+98h] [rbp-A0h]
  _QWORD *v86; // [rsp+A0h] [rbp-98h]
  unsigned __int64 v87; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v88; // [rsp+B0h] [rbp-88h]
  unsigned __int64 v89; // [rsp+B8h] [rbp-80h]
  __int64 *v90; // [rsp+C0h] [rbp-78h]
  __int64 *v91; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v92; // [rsp+D0h] [rbp-68h]
  __int64 AvailablePagesExcludeSlists; // [rsp+D8h] [rbp-60h]
  unsigned __int64 *v94; // [rsp+E0h] [rbp-58h]
  _OWORD v95[5]; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v97; // [rsp+148h] [rbp+10h] BYREF
  __int64 v98; // [rsp+158h] [rbp+20h]

  v98 = a4;
  v97 = a2;
  v9 = 0;
  v95[0] = 0LL;
  v11 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  CurrentThread = KeGetCurrentThread();
  v13 = a2;
  P = 0LL;
  *a9 = 0LL;
  if ( !v11 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  v15 = a5;
  if ( a5 )
  {
    v16 = a5 >> 12;
    if ( a5 >> 12 > 0xFFFFFFFF || (unsigned int)v16 > ControlAreaPtes )
      return 3221225713LL;
  }
  else
  {
    if ( ControlAreaPtes >= 0x100000000LL )
      return 3221225713LL;
    LODWORD(v16) = ControlAreaPtes;
  }
  if ( a4 && (unsigned int)v16 + ((a3 >> 12) & 0x3FuLL) > 0x40 )
    return 3221225713LL;
  Pool = MiAllocatePool(64, 8LL * (unsigned int)(v16 - 1) + 144, 0x6C526D4Du);
  v18 = (__int64)Pool;
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = v13;
  v19 = Pool + 15;
  v19[1] = v19;
  *v19 = v19;
  *(_QWORD *)(v18 + 32) = v18 + 24;
  *(_QWORD *)(v18 + 24) = v18 + 24;
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v64 = 511LL;
    if ( (unsigned int)v16 <= 0x1FFuLL )
      v64 = (unsigned int)v16;
    v65 = (unsigned int *)MiAllocatePool(66, 8 * v64 + 16, 0x6C68694Du);
    P = v65;
    if ( !v65 )
    {
      v74 = -1073741670;
      goto LABEL_80;
    }
    *(_QWORD *)v65 = 1LL;
    v65[2] = v64;
    MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
  }
  v87 = 0LL;
  v20 = (*(unsigned __int16 *)(v13 + 160) >> 1) & 0x1F;
  v80 = 0LL;
  v76 = 0LL;
  v79 = 0LL;
  v91 = 0LL;
  BugCheckParameter2 = (unsigned int *)(v13 + 128);
  v88 = v20;
  if ( v15 )
    BugCheckParameter2 = MiOffsetToProtos(v13, a3, &v87);
  ControlAreaPartition = (void *)MiGetControlAreaPartition(v13);
  v21 = 0LL;
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v22 = 0LL;
  v92 = 0LL;
  v90 = 0LL;
  v89 = 0LL;
  if ( a1 )
  {
    v62 = *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
    v85 = *(_QWORD **)(a1 + 32);
    v23 = v62;
  }
  else
  {
    v85 = 0LL;
    v23 = 0LL;
  }
  *(_DWORD *)(v18 + 80) = a6;
  *(_DWORD *)(v18 + 84) = 5;
  *(_DWORD *)(v18 + 88) = 7;
  v24 = (*(_DWORD *)(v13 + 56) >> 20) & 0x7F;
  v83 = 0;
  v25 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v86 = (_QWORD *)(v18 + 136);
  v94 = v25;
  MiInitializePageColorBase((__int64)v25, v24, (__int64)v95);
  v74 = 0;
  v27 = 0LL;
  v84 = 0LL;
  if ( (_DWORD)v16 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v22 >= v21 )
      {
        v11 = v22 == 0LL;
        v36 = (ULONG_PTR)BugCheckParameter2;
        if ( !v11 )
        {
          v36 = *((_QWORD *)BugCheckParameter2 + 2);
          BugCheckParameter2 = (unsigned int *)v36;
          if ( !v36 )
          {
LABEL_54:
            v21 = v76;
            v46 = v80;
            v47 = v79;
            goto LABEL_55;
          }
          v87 = 0LL;
        }
        v37 = *(_DWORD *)(v13 + 56);
        if ( (v37 & 0x20) != 0 )
        {
          v40 = *(_QWORD *)(v36 + 8);
          if ( (*(_BYTE *)(v36 + 34) & 2) != 0 && (v37 & 0x8000000) != 0 )
          {
            if ( !*(_QWORD *)(v36 + 24) )
            {
              v22 = (__int64 *)(v21 - 8);
              goto LABEL_32;
            }
            SharedProtos = MiGetSharedProtos(v97, a7, v36);
            if ( !SharedProtos )
            {
              v22 = (__int64 *)(v21 - 8);
              goto LABEL_32;
            }
            v40 = *(_QWORD *)(SharedProtos + 72);
          }
        }
        else
        {
          v38 = 4;
          if ( P )
            v38 = 2052;
          result = MiAddViewsForSection(v36, *(unsigned int *)(v36 + 44), v38);
          v74 = result;
          if ( (int)result < 0 )
          {
            if ( (v38 & 0x800) == 0 || (_DWORD)result != -1073741078 )
            {
              v61 = (__int64)CurrentThread;
LABEL_123:
              if ( !v76 )
                goto LABEL_69;
              MiReturnFaultCharges((__int64)ControlAreaPartition, v76, (struct _KPRCB *)1);
LABEL_79:
              result = v74;
              goto LABEL_69;
            }
            MiNotifyPageHeat(P);
            v61 = (__int64)CurrentThread;
            MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
            v74 = MiAddViewsForSection(v36, *(unsigned int *)(v36 + 44), v38 & 0xF7FF);
            MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
            result = v74;
            if ( (v74 & 0x80000000) != 0 )
              goto LABEL_123;
          }
          v40 = *(_QWORD *)(v36 + 8);
          v41 = (_QWORD *)(v18 + 24);
          v42 = *(_QWORD **)(v18 + 32);
          if ( (_QWORD *)*v41 == v41 || *((_DWORD *)v42 + 4) == 5 )
          {
            v42 = MiAllocatePool(256, 0x40uLL, 0x6C536D4Du);
            if ( !v42 )
            {
              MiRemoveViewsFromSectionWithPfn((__int64 *)v36);
              v61 = (__int64)CurrentThread;
              result = 3221225626LL;
              v74 = -1073741670;
              goto LABEL_69;
            }
            v43 = *(_QWORD **)(v18 + 32);
            if ( (_QWORD *)*v43 != v41 )
              __fastfail(3u);
            *v42 = v41;
            v42[1] = v43;
            *v43 = v42;
            *(_QWORD *)(v18 + 32) = v42;
          }
          if ( !*(_QWORD *)(v18 + 16) )
            *(_QWORD *)(v18 + 16) = v36;
          v42[(unsigned int)(*((_DWORD *)v42 + 4))++ + 3] = v36;
        }
        v22 = (__int64 *)(v40 + 8 * v87);
        v92 = v40 + 8LL * BugCheckParameter2[11];
        v44 = MiStartingOffset((__int64 *)BugCheckParameter2, v40, a7);
        v45 = MiEndingOffsetWithLock(BugCheckParameter2);
        if ( (((_WORD)v45 - (_WORD)v44) & 0xFFF) != 0 )
          v90 = (__int64 *)(v40 + 8 * (((v45 - v44 + 4095) >> 12) - 1));
        else
          v90 = 0LL;
        v26 = v86;
        v27 = v84;
        if ( v85 )
        {
          HIDWORD(v81) = HIDWORD(v44);
          v89 = v40;
          LODWORD(v81) = v44 & 0xFFFFFE00 | *(_DWORD *)(a1 + 12) & 0x1FF | 0x200;
          v23 = v81;
        }
        v13 = v97;
      }
      PteShadow = *v22;
      if ( (unsigned __int64)v22 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v22 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow((unsigned __int64)v22, *v22);
      if ( (PteShadow & 1) != 0 )
      {
LABEL_36:
        MiUpdatePfnForPrefetchByPte((unsigned __int64)v22, a6, (__int64)P);
        goto LABEL_32;
      }
      if ( (PteShadow & 0x400) != 0 )
        break;
      if ( (PteShadow & 0x800) != 0 )
        goto LABEL_36;
      if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(PteShadow) )
        goto LABEL_21;
LABEL_32:
      ++v9;
      ++v22;
      if ( v9 >= (unsigned int)v16 )
        goto LABEL_54;
      v26 = v86;
      v13 = v97;
      v21 = v92;
      v27 = v84;
    }
    if ( (*(_BYTE *)(v13 + 62) & 0xC) == 4 )
    {
      if ( P )
      {
        MiNotifyPageHeat(P);
        MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
        v49 = a7;
        v74 = MiRefillPurgedExtents((__int64 *)BugCheckParameter2, (__int64)v22, a7);
        MiLockDynamicMemoryShared((__int64)MiSystemPartition, (__int64)CurrentThread);
        v67 = v74;
      }
      else
      {
        v49 = a7;
        v67 = MiRefillPurgedExtents((__int64 *)BugCheckParameter2, (__int64)v22, a7);
        v74 = v67;
      }
      if ( v67 < 0 )
      {
        v46 = v80;
        v21 = v76;
        v48 = (__int64)ControlAreaPartition;
        v47 = v79;
        if ( !v80 )
          v74 = -1073741670;
        goto LABEL_56;
      }
      goto LABEL_32;
    }
    v29 = v85;
    if ( v85 )
    {
      v23 += (__int64)((__int64)v22 - v89) >> 3 << 12;
      v89 = (unsigned __int64)v22;
      *v85 = v23;
      v85 = v29 + 1;
    }
LABEL_21:
    v30 = v26;
    v31 = BugCheckParameter2;
    *v26 = v22;
    v32 = (unsigned __int64)v22;
    if ( v79 )
      v30 = v79;
    v79 = v30;
    v33 = v30;
    if ( v27 != BugCheckParameter2
      || (MiGetPteAddress((unsigned __int64)v91), PteAddress = MiGetPteAddress((unsigned __int64)v22), v35 != PteAddress) )
    {
      v32 |= 2uLL;
      v84 = v31;
      *v26 = v32;
    }
    v91 = v22;
    if ( v22 == v90 )
      *v26 = v32 | 1;
    v86 = v26 + 1;
    if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1) )
    {
      v72 = v74;
      v46 = v80;
      v47 = v33;
      if ( !v80 )
        v72 = -1073741670;
      v21 = v76;
      v74 = v72;
      goto LABEL_55;
    }
    if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, (__int64 *)BugCheckParameter2, PteShadow, &v83)
      && (v63 = v83, v83 <= 3) )
    {
      NextPageColor = MiGetNextPageColor((__int64)v95);
      v69 = 10LL;
      if ( v24 )
        v69 = 8LL;
      SlabPage = MiGetSlabPage((__int64)ControlAreaPartition, v63, NextPageColor, v69, (__int64 *)0xFFFFFFFFFFFFFFFFLL);
      if ( SlabPage == -1 )
      {
        v21 = v76;
LABEL_128:
        v48 = (__int64)ControlAreaPartition;
        MiReturnFaultCharges((__int64)ControlAreaPartition, 1LL, (struct _KPRCB *)1);
        v46 = v80;
        v47 = v33;
        v49 = a7;
        if ( !v80 )
          v74 = -1073741801;
        goto LABEL_56;
      }
      MiSetPfnLink((_QWORD *)(48 * SlabPage - 0x220000000000LL), *(_QWORD *)(v18 + 8 * v63 + 48));
      *(_QWORD *)(v18 + 8 * v63 + 48) = v71;
    }
    else
    {
      v21 = v76;
      if ( v76 > AvailablePagesExcludeSlists + 160 )
        goto LABEL_128;
      ++v76;
    }
    ++v80;
    goto LABEL_32;
  }
  v46 = 0LL;
  v47 = 0LL;
LABEL_55:
  v48 = (__int64)ControlAreaPartition;
  v49 = a7;
LABEL_56:
  if ( a1 )
    *(_QWORD *)(a1 + 24) = v85;
  if ( !v46 )
    goto LABEL_78;
  if ( v21 )
  {
    v97 = v21;
    v50 = MiProtectionToCacheAttribute(v88);
    PageChain = MiGetPageChain(v48, (__int64)v94, 0LL, v51, v50, 0, 0xFFFFFFFFFFFFFFFFuLL, (unsigned __int64 *)&v97);
    v53 = v97;
    v54 = (_QWORD *)PageChain;
    if ( v97 != v76 )
    {
      MiReturnFaultCharges(v48, v76 - v97, (struct _KPRCB *)1);
      v73 = v74;
      v46 += v53 - v76;
      if ( !v46 )
        v73 = -1073741801;
      v74 = v73;
    }
    if ( v54 )
    {
      do
      {
        v55 = v54[3] & 0xFFFFFFFFFFLL;
        if ( v55 == 0x3FFFFFFFFFLL )
          v56 = 0LL;
        else
          v56 = 48 * v55 - 0x220000000000LL;
        MiSetPfnLink(v54, *(_QWORD *)(v18 + 40));
        *(_QWORD *)(v18 + 40) = v54;
        MiSetPfnBlink(v57, 0LL, 0);
        v54 = (_QWORD *)v56;
      }
      while ( v56 );
      v49 = a7;
    }
    if ( !v46 )
    {
LABEL_78:
      v61 = (__int64)CurrentThread;
      goto LABEL_79;
    }
  }
  v58 = a8;
  v59 = v98;
  *(_DWORD *)(v18 + 92) = ((__int64)v86 - v18 - 136) >> 3;
  *(_QWORD *)(v18 + 96) = v47;
  Mdls = MiPfAllocateMdls(v18, v49, v59, v58);
  v61 = (__int64)CurrentThread;
  v74 = Mdls;
  if ( *(_QWORD *)(v18 + 120) == v18 + 120 )
    goto LABEL_79;
  *a9 = v18;
  v18 = 0LL;
  result = 0LL;
  v74 = 0;
LABEL_69:
  if ( P )
  {
    if ( P[1] )
      MiNotifyPageHeat(P);
    MiUnlockDynamicMemoryShared((__int64)MiSystemPartition, v61);
    ExFreePoolWithTag(P, 0);
    result = v74;
  }
  if ( v18 )
  {
LABEL_80:
    MiReleaseReadListResources(v18);
    ExFreePoolWithTag((PVOID)v18, 0);
    return v74;
  }
  return result;
}
