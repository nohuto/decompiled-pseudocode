/*
 * XREFs of MiOutSwapWorkingSetPte @ 0x1402AD540
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14023D6F0 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     MiLockTransitionLeafPage @ 0x140363DD4 (MiLockTransitionLeafPage.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiOutSwapWorkingSetPte(__int64 a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // r13
  __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  char v7; // di
  ULONG_PTR v8; // r15
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r14
  __int64 v13; // rax
  char v14; // al
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r11
  __int64 v31; // rdx
  _QWORD *v32; // rbx
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // rcx
  unsigned __int64 *v35; // rbx
  __int64 *v36; // r8
  __int64 v37; // rdx
  unsigned __int64 v38; // r8
  struct _LIST_ENTRY *v39; // rax
  __int64 v40; // rax
  char v41; // r8^7
  unsigned __int8 v42; // cl
  char v43; // dl
  unsigned __int8 v44; // dl
  char v45; // cl
  __int64 v46; // r10
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r8
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // r14
  unsigned __int64 v57; // rdx
  __int64 updated; // rax
  bool v59; // zf
  unsigned __int64 v60; // r8
  __int64 *v61; // r9
  __int64 v62; // r12
  __int64 v63; // r10
  __int64 *v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 v67; // [rsp+20h] [rbp-48h]
  __int64 v68; // [rsp+28h] [rbp-40h]
  int v69; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v70; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 168);
  v68 = *(_QWORD *)(v3 + 16);
  if ( a3 )
    return 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v67 = *(_QWORD *)(v3 + 24);
  while ( 1 )
  {
    v12 = MI_READ_PTE_LOCK_FREE(a2);
    v70 = v12;
    if ( (v12 & 1) != 0 )
      break;
    if ( (v12 & 0x400) != 0 )
      goto LABEL_124;
    if ( (v12 & 0x800) == 0 )
    {
      if ( (v12 & 2) == 0 )
        goto LABEL_124;
      v70 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      v16 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
      if ( (unsigned int)MiPteInShadowRange(a2, v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v18, v17, v19, v20) )
        {
          v21 = 1;
          if ( !HIBYTE(word_140C4E008) && (v12 & 1) != 0 )
            v16 = v12 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
          goto LABEL_23;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v12 & 1) != 0 )
        {
          v16 = v12 & 0x7FFFFFFFFFFFFFFDLL | 0x8000000000000000uLL;
        }
      }
      v21 = 0;
LABEL_23:
      *(_QWORD *)a2 = v16;
      v6 = v12;
      if ( v21 )
        MiWritePteShadow(a2, v16);
      goto LABEL_124;
    }
    v13 = MiLockTransitionLeafPage(a2);
    v8 = v13;
    if ( v13 )
    {
      v14 = *(_BYTE *)(v13 + 34);
      v7 = 1;
      if ( (v14 & 0x28) == 0 )
      {
        v15 = *(_QWORD *)(v8 + 16);
        if ( (v15 & 2) != 0 )
        {
          v6 = *(_QWORD *)(v8 + 16);
          if ( *(_WORD *)(v8 + 32) || (v14 & 7) != 3 )
          {
            *(_QWORD *)(v8 + 16) = v15 & 0xFFFFFFFFFFFFFFFDuLL;
          }
          else
          {
            MiUnlinkPageFromList(v8, 0);
            *(_QWORD *)(v8 + 16) &= ~2uLL;
            MiInsertPageInList(v8, 8u);
          }
        }
      }
      goto LABEL_124;
    }
  }
  if ( (unsigned __int64)&v70 >= 0xFFFFF6FB7DBED000uLL
    && (unsigned __int64)&v70 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(&v70, v9, v10, v11)
    && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v23 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v70 >> 3) & 0x1FF));
      v24 = v12 | 0x20;
      if ( (v23 & 0x20) == 0 )
        v24 = v12;
      v12 = v24;
      if ( (v23 & 0x42) != 0 )
        v12 = v24;
    }
  }
  v25 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL);
  if ( ((*(_QWORD *)(v25 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    v8 = v25 - 0x58000000000LL;
    v26 = MI_PFN_IS_PROTO(v25 - 0x58000000000LL);
    v31 = 0xFFFFF68000000000uLL;
    if ( v26 )
    {
      v32 = *(_QWORD **)(v3 + 8);
      if ( !v32 )
        goto LABEL_124;
LABEL_114:
      v60 = v32[2];
      if ( v60 < v32[1] )
      {
        v61 = (__int64 *)(*v32 + 16 * v60);
        v62 = (__int64)(a2 << 25) >> 16;
        if ( !v60 || (v63 = *(v61 - 1), v64 = v61 - 1, v63 + *(v61 - 2) != v62) )
        {
          v32[2] = v60 + 1;
          v64 = v61 + 1;
          *v61 = v62;
          v61[1] = 0LL;
          v63 = 0LL;
        }
        *v64 = v63 + 4096;
        ++v32[3];
        if ( (v7 & 2) != 0 )
          ++*(_QWORD *)(v3 + 136);
        if ( (v7 & 4) != 0 )
        {
          ++*(_QWORD *)(v3 + 120);
        }
        else if ( (v7 & 8) != 0 )
        {
          ++*(_QWORD *)(v3 + 128);
        }
      }
      goto LABEL_124;
    }
    if ( (*(_QWORD *)(v25 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) != a2 )
      goto LABEL_124;
    v7 = 1;
    v69 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v69, v31, v27, v28);
        while ( *(__int64 *)(v25 - 0x57FFFFFFFE8LL) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 - 0x57FFFFFFFE8LL), 0x3FuLL) );
      v29 = 0xFFFFF6FB7DBED7F8uLL;
      v30 = 0xFFFFF6FB7DBED000uLL;
    }
    v33 = 0xFFFFFA8000000022uLL;
    if ( (*(_BYTE *)(v25 - 0x57FFFFFFFDELL) & 8) != 0 )
      goto LABEL_124;
    v34 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
    v35 = (unsigned __int64 *)(v25 - 0x57FFFFFFFF0LL);
    if ( (v34 & 2) != 0 )
    {
      v6 = *(_QWORD *)(v25 - 0x57FFFFFFFF0LL);
      v34 &= ~2uLL;
      *v35 = v34;
    }
    if ( !*(_DWORD *)(v3 + 144) )
    {
      if ( *(_WORD *)(v25 - 0x57FFFFFFFE0LL) != 1 )
        goto LABEL_124;
      if ( (*(_BYTE *)(v68 + 184) & 7) == 0 )
      {
        v36 = (__int64 *)(((((__int64)(a2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        v37 = *v36;
        if ( (unsigned __int64)v36 >= v30
          && (unsigned __int64)v36 <= v29
          && (unsigned int)MiPteHasShadow(v34, v37, v36, 0xFFFFFA8000000022uLL)
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v39 )
          {
            v40 = *((_QWORD *)&v39->Flink + ((v38 >> 3) & 0x1FF));
            v41 = HIBYTE(v37);
            if ( (v40 & 0x20) == 0 )
              v41 = HIBYTE(v37);
            HIBYTE(v37) = v41;
            if ( (v40 & 0x42) != 0 )
              HIBYTE(v37) = v41;
          }
        }
        if ( (HIBYTE(v37) & 0xF) == 8 )
          goto LABEL_124;
      }
    }
    v42 = *(_BYTE *)(v25 + v33);
    if ( (v70 & 0x42) == 0 && (v42 & 0x10) == 0 )
    {
      if ( (*(_DWORD *)v35 & 4) == 0 )
        goto LABEL_124;
      v7 = 3;
    }
    if ( (v42 & 0x10) == 0 )
    {
      v43 = *(_BYTE *)(v25 + v33);
      if ( (*(_DWORD *)v35 & 0x400LL) == 0 && (v42 & 8) == 0 )
      {
        v5 = MiCapturePageFileInfoInline(v25 - 0x57FFFFFFFF0LL, 1LL, 0LL);
        v33 = 0xFFFFFA8000000022uLL;
        v43 = *(_BYTE *)(v25 - 0x57FFFFFFFDELL);
      }
      v44 = v43 | 0x10;
      *(_BYTE *)(v25 + v33) = v44;
      v42 = v44;
    }
    v45 = v42 >> 6;
    if ( v45 != 1 )
    {
      if ( v45 == 2 )
      {
        v7 |= 4u;
      }
      else if ( !v45 )
      {
        v7 |= 8u;
      }
    }
    v46 = v67;
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      v47 = -9LL;
      v48 = -2049LL;
      v49 = *(_QWORD *)(v67 + 8LL * *(unsigned int *)(v67 + 1156) + 6944);
      v50 = *v35 & 0x400;
      if ( (*v35 & 0x400) != 0 )
        v47 = -2049LL;
      v51 = *v35 & v47;
      if ( !v50 )
        v51 &= 0xFFFFFFFFFFFFFFF9uLL;
      if ( v49 )
      {
        v48 = *(unsigned __int16 *)(v49 + 204);
        if ( v51 )
        {
          v50 = qword_140C4DF40;
          if ( qword_140C4DF40 )
          {
            if ( (v51 & 0x10) != 0 )
              LODWORD(v51) = v51 & 0xFFFFFFEF;
            else
              LODWORD(v51) = ~(_DWORD)qword_140C4DF40 & v51;
          }
          v52 = v51 | 0xFFFFFFFF00000000uLL;
          if ( qword_140C4DF40 )
          {
            if ( (v52 & qword_140C4DF40) != 0 )
              v52 |= 0x10uLL;
            else
              v52 |= qword_140C4DF40;
          }
        }
        else
        {
          v52 = MiSwizzleInvalidPte(0xFFFFFFFF00000000uLL);
        }
        v51 = (unsigned __int16)(v52 ^ ((_WORD)v48 << 12)) & 0xF000 ^ v52;
      }
      v70 = v51;
      if ( (unsigned __int64)v35 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v35 > 0xFFFFF6FB7DBED7F8uLL )
        goto LABEL_104;
      if ( (unsigned int)MiPteHasShadow(v50, v51, v49, v48) )
      {
        v53 = v51;
        if ( !HIBYTE(word_140C4E008) && (v51 & 1) != 0 )
          v53 = v51 | 0x8000000000000000uLL;
        *v35 = v53;
        MiWritePteShadow(v25 - 0x57FFFFFFFF0LL, v53);
        v46 = v67;
        goto LABEL_105;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
LABEL_104:
        *v35 = v51;
        goto LABEL_105;
      }
      v54 = v51 | 0x8000000000000000uLL;
      if ( (v51 & 1) == 0 )
        v54 = v51;
      *v35 = v54;
    }
LABEL_105:
    _InterlockedAnd64((volatile signed __int64 *)(v25 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    v55 = *(_DWORD *)(v3 + 32);
    v7 &= ~1u;
    v32 = *(_QWORD **)v3;
    if ( v55 != -1 )
    {
      v56 = v3 + 16LL * v55;
      if ( v55 >= 5 || !*(_DWORD *)(v56 + 48) )
        goto LABEL_124;
      MiReservePageFileSpaceForPage(v46, a2, 128, (unsigned __int64 *)(v56 + 40));
      v57 = *(_QWORD *)(v56 + 40);
      if ( qword_140C4DF40 && (v57 & 0x10) == 0 )
        v57 &= ~qword_140C4DF40;
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v56 + 40), HIDWORD(v57) + 1);
      v59 = (*(_DWORD *)(v56 + 48))-- == 1;
      *(_QWORD *)(v56 + 40) = updated;
      if ( v59 )
        ++*(_DWORD *)(v3 + 32);
      v7 |= 0x10u;
    }
    goto LABEL_114;
  }
LABEL_124:
  if ( (v7 & 1) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
  {
    v65 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
    if ( (v6 & 4) == 0 )
      v65 = v6;
    MiReleasePageFileInfo(v67, v65, 0LL);
  }
  if ( v5 )
    MiReleasePageFileInfo(v67, v5, 0LL);
  return 0LL;
}
