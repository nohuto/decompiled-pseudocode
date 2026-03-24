/*
 * XREFs of MiActOnPte @ 0x14023BF60
 * Callers:
 *     MiWalkVaRange @ 0x14023BA60 (MiWalkVaRange.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x14023BA1C (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MI_IS_RESET_PTE @ 0x14023D690 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     MiLocateCloneAddress @ 0x14023E878 (MiLocateCloneAddress.c)
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiGetVaAge @ 0x140289770 (MiGetVaAge.c)
 *     MiWriteValidPteNewProtection @ 0x140290080 (MiWriteValidPteNewProtection.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MiSetVaAgeList @ 0x1402ADD40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCheckUserVirtualAddress @ 0x1402AF090 (MiCheckUserVirtualAddress.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiRotatedToFrameBuffer @ 0x140307C88 (MiRotatedToFrameBuffer.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiUpdateWsleAge @ 0x140317BA8 (MiUpdateWsleAge.c)
 *     MI_CLEAR_RESET_PTE @ 0x14031B060 (MI_CLEAR_RESET_PTE.c)
 *     MiUpdatePageTableUseCount @ 0x140328C24 (MiUpdatePageTableUseCount.c)
 *     MiLockLeafPage @ 0x140332CE0 (MiLockLeafPage.c)
 *     MiUpdatePfnPriority @ 0x140339DB4 (MiUpdatePfnPriority.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MiDemoteCombinedPte @ 0x14036ABB0 (MiDemoteCombinedPte.c)
 *     MiDiscardTransitionPteEx @ 0x140388794 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        _QWORD *a4,
        int a5,
        unsigned int a6,
        __int64 *a7,
        __int64 *a8)
{
  unsigned int v8; // r12d
  _QWORD *v9; // r14
  ULONG_PTR v10; // r15
  _KPROCESS *Process; // r13
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  ULONG_PTR v20; // rsi
  bool v21; // zf
  unsigned __int64 v22; // rax
  unsigned __int8 updated; // al
  unsigned __int64 *v25; // r12
  __int64 v26; // r8
  char v27; // cl
  char v28; // dl
  __int64 v29; // rax
  __int64 v30; // r8
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // r9
  char v40; // al
  char v41; // al
  int v42; // eax
  ULONG_PTR v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r8
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned __int64 v54; // rdx
  char v55; // al
  __int64 v56; // rax
  __int64 v57; // r8
  unsigned __int64 v58; // rbx
  unsigned __int64 v59; // rdi
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rdx
  int v66; // esi
  char v67; // di
  unsigned __int64 v68; // rbx
  unsigned __int64 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // rdx
  __int64 v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v91; // [rsp+20h] [rbp-58h] BYREF
  __int64 v92; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v93; // [rsp+30h] [rbp-48h]
  unsigned __int64 *v94; // [rsp+38h] [rbp-40h]
  int v97; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v97 = 0;
  v9 = a4;
  v10 = a3;
  *a8 = 0LL;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v94 = &Process[1].ActiveProcessorsPadding[6];
  v12 = a4;
  if ( !a4 )
    v12 = (_QWORD *)a3;
  v93 = v12;
  while ( 1 )
  {
    while ( 1 )
    {
      v13 = MI_READ_PTE_LOCK_FREE(v12);
      v92 = v13;
      v14 = v13;
      if ( (v13 & 1) == 0 )
        break;
      if ( !v9 )
      {
        v22 = MI_READ_PTE_LOCK_FREE(&v92);
        if ( ((*(_QWORD *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
          return 3221226548LL;
        v15 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) != 0 || *(__int64 *)(v15 + 8) <= 0 )
        {
          if ( MiLocateCloneAddress(Process, *(_QWORD *)(v15 + 8) | 0x8000000000000000uLL) )
            return 3221226548LL;
        }
        else
        {
          if ( a5 == 1 )
            return 3221226548LL;
          if ( !a5 )
            return 274LL;
        }
        v91 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v91);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v10) )
          goto LABEL_30;
        LOBYTE(v16) = v92;
LABEL_33:
        if ( a5 == 2 )
        {
          LOBYTE(v8) = v9 == 0LL;
          updated = MiUpdatePfnPriority(v15, a6, v8, v17);
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v25 = v94;
          if ( updated != 0xFF && !v9 )
            MiUpdateWsleAge(v94, v10, updated);
          if ( (*(_QWORD *)(v15 + 40) & 0x1000000000LL) == 0 )
          {
            v26 = *(_QWORD *)(v15 + 8);
            if ( v26 > 0 && !v9 )
              MiDemoteCombinedPte(v25, v10, v26 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v27 = *(_BYTE *)(v15 + 34);
        if ( (v27 & 8) != 0 )
        {
LABEL_30:
          _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        v28 = v27 & 0x10;
        if ( a5 == 1 )
        {
          if ( v28 || !v9 && (v16 & 0x42) != 0 )
            v8 = -1073740748;
          if ( !v28 && (*(_DWORD *)(v15 + 16) & 4) == 0 )
            *(_BYTE *)(v15 + 34) = v27 | 0x10;
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v15 + 16)) )
          {
            MI_CLEAR_RESET_PTE(v15 + 16);
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return 3221226548LL;
          }
        }
        if ( v28 )
          *(_BYTE *)(v15 + 34) = v27 & 0xEF;
        v29 = MiCapturePageFileInfoInline(v15 + 16, 1LL, 1LL);
        *a8 = v29;
        if ( v29 )
          *a7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL));
        v31 = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 1LL, v30) & 0xFFFFFFFFFFFFFFFDuLL;
        if ( (unsigned int)MiPteInShadowRange(v15 + 16, v32) )
        {
          if ( (unsigned int)MiPteHasShadow(v34, v33, v35, v36) )
          {
            if ( !HIBYTE(word_140C4E008) && (v31 & 1) != 0 )
              v31 |= 0x8000000000000000uLL;
            *(_QWORD *)(v15 + 16) = v31;
            MiWritePteShadow(v15 + 16, v31);
            goto LABEL_67;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (v31 & 1) != 0 )
          {
            v31 |= 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)(v15 + 16) = v31;
LABEL_67:
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v9 || (v92 & 0x42) == 0 )
          return 0LL;
        MiWriteValidPteNewProtection(v10, v92 & 0xFFFFFFFFFFFFFF9DuLL);
        v37 = (__int64)(v10 << 25) >> 16;
        if ( (unsigned __int8)MiGetVaAge(v38, v37) < 7u )
        {
          LOBYTE(v39) = 1;
          MiSetVaAgeList(v94, v37, 1LL, v39, v91);
        }
        return 3221225505LL;
      }
      v15 = MiLockLeafPage(v9, 0LL);
      v12 = v93;
      if ( v15 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(v9);
        v92 = v16;
        if ( (v16 & 1) != 0 )
          goto LABEL_33;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v12 = v93;
      }
    }
    if ( (v13 & 0x400) != 0 )
      return 0LL;
    if ( (v13 & 0x800) == 0 )
      break;
    if ( v9 )
      v18 = MiLockLeafPage(v9, 0LL);
    else
      v18 = MiLockTransitionLeafPage(v10);
    v20 = v18;
    v21 = v18 == 0;
    v12 = v93;
    if ( !v21 )
    {
      if ( !v9 || (v92 = MI_READ_PTE_LOCK_FREE(v9), (v92 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v20, a6, 1LL, v19);
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 0LL;
        }
        v40 = *(_BYTE *)(v20 + 34);
        if ( (v40 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v40 & 0x28) == 0 )
            {
              v45 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 1LL);
              *a8 = v45;
              if ( v45 )
                *a7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
              v47 = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 1LL, v46) & 0xFFFFFFFFFFFFFFFDuLL;
              v92 = v47;
              v48 = v47;
              if ( (unsigned int)MiPteInShadowRange(v20 + 16, v49) )
              {
                if ( (unsigned int)MiPteHasShadow(v51, v50, v52, v53) )
                {
                  v54 = v47;
                  if ( !HIBYTE(word_140C4E008) && (v47 & 1) != 0 )
                    v54 = v47 | 0x8000000000000000uLL;
                  *(_QWORD *)(v20 + 16) = v54;
                  MiWritePteShadow(v20 + 16, v54);
                  goto LABEL_124;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                {
                  *(_QWORD *)(v20 + 16) = v47;
                  goto LABEL_124;
                }
                if ( (v47 & 1) != 0 )
                  v48 = v47 | 0x8000000000000000uLL;
              }
              *(_QWORD *)(v20 + 16) = v48;
            }
LABEL_124:
            _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            return v8;
          }
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v20 + 16)) )
            MI_CLEAR_RESET_PTE(v20 + 16);
          else
            v8 = -1073740748;
          if ( (*(_DWORD *)(v20 + 16) & 4) != 0 )
            goto LABEL_124;
          v41 = *(_BYTE *)(v20 + 34) | 0x10;
          *(_BYTE *)(v20 + 34) = v41;
          if ( *(_WORD *)(v20 + 32) )
          {
            *(_BYTE *)(v20 + 34) = v41 & 0xF8 | 3;
            goto LABEL_124;
          }
          v42 = MiUnlinkPageFromList(v20, 0);
          v43 = v20;
          if ( !v42 )
          {
            MiDiscardTransitionPteEx(v20, 0LL);
            v8 = -1073740748;
            goto LABEL_124;
          }
          v44 = 8LL;
LABEL_123:
          MiInsertPageInList(v43, v44);
          goto LABEL_124;
        }
        if ( (v40 & 7) != 3 )
          goto LABEL_124;
        if ( a5 == 1 )
        {
          v8 = -1073740748;
          goto LABEL_124;
        }
        if ( (v40 & 8) != 0 || a5 || (v40 & 0x20) != 0 )
          goto LABEL_124;
        v55 = v40 & 0xEF;
        *(_BYTE *)(v20 + 34) = v55;
        if ( *(_WORD *)(v20 + 32) )
          *(_BYTE *)(v20 + 34) = v55 & 0xF8 | 2;
        else
          MiUnlinkPageFromList(v20, 0);
        v56 = MiCapturePageFileInfoInline(v20 + 16, 1LL, 1LL);
        *a8 = v56;
        if ( v56 )
          *a7 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
        v58 = MiUpdatePageFileHighInPte(*(_QWORD *)(v20 + 16), 1LL, v57) & 0xFFFFFFFFFFFFFFFDuLL;
        v92 = v58;
        v59 = v58;
        if ( (unsigned int)MiPteInShadowRange(v20 + 16, v60) )
        {
          if ( (unsigned int)MiPteHasShadow(v62, v61, v63, v64) )
          {
            v65 = v58;
            if ( !HIBYTE(word_140C4E008) && (v58 & 1) != 0 )
              v65 = v58 | 0x8000000000000000uLL;
            *(_QWORD *)(v20 + 16) = v65;
            MiWritePteShadow(v20 + 16, v65);
            goto LABEL_121;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
          {
            *(_QWORD *)(v20 + 16) = v58;
LABEL_121:
            if ( *(_WORD *)(v20 + 32) )
              goto LABEL_124;
            v44 = 4LL;
            v43 = v20;
            goto LABEL_123;
          }
          if ( (v58 & 1) != 0 )
            v59 = v58 | 0x8000000000000000uLL;
        }
        *(_QWORD *)(v20 + 16) = v59;
        goto LABEL_121;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v12 = v93;
    }
  }
  v66 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( !v13 )
  {
    if ( !v9 && !a5 && !MiCheckUserVirtualAddress((__int64)(v10 << 25) >> 16, &v97) )
    {
      v67 = v97;
      if ( v97 != 24 )
      {
        MiUpdatePageTableUseCount((__int64)(v10 << 25) >> 16, 1LL);
        v68 = (32LL * (v67 & 0x1F)) | MiSwizzleInvalidPte(0x100000000LL) & 0xFFFFFFFFFFFFFC1FuLL;
        v92 = v68;
        v69 = v68;
        if ( !(unsigned int)MiPteInShadowRange(v10, v70) )
        {
LABEL_140:
          *(_QWORD *)v10 = v69;
          return 0LL;
        }
        if ( (unsigned int)MiPteHasShadow(v72, v71, v73, v74) )
        {
          v75 = v68;
          if ( !HIBYTE(word_140C4E008) && (v68 & 1) != 0 )
            v75 = v68 | 0x8000000000000000uLL;
          *(_QWORD *)v10 = v75;
          MiWritePteShadow(v10, v75);
          return 0LL;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          if ( (v68 & 1) != 0 )
            v69 = v68 | 0x8000000000000000uLL;
          goto LABEL_140;
        }
LABEL_166:
        *(_QWORD *)v10 = v68;
        return 0LL;
      }
    }
    return 3221226548LL;
  }
  v76 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
  if ( v9 )
  {
    if ( a2 == 1 )
    {
      v76 = MiSharedVaToPartition(&Process[1].ActiveProcessorsPadding[6], (__int64)(v10 << 25) >> 16, v9);
    }
    else if ( (*(_DWORD *)(a1 + 48) & 0x100000) != 0 || (v77 = *(_QWORD *)(a1 + 72)) == 0 )
    {
      v76 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
    }
    else
    {
      v76 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(*(_QWORD *)v77 + 60LL) & 0x3FF));
    }
  }
  if ( IS_PTE_NOT_DEMAND_ZERO(v14) )
  {
    if ( v66 == 1 )
      return 3221226548LL;
    v84 = MiCapturePageFileInfoInline(&v92, 1LL, 0LL);
    *a8 = v84;
    if ( !v84 )
      return 0LL;
    *a7 = v76;
    if ( !v9 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
      v9 = (_QWORD *)v10;
    }
    v86 = v92;
    if ( (unsigned int)MiPteInShadowRange(v9, v85) )
    {
      if ( (unsigned int)MiPteHasShadow(v88, v87, v89, v90) )
      {
        if ( !HIBYTE(word_140C4E008) && (v86 & 1) != 0 )
          v86 |= 0x8000000000000000uLL;
        *v9 = v86;
        MiWritePteShadow(v9, v86);
        return 0LL;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v86 & 1) != 0 )
      {
        v86 |= 0x8000000000000000uLL;
      }
    }
    *v9 = v86;
    return 0LL;
  }
  if ( v66 == 1 )
  {
    if ( !(unsigned int)MI_IS_RESET_PTE(v14) )
      return 3221226548LL;
    MI_CLEAR_RESET_PTE(&v92);
    v68 = v92;
  }
  else
  {
    if ( (v14 & 2) != 0 )
    {
      MiReleasePageFileSpace(v76, v14, 1LL);
      v14 &= ~2uLL;
    }
    v68 = MiUpdatePageFileHighInPte(v14, 1LL, v78);
    v92 = v68;
  }
  if ( v9 )
    v10 = (ULONG_PTR)v9;
  if ( !(unsigned int)MiPteInShadowRange(v10, v79) )
    goto LABEL_166;
  if ( !(unsigned int)MiPteHasShadow(v81, v80, v82, v83) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v68 & 1) != 0 )
      v68 |= 0x8000000000000000uLL;
    goto LABEL_166;
  }
  if ( !HIBYTE(word_140C4E008) && (v68 & 1) != 0 )
    v68 |= 0x8000000000000000uLL;
  *(_QWORD *)v10 = v68;
  MiWritePteShadow(v10, v68);
  return 0LL;
}
