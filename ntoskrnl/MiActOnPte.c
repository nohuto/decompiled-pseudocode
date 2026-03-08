/*
 * XREFs of MiActOnPte @ 0x1402CF06C
 * Callers:
 *     MiWalkVaRange @ 0x1402CECEC (MiWalkVaRange.c)
 * Callees:
 *     MiCheckUserVirtualAddress @ 0x1402258B0 (MiCheckUserVirtualAddress.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiUpdatePfnPriority @ 0x14028D35C (MiUpdatePfnPriority.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiUpdatePageTableUseCount @ 0x14029EC20 (MiUpdatePageTableUseCount.c)
 *     MiLocateCloneAddress @ 0x1402CF530 (MiLocateCloneAddress.c)
 *     MiUpdateWsleAge @ 0x1402CF54C (MiUpdateWsleAge.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CF5DC (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockTransitionLeafPageEx @ 0x1402DD4C8 (MiLockTransitionLeafPageEx.c)
 *     MiCapturePageFileInfoInline @ 0x1402DE2D4 (MiCapturePageFileInfoInline.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     MI_IS_RESET_PTE @ 0x14032F190 (MI_IS_RESET_PTE.c)
 *     MiUpdatePageFileHighInPte @ 0x14032F49C (MiUpdatePageFileHighInPte.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiGetVaAge @ 0x140349610 (MiGetVaAge.c)
 *     MiLockLeafPage @ 0x14034AF20 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiRotatedToFrameBuffer @ 0x140630A34 (MiRotatedToFrameBuffer.c)
 *     MiDiscardTransitionPteEx @ 0x14064E040 (MiDiscardTransitionPteEx.c)
 */

__int64 __fastcall MiActOnPte(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8)
{
  int v8; // r14d
  _QWORD *v9; // r15
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rdi
  _KPROCESS *Process; // r13
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // cl
  char v23; // dl
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r9
  char updated; // al
  __int64 v30; // r8
  __int64 v31; // r14
  __int64 v32; // r8
  __int64 v33; // rax
  char v34; // al
  unsigned __int64 *v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // edi
  int v38; // r15d
  __int64 v39; // r14
  unsigned __int64 v40; // rax
  unsigned __int64 *v41; // rdi
  __int64 v42; // rax
  ULONG_PTR v43; // rcx
  __int64 v44; // rax
  _QWORD *v45; // rsi
  __int64 v46; // rax
  char v47; // al
  char v48; // al
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v54; // [rsp+28h] [rbp-18h] BYREF
  unsigned __int64 *v55; // [rsp+30h] [rbp-10h]
  int v57; // [rsp+98h] [rbp+58h] BYREF

  v8 = 0;
  v57 = 0;
  v9 = a4;
  v10 = a4;
  v11 = a3;
  *a8 = 0LL;
  if ( !a4 )
    v9 = (_QWORD *)a3;
  *a7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v55 = &Process[1].ActiveProcessors.StaticBitmap[26];
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = MI_READ_PTE_LOCK_FREE(v9);
      v54 = v14;
      v16 = v14;
      if ( (v14 & 1) == 0 )
        break;
      v17 = a5;
      if ( !v10 )
      {
        v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v54) >> 12) & 0xFFFFFFFFFFLL;
        if ( v18 > qword_140C65820 || ((*(_QWORD *)(48 * v18 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
          return 3221226548LL;
        v19 = 48 * v18 - 0x220000000000LL;
        v20 = *(_QWORD *)(v19 + 8);
        if ( (*(_QWORD *)(v19 + 40) & 0x10000000000LL) == 0 && v20 >= 0 && v20 )
        {
          if ( v17 == 1 )
            return 3221226548LL;
          if ( !v17 )
            return 274LL;
        }
        else if ( MiLocateCloneAddress(Process, v20 | 0x8000000000000000uLL) )
        {
          return 3221226548LL;
        }
        v53 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v53);
          while ( *(__int64 *)(v19 + 24) < 0 );
        }
        if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x40 && (unsigned int)MiRotatedToFrameBuffer(v11) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          return 3221226548LL;
        }
        LOBYTE(v21) = v54;
LABEL_14:
        if ( v17 == 2 )
        {
          updated = MiUpdatePfnPriority(v19);
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v31 = (__int64)v55;
          if ( updated != -1 && !v10 )
          {
            LOBYTE(v30) = updated;
            MiUpdateWsleAge(v55, v11, v30);
          }
          if ( !_bittest64((const signed __int64 *)(v19 + 40), 0x28u) )
          {
            v32 = *(_QWORD *)(v19 + 8);
            if ( v32 > 0 && !v10 )
              MiDemoteCombinedPte(v31, v11, v32 | 0x8000000000000000uLL);
          }
          return 0LL;
        }
        v22 = *(_BYTE *)(v19 + 34);
        if ( (v22 & 8) != 0 )
        {
          v37 = -1073740748;
          goto LABEL_46;
        }
        v23 = v22 & 0x10;
        if ( v17 != 1 )
        {
          if ( v23 )
            *(_BYTE *)(v19 + 34) = v22 & 0xEF;
          v24 = MiCapturePageFileInfoInline(v19 + 16, 1LL, 1LL);
          *a8 = v24;
          if ( v24 )
            *a7 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
          *(_QWORD *)(v19 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v19 + 16), 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v10 || (v54 & 0x42) == 0 )
            return 0LL;
          MiWriteValidPteNewProtection(v11, v54 & 0xFFFFFFFFFFFFFF9DuLL);
          v25 = (__int64)(v11 << 25) >> 16;
          if ( (unsigned __int8)MiGetVaAge(v26, v25) < 7u )
          {
            LOBYTE(v27) = 1;
            MiSetVaAgeList(v55, v25, 1LL, v27);
          }
          return 3221225505LL;
        }
        v8 = 0;
        if ( !v23 && (v10 || (v21 & 0x42) == 0) || (v8 = -1073740748, !v23) )
        {
          if ( (*(_DWORD *)(v19 + 16) & 4) == 0 )
            *(_BYTE *)(v19 + 34) = v22 | 0x10;
        }
        if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v19 + 16)) )
        {
          v44 = MI_READ_PTE_LOCK_FREE(v19 + 16);
          *(_QWORD *)(v19 + 16) = MiUpdatePageFileHighInPte(v44, 0LL);
          goto LABEL_45;
        }
