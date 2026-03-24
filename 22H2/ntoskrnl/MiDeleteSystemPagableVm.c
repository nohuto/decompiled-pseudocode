/*
 * XREFs of MiDeleteSystemPagableVm @ 0x140286100
 * Callers:
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     MiDeleteBootRange @ 0x1403B4B18 (MiDeleteBootRange.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 *     MmReturnChargesToLockPagedPool @ 0x1408C8530 (MmReturnChargesToLockPagedPool.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA420 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F750 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 *     MiDeleteTransitionPte @ 0x1402381A0 (MiDeleteTransitionPte.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiLockLowestValidPageTable @ 0x140285C40 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140288AE0 (MiPageTableLockIsContended.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140289700 (MI_WSLE_LOG_ACCESS.c)
 *     MiWorkingSetIsContended @ 0x14028BE50 (MiWorkingSetIsContended.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x1402B6160 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsleCluster @ 0x1402BB3B0 (MiTerminateWsleCluster.c)
 *     MiFlushTbList @ 0x1402BBBB0 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiUnlockPageTableInternal @ 0x1402DB460 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402E31E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiInitializeTbFlushStamps @ 0x1402E9930 (MiInitializeTbFlushStamps.c)
 *     KeShouldYieldProcessor @ 0x1402F1320 (KeShouldYieldProcessor.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReturnSystemCharges @ 0x140311238 (MiReturnSystemCharges.c)
 *     MiWriteWsle @ 0x14031A590 (MiWriteWsle.c)
 *     EtwTraceKernelEvent @ 0x14035C1F0 (EtwTraceKernelEvent.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x140366814 (MiDecrementCombinedPte.c)
 *     MiImageProtoChargedCommit @ 0x140379D10 (MiImageProtoChargedCommit.c)
 *     MiIsPfnSystemCharged @ 0x14037C3C8 (MiIsPfnSystemCharged.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiDriverPageIsDangling @ 0x140535734 (MiDriverPageIsDangling.c)
 */

__int64 __fastcall MiDeleteSystemPagableVm(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char a5,
        _QWORD *a6)
{
  __int64 v6; // r14
  int v9; // eax
  int v10; // ecx
  unsigned __int64 valid; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // esi
  __int64 v16; // r13
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  unsigned __int64 v21; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 *v28; // rcx
  unsigned __int64 v29; // rdi
  __int64 v30; // rdx
  _KPROCESS *Process; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  char v37; // al
  char v38; // di
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdi
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  ULONG_PTR v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  int IsContended; // eax
  __int64 v63; // rdx
  __int64 v64; // r8
  _DWORD *v65; // r9
  unsigned __int8 v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v69; // [rsp+40h] [rbp-C0h]
  int v70; // [rsp+48h] [rbp-B8h]
  int v71; // [rsp+4Ch] [rbp-B4h]
  BOOL v72; // [rsp+50h] [rbp-B0h]
  int v73; // [rsp+54h] [rbp-ACh]
  __int64 v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+60h] [rbp-A0h] BYREF
  int v76; // [rsp+64h] [rbp-9Ch]
  __int64 v77; // [rsp+68h] [rbp-98h]
  unsigned __int64 v78; // [rsp+70h] [rbp-90h]
  _QWORD v79[3]; // [rsp+78h] [rbp-88h] BYREF
  __int128 v80; // [rsp+90h] [rbp-70h] BYREF
  __int128 v81; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  _QWORD v85[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v86; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v87; // [rsp+E4h] [rbp-1Ch]
  __int16 v88; // [rsp+E6h] [rbp-1Ah]
  __int64 v89; // [rsp+E8h] [rbp-18h]
  __int64 v90; // [rsp+F0h] [rbp-10h]
  __int64 v91; // [rsp+F8h] [rbp-8h]
  __int128 v92; // [rsp+100h] [rbp+0h]
  __int128 v93; // [rsp+110h] [rbp+10h]
  __int128 v94; // [rsp+120h] [rbp+20h]
  __int128 v95; // [rsp+130h] [rbp+30h]
  __int128 v96; // [rsp+140h] [rbp+40h]
  __int128 v97; // [rsp+150h] [rbp+50h]
  __int128 v98; // [rsp+160h] [rbp+60h]
  __int128 v99; // [rsp+170h] [rbp+70h]
  __int128 v100; // [rsp+180h] [rbp+80h]
  __int64 v101; // [rsp+190h] [rbp+90h]
  int v102; // [rsp+210h] [rbp+110h]

  v77 = a1;
  v6 = a1;
  v84 = a2;
  v82 = 0LL;
  v88 = 0;
  v101 = 0LL;
  v72 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v100 = 0LL;
  if ( a2 )
    v72 = (*(_DWORD *)(a2 + 56) & 0x800) != 0;
  v9 = 10;
  v69 = 0LL;
  v10 = 0;
  v76 = a5 & 1;
  valid = 0LL;
  v70 = 0;
  if ( (a5 & 1) == 0 )
    v9 = 14;
  DWORD2(v81) = v9;
  v73 = a5 & 4;
  if ( (a5 & 4) != 0 )
    DWORD2(v81) = v9 | 0x10;
  v12 = *(_BYTE *)(v6 + 184) & 7;
  v13 = 0LL;
  v83 = 0LL;
  v14 = (__int64)(a3 << 25) >> 16;
  v71 = 0;
  if ( (unsigned __int8)(v12 - 3) > 1u )
  {
    if ( (a5 & 2) != 0 )
    {
      if ( dword_140C4E828 )
        v10 = 1;
      v70 = v10;
    }
    v13 = 2LL;
    v71 = 2;
  }
  v15 = a5 & 8;
  v102 = v15;
  v16 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v6 + 174));
  v74 = v16;
  v89 = 20LL;
  v86 = v13;
  v87 = 0;
  v90 = 0LL;
  v91 = 0LL;
  if ( !v15 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    v79[2] = (unsigned int)a4;
    v79[0] = 0LL;
    v79[1] = (__int64)(a3 << 25) >> 16;
    if ( (_BYTE)v12 == 4 )
    {
      v79[0] = 6LL;
    }
    else if ( (_BYTE)v12 == 3 )
    {
      v79[0] = 4LL;
    }
    else
    {
      v79[0] = v79[0] & 0xFFF0000000000007uLL | (16
                                               * (KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] & 0xFFFFFFFFFFFFLL)) | 7;
    }
    v85[1] = 24LL;
    v85[0] = v79;
    EtwTraceKernelEvent((unsigned int)v85, 1, 536870913, 633, 289413890);
  }
  v78 = a3 + 8 * a4;
  v17 = MiLockWorkingSetShared(v6, v14, v12, (_DWORD *)v13);
  v67 = v17;
  while ( a3 < v78 )
  {
    if ( valid )
    {
      if ( (a3 & 0xFFF) != 0 )
        goto LABEL_27;
      MiFlushTbList(&v86);
      a6[1] += MiTerminateWsleCluster(&v80);
      MiUnlockPageTableInternal(v6, valid);
    }
    valid = MiLockLowestValidPageTable(v6, a3, &v82);
    v69 = valid;
    if ( valid != ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v6, valid);
      valid = 0LL;
      v69 = 0LL;
      a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      continue;
    }
