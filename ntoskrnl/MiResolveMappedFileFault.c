/*
 * XREFs of MiResolveMappedFileFault @ 0x14028A780
 * Callers:
 *     MiResolveProtoPteFault @ 0x140270A50 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1402A2C24 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140224C00 (MiGetAvailablePagesBelowPriority.c)
 *     MiLocateAddress @ 0x140228680 (MiLocateAddress.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402861D0 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x140287B5C (MiFreeInPageSupportBlock.c)
 *     MiUseSlabAllocator @ 0x140289310 (MiUseSlabAllocator.c)
 *     MiAllocateInPageSupport @ 0x14028A6A0 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14028AE90 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x14028B040 (MiInitializePageColorBase.c)
 *     MiPickClusterForMappedFileFault @ 0x14028B0C0 (MiPickClusterForMappedFileFault.c)
 *     MiBuildMdlForMappedFileFault @ 0x14028B490 (MiBuildMdlForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14028BD60 (MiFinishMdlForMappedFileFault.c)
 *     MiSetInPagePrefetchPriority @ 0x1402CCC8C (MiSetInPagePrefetchPriority.c)
 *     MiGetSharedProtos @ 0x1402CCDF8 (MiGetSharedProtos.c)
 *     KeInvalidAccessAllowed @ 0x1402DA5E0 (KeInvalidAccessAllowed.c)
 *     MiReturnFaultCharges @ 0x1402F4480 (MiReturnFaultCharges.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x140322D40 (MiSanitizePfnProtection.c)
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiCopyDataPageToImagePage @ 0x140334490 (MiCopyDataPageToImagePage.c)
 *     MiGetSessionIdForVa @ 0x140343520 (MiGetSessionIdForVa.c)
 *     MiComputeFaultCluster @ 0x140363DD0 (MiComputeFaultCluster.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x140639EB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, unsigned __int64 *a2, ...)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rcx
  bool v12; // zf
  __int64 SharedProtos; // r9
  __int64 v14; // r8
  unsigned int v15; // edi
  int v16; // r12d
  _BYTE *v17; // rax
  PSLIST_ENTRY v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // r13
  _QWORD *v22; // rsi
  signed __int32 v23; // ecx
  unsigned int v24; // edi
  __int64 SlabPage; // rax
  int v26; // edx
  __int64 v27; // rdi
  unsigned __int64 *v28; // rsi
  int v29; // r12d
  int v30; // r9d
  int v31; // ecx
  __int64 v32; // rbx
  unsigned int v33; // r15d
  __int64 v34; // rsi
  _QWORD *v35; // r13
  unsigned int v36; // eax
  __int64 v37; // rbx
  __int64 **v39; // r14
  __int64 **v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r14
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  __int64 **v45; // r14
  unsigned __int64 v46; // rax
  unsigned int v47; // edi
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned int SessionIdForVa; // eax
  __int64 v52; // rdx
  char v53; // al
  __int64 v54; // rax
  __int64 **Address; // rax
  __int64 v56; // rdx
  struct _LIST_ENTRY *v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // r12
  int v61; // eax
  unsigned int v62; // esi
  __int64 v63; // rcx
  unsigned int v64; // eax
  ULONG_PTR BugCheckParameter3; // [rsp+20h] [rbp-E0h]
  unsigned int BugCheckParameter3a; // [rsp+20h] [rbp-E0h]
  __int64 v67; // [rsp+28h] [rbp-D8h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  unsigned int v69; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v70; // [rsp+54h] [rbp-ACh]
  unsigned int v71; // [rsp+58h] [rbp-A8h]
  _BYTE *v72; // [rsp+60h] [rbp-A0h]
  int v73; // [rsp+68h] [rbp-98h]
  _QWORD *v74; // [rsp+70h] [rbp-90h]
  unsigned __int64 v75; // [rsp+78h] [rbp-88h]
  unsigned int v76; // [rsp+80h] [rbp-80h] BYREF
  __int64 **v77; // [rsp+88h] [rbp-78h] BYREF
  __int64 v78; // [rsp+90h] [rbp-70h]
  int v79[2]; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int64 v81; // [rsp+A8h] [rbp-58h]
  __int64 v82; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v86; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v87[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v90; // [rsp+150h] [rbp+50h] BYREF
  va_list va; // [rsp+150h] [rbp+50h]
  PSLIST_ENTRY *v92; // [rsp+158h] [rbp+58h]
  va_list va1; // [rsp+160h] [rbp+60h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v90 = va_arg(va1, _QWORD);
  v92 = va_arg(va1, PSLIST_ENTRY *);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *a2;
  v86 = 0LL;
  v85 = 0LL;
  v5 = (unsigned __int64)a2;
  v69 = 0;
  v76 = 0;
  v75 = *(_QWORD *)a1;
  v82 = *(_QWORD *)(a1 + 56);
  v87[0] = 0LL;
  *(_QWORD *)v79 = v2;
  v73 = MiPteInShadowRange(a2);
  if ( v73
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v49 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
      v50 = v3 | 0x20;
      if ( (v49 & 0x20) == 0 )
        v50 = v3;
      v3 = v50;
      if ( (v49 & 0x42) != 0 )
        v3 = v50 | 0x42;
    }
  }
  v72 = 0LL;
  v70 = 2;
  v81 = 0LL;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    MiUnlockProtoPoolPage(v90, 0x11u);
    return 3221225633LL;
  }
  v6 = v2 & 1;
  v7 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    switch ( *(_BYTE *)v7 )
    {
      case 5:
        if ( (*(_DWORD *)(v7 + 56) & 4) != 0 )
        {
          MiUnlockProtoPoolPage(v90, 0x11u);
          return 3221225495LL;
        }
        v72 = 0LL;
        break;
      case 1:
        v12 = (*(_DWORD *)(v7 + 80) & 0x100) == 0;
        v72 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v12 )
        {
          MiUnlockProtoPoolPage(v90, 0x11u);
          return 0LL;
        }
        v81 = *(_QWORD *)(v7 + 96);
        v70 = 0;
        break;
      case 2:
        v72 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        break;
    }
  }
  v83 = v3 & 0x400;
  if ( (v3 & 0x400) != 0 )
  {
    v8 = v3;
    if ( qword_140C657C0 && (v3 & 0x10) == 0 )
      v8 = v3 & ~qword_140C657C0;
    v78 = 0LL;
  }
  else if ( qword_140C657C0 )
  {
    if ( (v3 & 0x10) != 0 )
      v46 = v3;
    else
      v46 = v3 & ~qword_140C657C0;
    v78 = 48 * ((v46 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = *(_QWORD *)(v78 + 16);
    if ( (v8 & 0x10) == 0 )
      v8 &= ~qword_140C657C0;
  }
  else
  {
    v78 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v8 = *(_QWORD *)(v78 + 16);
  }
  v9 = v8 >> 16;
  v10 = *(_QWORD *)v9;
  v11 = *(unsigned int *)(*(_QWORD *)v9 + 56LL);
  if ( (v11 & 0x10) != 0 )
  {
    MiUnlockProtoPoolPage(v90, 0x11u);
    return 3221225478LL;
  }
  v12 = (*(_BYTE *)(v9 + 34) & 2) == 0;
  SharedProtos = 0LL;
  v14 = *(_QWORD *)(v9 + 8);
  v80 = v14;
  v71 = -1;
  v84 = 0LL;
  if ( !v12 && (v11 & 0x8000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v11, v75, v14, 0LL);
    v52 = SessionIdForVa;
    v71 = SessionIdForVa;
    if ( v75 >= 0xFFFF800000000000uLL )
    {
      if ( v6 )
      {
        if ( *(_BYTE *)v7 == 1 || *(_BYTE *)v7 == 3 || *(_BYTE *)v7 == 6 )
        {
LABEL_108:
          v54 = *(_QWORD *)(a1 + 16);
          if ( (v54 & 1) == 0 || *(_BYTE *)(v54 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_111;
        }
      }
      else
      {
        v53 = KeInvalidAccessAllowed(*(_QWORD *)v79, 0LL);
        v52 = v71;
        if ( v53 )
          goto LABEL_108;
      }
    }
    SharedProtos = MiGetSharedProtos(v10, v52, v9);
    v84 = SharedProtos;
    v14 = *(_QWORD *)(SharedProtos + 72);
    v80 = v14;
  }
  if ( v5 >= v14 - 8LL * (*(_DWORD *)(v9 + 52) & 0x3FFFFFFF) + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44) )
  {
LABEL_111:
    MiUnlockProtoPoolPage(v90, 0x11u);
    return 3221225477LL;
  }
  v15 = 0;
  v16 = 0;
  v74 = *(_QWORD **)(qword_140C67048 + 8LL * (*(_WORD *)(v10 + 60) & 0x3FF));
  if ( (*(_BYTE *)(v10 + 62) & 0xC) != 4 || (!SharedProtos ? (v16 = 2, v69 = 1) : (v16 = 1), v70 = 0, v16 != 2) )
  {
    v77 = 0LL;
    v69 = 0;
    v15 = MiComputeFaultNode(a1, v10, &v77, SharedProtos);
    if ( v16 == 1 )
    {
      v69 = 1;
    }
    else
    {
      v17 = v72;
      if ( v72 )
      {
        v45 = v77;
        if ( !v77 )
        {
          MiLockVadTree(1LL);
          Address = MiLocateAddress(v75);
          LOBYTE(v56) = 17;
          v77 = Address;
          v45 = Address;
          MiUnlockVadTree(1LL, v56);
          v17 = v72;
        }
        v69 = MiComputeFaultCluster(v74, v17, v45, 0LL);
      }
      else if ( (v3 & 0x400) != 0 && (*(_BYTE *)(v10 + 56) & 0x20) == 0 && (*(_BYTE *)(v82 + 184) & 7) == 0 )
      {
        v39 = v77;
        if ( !v77 )
        {
          MiLockVadTree(1LL);
          v40 = MiLocateAddress(v75);
          LOBYTE(v41) = 17;
          v77 = v40;
          v39 = v40;
          MiUnlockVadTree(1LL, v41);
        }
        v42 = (__int64)v39[15];
        if ( v42 >= 0 )
        {
          v43 = v42 & 0xFFF;
          if ( v43 >= 0x11 && (v75 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v42 >> 12) - 1 + v43) << 12 )
          {
            v44 = v5 + 8;
            if ( (((_DWORD)v5 + 8) & 0xFFF) != 0
              && v44 < -8LL * (*(_DWORD *)(v9 + 52) & 0x3FFFFFFF)
                     + v80
                     + 8 * (unsigned __int64)*(unsigned int *)(v9 + 44)
              && MI_READ_PTE_LOCK_FREE(v44) == v3 )
            {
              v69 = (v42 & 0xFFF) - 1;
            }
          }
        }
      }
    }
  }
  v18 = MiAllocateInPageSupport(v5, v70, &v69, (__int64 *)va, v81);
  if ( v18 )
  {
    v19 = *(_QWORD *)v5;
    if ( v73
      && (MiFlags & 0x600000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v19 & 1) != 0
      && ((v19 & 0x20) == 0 || (v19 & 0x42) == 0) )
    {
      v57 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v57 )
      {
        v58 = *((_QWORD *)&v57->Flink + ((v5 >> 3) & 0x1FF));
        v59 = v19 | 0x20;
        if ( (v58 & 0x20) == 0 )
          v59 = *(_QWORD *)v5;
        v19 = v59;
        if ( (v58 & 0x42) != 0 )
          v19 = v59 | 0x42;
      }
    }
    if ( v19 != v3 || !v83 && ((*(_BYTE *)(v78 + 34) & 0x20) == 0 || (*(_DWORD *)(*(_QWORD *)v78 + 160LL) & 0x20) != 0) )
    {
      v47 = -1073740748;
      MiUnlockProtoPoolPage(v90, 0x11u);
      MiFreeInPageSupportBlock(v18);
      goto LABEL_77;
    }
    if ( v16 == 2 )
    {
      v60 = v90;
      goto LABEL_139;
    }
    if ( v72 && *v72 == 1 )
      MiSetInPagePrefetchPriority(v72, v18);
    v73 = MiSanitizePfnProtection(0LL, (*(unsigned __int16 *)(v9 + 32) >> 1) & 0x1F, (v3 >> 5) & 0x1F);
    MiInitializePageColorBase(v82, v15, v87);
    v21 = -1LL;
    if ( v16 == 1 )
      goto LABEL_27;
    if ( (*(_BYTE *)(v10 + 62) & 0xC) != 0
      || (*(_DWORD *)(v10 + 56) & 0x40020) != 32
      || (v3 & 0x400) == 0
      || dword_140C692D8 )
    {
      goto LABEL_37;
    }
    if ( v20 )
    {
      v22 = v74;
      if ( *(_BYTE *)v20 == 1 && !MiGetAvailablePagesBelowPriority(v74, ((*(_DWORD *)(v20 + 80) >> 3) & 7u) + 1) )
        goto LABEL_37;
    }
    else
    {
LABEL_27:
      v22 = v74;
    }
    if ( MiObtainFaultCharges(v22, 1LL, 1LL) )
    {
      v23 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&v87[0], 1u);
      v24 = HIDWORD(v87[0]) | v23 & DWORD2(v87[0]);
      if ( v83 && (unsigned int)MiUseSlabAllocator((__int64)v22, (__int64 *)v9, v3, &v76) && v76 <= 3 )
        SlabPage = MiGetSlabPage((__int64)v22, v76, v24, 0LL, 0LL);
      else
        SlabPage = MiGetPage((__int64)v22, v24, 0);
      v21 = SlabPage;
      if ( SlabPage != -1 )
      {
        if ( v16 != 1 )
        {
          v27 = v90;
          v28 = a2;
          v29 = v79[0];
          v68 = v90;
          BugCheckParameter3 = *(_QWORD *)v79;
          v18[14].Next = (_SLIST_ENTRY *)v75;
          if ( (unsigned int)MiCopyDataPageToImagePage(
                               (_DWORD)v18,
                               v26,
                               v9,
                               (_DWORD)a2,
                               BugCheckParameter3,
                               SlabPage,
                               v68) )
          {
LABEL_42:
            *v92 = v18;
            return 3221435187LL;
          }
          goto LABEL_38;
        }
        v60 = v90;
        v5 = (unsigned __int64)a2;
        v61 = MiCopyFileOnlyGlobalSubsectionPage((int)v18, v9, (int)a2, v79[0], SlabPage, v90, v84);
        v62 = v61;
        if ( v61 >= 0 )
          goto LABEL_42;
        if ( v61 == -1073741739 )
        {
          v62 = 0;
LABEL_134:
          MiUnlockProtoPoolPage(v60, 0x11u);
          MiFreeInPageSupportBlock(v18);
          return v62;
        }
        if ( v61 != -1073740748 )
        {
          if ( v61 == -1073532109 )
          {
            v62 = -1073741802;
            *(_DWORD *)(a1 + 80) |= 0x80u;
          }
          goto LABEL_134;
        }
LABEL_139:
        MiUnlockProtoPoolPage(v60, 0x11u);
        v64 = (__int64)v18[12].Next & 0xFFFBFFFF;
        *((_DWORD *)&v18[19].Next + 2) = 0;
        v18[13].Next = (_SLIST_ENTRY *)v9;
        LODWORD(v18[12].Next) = v64 | 1;
        *((_DWORD *)&v18[11].Next + 2) = 0;
        *((_QWORD *)&v18[10].Next + 1) = v3;
        *((_QWORD *)&v18[14].Next + 1) = v5;
        v18[10].Next = 0LL;
        v18[16].Next = 0LL;
        LODWORD(v18[5].Next) = 0;
        goto LABEL_42;
      }
      MiReturnFaultCharges(v22, 1LL, 1LL);
    }
    if ( v16 == 1 )
    {
      v63 = v90;
      goto LABEL_137;
    }
LABEL_37:
    v27 = v90;
    v28 = a2;
    v29 = v79[0];
LABEL_38:
    v30 = v80;
    v31 = (int)v74;
    *((_DWORD *)&v18[11].Next + 2) = v69;
    *((_QWORD *)&v18[10].Next + 1) = v3;
    v32 = (__int64)v72;
    v18[13].Next = (_SLIST_ENTRY *)v9;
    v33 = v71;
    BugCheckParameter3a = v71;
    v18[10].Next = (_SLIST_ENTRY *)v27;
    *((_QWORD *)&v18[14].Next + 1) = v28;
    v34 = MiPickClusterForMappedFileFault(
            v31,
            (_DWORD)v18,
            v32,
            v30,
            BugCheckParameter3a,
            v21,
            (__int64)&v86,
            (__int64)&v85);
    v67 = v21;
    v35 = v74;
    v36 = MiBuildMdlForMappedFileFault((_DWORD)v18, v86, v85, (_DWORD)v74, v34, v67, v73, v32, a1, (__int64)v87);
    v37 = v36;
    if ( v36 != v34 )
      MiReturnFaultCharges(v35, v34 - v36, 1LL);
    if ( v37 )
    {
      MiFinishMdlForMappedFileFault((_DWORD)v18, v29, v37, v78, v33);
      goto LABEL_42;
    }
    v63 = v27;
LABEL_137:
    MiUnlockProtoPoolPage(v63, 0x11u);
    MiFreeInPageSupportBlock(v18);
    return 3221225495LL;
  }
  v47 = -1073741670;
LABEL_77:
  if ( v72 )
    v72[1] = (v47 == -1073741670) + 1;
  return v47;
}