LABEL_106:
        v8 = -1073740748;
        goto LABEL_45;
      }
      v19 = MiLockLeafPage(v10, 0LL);
      if ( v19 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v10);
        v54 = v21;
        if ( (v21 & 1) != 0 )
          goto LABEL_14;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      v8 = 0;
    }
    if ( (v14 & 0x400) != 0 )
      return 0LL;
    if ( (v14 & 0x800) == 0 )
      break;
    if ( v10 )
      v33 = MiLockLeafPage(v10, 0LL);
    else
      v33 = MiLockTransitionLeafPageEx(v11);
    v19 = v33;
    if ( v33 )
    {
      if ( !v10 || (v54 = MI_READ_PTE_LOCK_FREE(v10), (v54 & 1) == 0) )
      {
        if ( a5 == 2 )
        {
          MiUpdatePfnPriority(v19);
          goto LABEL_45;
        }
        v34 = *(_BYTE *)(v19 + 34);
        if ( (v34 & 7) == 2 )
        {
          if ( a5 != 1 )
          {
            if ( (v34 & 0x28) == 0 )
            {
              v35 = (unsigned __int64 *)(v19 + 16);
              v36 = MiCapturePageFileInfoInline(v19 + 16, 1LL, 1LL);
              *a8 = v36;
              if ( v36 )
                *a7 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
              v54 = MiUpdatePageFileHighInPte(*v35, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
              *v35 = v54;
            }
            goto LABEL_45;
          }
          v45 = (_QWORD *)(v19 + 16);
          if ( (unsigned int)MI_IS_RESET_PTE(*(_QWORD *)(v19 + 16)) )
          {
            v46 = MI_READ_PTE_LOCK_FREE(v19 + 16);
            *v45 = MiUpdatePageFileHighInPte(v46, 0LL);
          }
          else
          {
            v8 = -1073740748;
          }
          if ( (*(_DWORD *)v45 & 4) == 0 )
          {
            v47 = *(_BYTE *)(v19 + 34) | 0x10;
            *(_BYTE *)(v19 + 34) = v47;
            if ( *(_WORD *)(v19 + 32) )
            {
              *(_BYTE *)(v19 + 34) = v47 & 0xF8 | 3;
              goto LABEL_45;
            }
            v48 = MiUnlinkPageFromListEx(v19, 0LL);
            v43 = v19;
            if ( (v48 & 3) != 0 )
            {
              MiDiscardTransitionPteEx(v19, 0LL);
              goto LABEL_106;
            }
LABEL_69:
            MiInsertPageInList(v43);
          }
        }
        else if ( (v34 & 7) == 3 )
        {
          if ( a5 == 1 )
          {
            v8 = -1073740748;
            goto LABEL_45;
          }
          if ( (v34 & 8) != 0 || a5 || (v34 & 0x20) != 0 )
            goto LABEL_45;
          if ( *(_WORD *)(v19 + 32) )
            *(_BYTE *)(v19 + 34) = v34 & 0xF8 | 2;
          else
            MiUnlinkPageFromListEx(v19, 0LL);
          v41 = (unsigned __int64 *)(v19 + 16);
          *(_BYTE *)(v19 + 34) &= ~0x10u;
          v42 = MiCapturePageFileInfoInline(v19 + 16, 1LL, 1LL);
          *a8 = v42;
          if ( v42 )
            *a7 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v19 + 40) >> 43) & 0x3FFLL));
          v54 = MiUpdatePageFileHighInPte(*v41, 1LL) & 0xFFFFFFFFFFFFFFFDuLL;
          *v41 = v54;
          if ( *(_WORD *)(v19 + 32) )
            goto LABEL_45;
          v43 = v19;
          goto LABEL_69;
        }
