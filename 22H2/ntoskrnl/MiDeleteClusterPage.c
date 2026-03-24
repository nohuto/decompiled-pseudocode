/*
 * XREFs of MiDeleteClusterPage @ 0x1402ABEC0
 * Callers:
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 * Callees:
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiTryLockNestedPageAtDpcInline @ 0x140283FE0 (MiTryLockNestedPageAtDpcInline.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiSearchNumaNodeTable @ 0x1402ABE20 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiBadShareCount @ 0x1403F3FB4 (MiBadShareCount.c)
 *     MiConvertLockedSmallPageToLarge @ 0x1403F56EC (MiConvertLockedSmallPageToLarge.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiLockPageAtDpc @ 0x14054F85C (MiLockPageAtDpc.c)
 */

__int64 __fastcall MiDeleteClusterPage(ULONG_PTR BugCheckParameter2, unsigned __int8 *a2)
{
  ULONG_PTR v2; // r15
  __int64 v3; // rsi
  unsigned __int64 v5; // r13
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  ULONG_PTR v21; // rdi
  unsigned __int64 i; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  struct _LIST_ENTRY *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  _DWORD *v37; // r9
  bool v38; // zf
  unsigned __int64 v39; // rax
  ULONG_PTR BugCheckParameter4; // rsi
  unsigned int v41; // ecx
  __int64 j; // rcx
  unsigned int v44; // eax
  unsigned __int64 v45; // r13
  __int64 *v46; // r15
  unsigned __int64 v47; // rbx
  unsigned int v48; // esi
  __int64 v49; // r14
  char v50; // al
  __int64 v51; // rax
  char v52; // al
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rbx
  ULONG_PTR v57; // rax
  __int64 v58; // [rsp+30h] [rbp-49h]
  unsigned __int64 v59; // [rsp+38h] [rbp-41h] BYREF
  __int64 v60; // [rsp+40h] [rbp-39h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-31h] BYREF
  __int64 v62; // [rsp+50h] [rbp-29h]
  unsigned __int64 v63; // [rsp+58h] [rbp-21h]
  __int128 v64; // [rsp+60h] [rbp-19h] BYREF
  __int64 v65; // [rsp+70h] [rbp-9h]
  __int64 v66; // [rsp+78h] [rbp-1h]
  _KPROCESS *Process; // [rsp+80h] [rbp+7h]
  __int128 v68; // [rsp+88h] [rbp+Fh]

  v2 = BugCheckParameter2;
  v65 = 0LL;
  v3 = -1LL;
  v58 = -1LL;
  v64 = 0LL;
  v5 = -1LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v62 = *(_QWORD *)(qword_140C4E648 + 8LL * Process[1].IdealProcessorPadding[5]);
  v6 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = *v6;
  if ( (unsigned int)MiPteInShadowRange(v6, a2)
    && (unsigned int)MiPteHasShadow(v9, v8, v10, v11)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v8 = (unsigned int)v6;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v13 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)(unsigned int)v6 >> 3) & 0x1FF));
      v8 = v7 | 0x20;
      if ( (v13 & 0x20) == 0 )
        v8 = v7;
      v7 = v8;
      if ( (v13 & 0x42) != 0 )
        v7 = v8 | 0x42;
    }
  }
  v61 = v7;
  if ( (unsigned int)MiPteInShadowRange(&v61, v8)
    && (unsigned int)MiPteHasShadow(v15, v14, v16, v17)
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v18 )
    {
      v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&v61 >> 3) & 0x1FF));
      v20 = v7 | 0x20;
      if ( (v19 & 0x20) == 0 )
        v20 = v7;
      v7 = v20;
      if ( (v19 & 0x42) != 0 )
        v7 = v20 | 0x42;
    }
  }
  v21 = v2;
  v66 = (v7 >> 12) & 0xFFFFFFFFFLL;
  for ( i = 0LL; i < 0x10; ++i )
  {
    v23 = MI_READ_PTE_LOCK_FREE(v21);
    if ( !v23 || (v23 & 0x400) == 0 )
      return 0LL;
    v26 = v23 & 0xFFFFFFFFFFFFFBFEuLL | 1;
    v59 = v26;
    if ( (unsigned __int64)&v59 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v59 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v59, v24, v26, v25)
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v27 )
      {
        v28 = *((_QWORD *)&v27->Flink + (((unsigned __int64)&v59 >> 3) & 0x1FF));
        if ( (v28 & 0x20) != 0 )
          v26 |= 0x20uLL;
        if ( (v28 & 0x42) != 0 )
          v26 |= 0x42uLL;
      }
      else
      {
        v26 = v59;
      }
    }
    v29 = (v26 >> 12) & 0xFFFFFFFFFLL;
    if ( i )
    {
      if ( v29 != v5 )
        return 0LL;
    }
    if ( byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, (unsigned __int64)(48 * v29 / 48) >> 9)
      || (unsigned int)MI_PFN_IS_PROTO(48 * v29 - 0x58000000000LL)
      || *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FFLL)) != v62 )
    {
      return 0LL;
    }
    v5 = v30 + 1;
    v21 += 8LL;
  }
  MiDeleteBatch(a2);
  v63 = v5 - 16;
  v32 = v5 - 16;
  v33 = 48 * (v5 - 16);
  v34 = v33 - 0x58000000000LL;
  v35 = v33 - 0x58000000000LL;
  v36 = (__int64)((unsigned __int128)(v33 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  MiSearchNumaNodeTable(v36 + (v36 >> 63));
  v68 = 0LL;
  v38 = 0;
  if ( v5 - 16 < v5 )
  {
    v39 = v5 - 16;
    v63 = v5 - 16;
    while ( 1 )
    {
      if ( v32 == v39 )
      {
        MiLockPageAtDpc(v34);
      }
      else if ( !MiTryLockNestedPageAtDpcInline(v34) )
      {
        goto LABEL_53;
      }
      BugCheckParameter4 = *(_QWORD *)(v34 + 8);
      v58 = v32;
      if ( (BugCheckParameter4 | 0x8000000000000000uLL) != v2 )
      {
        v57 = MI_READ_PTE_LOCK_FREE(v2);
        KeBugCheckEx(0x1Au, 0x403uLL, v2, v57, BugCheckParameter4);
      }
      v41 = *(unsigned __int8 *)(v34 + 34);
      if ( (v41 & 7) != 6 )
        MiBadShareCount(v34);
      if ( *(_WORD *)(v34 + 32) != 1 || (*(_BYTE *)(v34 + 35) & 0x40) != 0 )
        break;
      ++v32;
      v34 += 48LL;
      v2 += 8LL;
      ++*((_DWORD *)&v68 + ((unsigned __int64)v41 >> 6));
      if ( v32 >= v5 )
      {
LABEL_53:
        v3 = v58;
        goto LABEL_55;
      }
      v39 = v5 - 16;
    }
    v3 = v32;
LABEL_55:
    v38 = v32 == v5;
  }
  if ( !v38 )
  {
    if ( v3 != -1 )
    {
      for ( j = 48 * v3 - 0x58000000000LL; j != v35; j -= 48LL )
        _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(j + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    return 0LL;
  }
  v44 = 0;
  v45 = v34;
  v46 = (__int64 *)(v2 - 128);
  v47 = v34 - 768;
  v48 = 1;
  if ( (_DWORD)v68 )
  {
    v44 = v68;
    v48 = 0;
  }
  if ( v44 < DWORD1(v68) )
  {
    v44 = DWORD1(v68);
    v48 = 1;
  }
  if ( v44 < DWORD2(v68) )
  {
    v44 = DWORD2(v68);
    v48 = 2;
  }
  v49 = v62;
  if ( v44 < HIDWORD(v68) )
    v48 = 3;
  do
  {
    v50 = (*(_QWORD *)(v47 + 40) >> 60) & 7;
    *(_WORD *)(v47 + 32) = 2;
    if ( v50 == 3 )
      MiClearPfnImageVerified(v47, 12LL);
    v60 = *(_QWORD *)(v47 + 16);
    if ( (v60 & 0x400) == 0 )
    {
      v51 = (v60 & 4) != 0 || (v60 & 2) != 0 ? MI_READ_PTE_LOCK_FREE(&v60) : 0LL;
      v60 = v51;
      if ( v51 )
        MiReleasePageFileInfo(v49, v51, 0LL);
    }
    *(_QWORD *)(v47 + 16) = ZeroPte;
    if ( *(unsigned __int8 *)(v47 + 34) >> 6 != v48 )
      MiChangePageAttribute(v47, v48, 1LL, v37);
    v52 = *(_BYTE *)(v47 + 35);
    if ( (v52 & 0x10) != 0 )
      *(_BYTE *)(v47 + 35) = v52 & 0xEF;
    MiConvertLockedSmallPageToLarge(v47, v35, 2LL);
    if ( v47 != v35 )
      _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v55 = ZeroPte;
    if ( (unsigned __int64)v46 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v46 > 0xFFFFF6FB7DBED7F8uLL )
      goto LABEL_95;
    if ( !(unsigned int)MiPteHasShadow(v53, ZeroPte, v54, v37) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v55 & 1) != 0 )
      {
        v55 |= 0x8000000000000000uLL;
      }
LABEL_95:
      *v46 = v55;
      goto LABEL_96;
    }
    if ( !HIBYTE(word_140C4E008) && (v55 & 1) != 0 )
      v55 |= 0x8000000000000000uLL;
    *v46 = v55;
    MiWritePteShadow(v46, v55);
LABEL_96:
    v47 += 48LL;
    ++v46;
  }
  while ( v47 < v45 );
  *(_QWORD *)&v64 = v63;
  *((_QWORD *)&v64 + 1) = 1LL;
  LOBYTE(v65) = 2;
  MiInsertLargePageInNodeList((__int64)&v64);
  v56 = 48 * v66 - 0x58000000000LL;
  MiLockPageAtDpc(v56);
  *(_QWORD *)(v56 + 24) ^= (*(_QWORD *)(v56 + 24) ^ (*(_QWORD *)(v56 + 24) - 16LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v56 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFF0uLL);
  return 1LL;
}