LABEL_27:
    v18 = MI_READ_PTE_LOCK_FREE(a3);
    v68 = v18;
    v20 = v18;
    if ( !v18 )
      goto LABEL_133;
    if ( (v18 & 1) != 0 )
    {
      v21 = (__int64)((a3 << 25) - v83) >> 16;
      v23 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v68) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      v24 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v23 + 40) >> 39) & 0x3FFLL));
      if ( v102 )
      {
        if ( (unsigned int)MiIsPfnSystemCharged(v23) )
        {
          v75 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v75, v25, v26, v27);
            while ( *(__int64 *)(v23 + 24) < 0 );
          }
          *(_BYTE *)(v23 + 35) &= ~0x20u;
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v16 = v74;
          if ( v24 == v74 )
            ++a6[1];
          goto LABEL_132;
        }
LABEL_131:
        v16 = v74;
LABEL_132:
        v15 = v102;
        goto LABEL_133;
      }
      v28 = (unsigned __int64 *)(((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = *v28;
      if ( (unsigned int)MiPteInShadowRange(v28, v22)
        && (unsigned int)MiPteHasShadow(Process, v30, v32, v33)
        && (v29 & 1) != 0
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        Flink = Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v35 = v29 | 0x20;
          v36 = *((_QWORD *)&Flink->Flink + ((((v21 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
          Process = (_KPROCESS *)(unsigned __int8)v36;
          LOBYTE(Process) = v36 & 0x20;
          if ( (v36 & 0x20) == 0 )
            v35 = v29;
          v29 = v35;
          if ( (v36 & 0x42) != 0 )
            v29 = v35 | 0x42;
        }
        LOWORD(v20) = v68;
      }
      v37 = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
      v38 = v37 & 0xF;
      if ( (v37 & 0xF) == 9 )
      {
        MiWriteWsle(Process, v21, v37 & 0xF0 | 0xAu);
        v6 = v77;
        MiDeleteValidSystemPage(v77, a3, v73 | 0x10u, a6);
        if ( v76 )
          goto LABEL_63;
        v68 = 0LL;
        MiInitializeTbFlushStamps(&v68);
        v39 = v68;
        if ( (unsigned int)MiPteInShadowRange(a3, v40) )
        {
          if ( (unsigned int)MiPteHasShadow(v42, v41, v43, v44) )
          {
            if ( !HIBYTE(word_140C4E008) && (v39 & 1) != 0 )
              v39 |= 0x8000000000000000uLL;
            *(_QWORD *)a3 = v39;
            MiWritePteShadow(a3, v39);
LABEL_59:
            v45 = v68;
            if ( qword_140C4DF40 && (v68 & 0x10) == 0 )
              v45 = v68 & ~qword_140C4DF40;
            if ( (v45 & 0xFFFFFFFF00000000uLL) == 0 )
LABEL_63:
              MiInsertTbFlushEntry(&v86, v21, 1LL, 0LL);
LABEL_77:
            ++*a6;
            v16 = v74;
            if ( v71 == 2 )
              MiReturnSystemCharges(v74, 1LL, 1LL);
            goto LABEL_132;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v39 & 1) != 0 )
          {
            v39 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v39;
        goto LABEL_59;
      }
      v6 = v77;
      if ( v70 )
        MI_WSLE_LOG_ACCESS(v77, a3);
      if ( !(unsigned int)MiAppendWsleCluster(&v80, v6, a3) )
      {
        a6[1] += MiTerminateWsleCluster(&v80);
        MiAppendWsleCluster(&v80, v6, a3);
      }
      if ( !(unsigned int)MI_PFN_IS_PROTO(v23) )
        goto LABEL_75;
      v46 = *(_QWORD *)(v23 + 16);
      if ( (v46 & 0x400) == 0 || (v20 & 0x200) != 0 )
        goto LABEL_75;
      if ( qword_140C4DF40 && (v46 & 0x10) == 0 )
        v46 &= ~qword_140C4DF40;
      if ( (*(_DWORD *)(*(_QWORD *)(v46 >> 16) + 56LL) & 0x820) == 0x820 )
LABEL_75:
        ++a6[3];
      if ( v38 != 8 )
        goto LABEL_131;
      goto LABEL_77;
    }
    if ( (v18 & 0x400) == 0 )
    {
      if ( (v18 & 0x800) != 0 )
      {
        v53 = MiLockTransitionLeafPage(a3);
        if ( !v53 )
          goto LABEL_140;
        if ( v15 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v53) )
          {
            *(_BYTE *)(v55 + 35) &= ~0x20u;
            ++a6[1];
          }
          _InterlockedAnd64((volatile signed __int64 *)(v55 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( v73 && (unsigned int)MiIsPfnSystemCharged(v53) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v53 + 35) &= ~0x20u;
          }
          LOBYTE(v54) = 17;
          if ( (unsigned int)MiDeleteTransitionPte(a3, v53, v54, 1) == 3 )
            ++a6[1];
          ++a6[3];
        }
        goto LABEL_133;
      }
      if ( !v15 && (v18 & 0x3E0) != 0 )
      {
        MiReleasePageFileSpace(v16, v18, 1LL);
        v56 = ZeroPte;
        if ( (unsigned int)MiPteInShadowRange(a3, v57) )
        {
          if ( (unsigned int)MiPteHasShadow(v59, v58, v60, v61) )
          {
            if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
              v56 = ZeroPte | 0x8000000000000000uLL;
            *(_QWORD *)a3 = v56;
            MiWritePteShadow(a3, v56);
            ++a6[3];
            goto LABEL_133;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v56 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)a3 = v56;
        ++a6[3];
      }
      goto LABEL_133;
    }
    if ( v15 )
      goto LABEL_133;
    if ( (v18 & 2) == 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v18) )
      {
        ++a6[3];
        if ( qword_140C4DF40 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DF40;
        }
        v47 = **(_QWORD **)((((v20 >> 16) - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
        if ( (unsigned int)MiDecrementCombinedPte(v6, v20 >> 16) == 3 && v47 == v16 )
          ++a6[1];
        goto LABEL_97;
      }
      if ( !v72 )
      {
        if ( qword_140C4DF40 )
        {
          if ( (v20 & 0x10) != 0 )
            v20 &= ~0x10uLL;
          else
            v20 &= ~qword_140C4DF40;
        }
        if ( !(unsigned int)MiImageProtoChargedCommit(v84, v20 >> 16) )
          goto LABEL_97;
      }
    }
    ++a6[3];
LABEL_97:
    v48 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(a3, v19) )
    {
      if ( (unsigned int)MiPteHasShadow(v50, v49, v51, v52) )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v48 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)a3 = v48;
        MiWritePteShadow(a3, v48);
        goto LABEL_133;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v48 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)a3 = v48;
LABEL_133:
    a3 += 8LL;
    if ( a3 == v78 || (a3 & 0x78) != 0 )
    {
      valid = v69;
LABEL_140:
      v17 = v67;
      continue;
    }
    IsContended = MiWorkingSetIsContended(v6);
    valid = v69;
    if ( !IsContended && !(unsigned int)MiPageTableLockIsContended(v6) && !KeShouldYieldProcessor() )
      goto LABEL_140;
    MiFlushTbList(&v86);
    a6[1] += MiTerminateWsleCluster(&v80);
    MiUnlockPageTableInternal(v6, valid);
    v17 = v67;
    MiUnlockWorkingSetShared(v6, v67);
    valid = 0LL;
    v69 = 0LL;
    MiLockWorkingSetShared(v6, v63, v64, v65);
  }
  MiFlushTbList(&v86);
  if ( valid )
  {
    a6[1] += MiTerminateWsleCluster(&v80);
    MiUnlockPageTableInternal(v6, valid);
  }
  return MiUnlockWorkingSetShared(v6, v17);
}