LABEL_45:
        v37 = v8;
LABEL_46:
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        return v37;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
  }
  v38 = a5;
  if ( a5 == 2 )
    return 0LL;
  if ( v14 )
  {
    v39 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
    if ( v10 )
    {
      if ( a2 )
      {
        v39 = MiSharedVaToPartition(&Process[1].ActiveProcessors.StaticBitmap[26], (__int64)(v11 << 25) >> 16, v10);
      }
      else if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0 || (v50 = *(_QWORD *)(a1 + 72)) == 0 )
      {
        v39 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
      }
      else
      {
        v39 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)v50 + 60LL) & 0x3FF));
      }
    }
    if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v16) )
    {
      if ( v38 != 1 )
      {
        v52 = MiCapturePageFileInfoInline(&v54, 1LL, 0LL);
        *a8 = v52;
        if ( v52 )
        {
          *a7 = v39;
          if ( !v10 )
          {
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13],
              0xFFFFFFFFFFFFFFFFuLL);
            v10 = (_QWORD *)v11;
          }
          *v10 = v54;
        }
        return 0LL;
      }
    }
    else
    {
      if ( v38 != 1 )
      {
        if ( (v16 & 2) != 0 )
        {
          MiReleasePageFileSpace(v39, v16, 1LL);
          v16 &= ~2uLL;
        }
        v40 = MiUpdatePageFileHighInPte(v16, 1LL);
        v54 = v40;
LABEL_55:
        if ( v10 )
          v11 = (unsigned __int64)v10;
LABEL_57:
        *(_QWORD *)v11 = v40;
        return 0LL;
      }
      if ( (unsigned int)MI_IS_RESET_PTE(v16) )
      {
        v51 = MI_READ_PTE_LOCK_FREE(&v54);
        v40 = MiUpdatePageFileHighInPte(v51, 0LL);
        v54 = v40;
        goto LABEL_55;
      }
    }
  }
  else if ( !v10 && !a5 && !MiCheckUserVirtualAddress((__int64)(v11 << 25) >> 16, a1, v15, &v57) && v57 != 24 )
  {
    MiUpdatePageTableUseCount((__int64)(v11 << 25) >> 16, 1u);
    v49 = MiSwizzleInvalidPte(0x100000000LL);
    v40 = (32LL * (v57 & 0x1F)) | v49 & 0xFFFFFFFFFFFFFC1FuLL;
    v54 = v40;
    goto LABEL_57;
  }
  return 3221226548LL;
}
