/*
 * XREFs of MiDeleteClusterSection @ 0x140280A60
 * Callers:
 *     MiDeleteSubsectionPages @ 0x140238AE0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14022C490 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 *     MiReleasePageFileSpace @ 0x1402837D4 (MiReleasePageFileSpace.c)
 *     MiIsPageOnBadList @ 0x140283BEC (MiIsPageOnBadList.c)
 *     MiTryLockLeafPage @ 0x140283FF8 (MiTryLockLeafPage.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiClearPfnImageVerified @ 0x1402FBA64 (MiClearPfnImageVerified.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiBadShareCount @ 0x1403F3FB4 (MiBadShareCount.c)
 *     MiCreateInitialLargeLeafPfns @ 0x1403F5A54 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x1403F6248 (MiInitializeAllResidentPageBasePfns.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MI_NODE_FROM_PFN @ 0x140547A78 (MI_NODE_FROM_PFN.c)
 */

__int64 __fastcall MiDeleteClusterSection(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rcx
  __int64 v5; // r12
  unsigned int v6; // r15d
  unsigned __int64 v7; // r13
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  ULONG_PTR v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // r10
  ULONG_PTR v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r8
  __int64 v28; // rdi
  int v29; // ecx
  unsigned int i; // r9d
  unsigned int v31; // edx
  __int64 v32; // r10
  unsigned int v33; // r11d
  unsigned int v34; // r8d
  __int64 v35; // r11
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rsi
  ULONG_PTR v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rbp
  _QWORD *v42; // rbx
  unsigned __int64 v43; // r12
  ULONG_PTR v45; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-98h] BYREF
  __int64 v47; // [rsp+48h] [rbp-90h]
  unsigned __int64 v48; // [rsp+50h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-80h] BYREF
  __int128 v50; // [rsp+70h] [rbp-68h] BYREF
  __int64 v51; // [rsp+80h] [rbp-58h]
  __int128 v52; // [rsp+88h] [rbp-50h]

  v51 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v3 = -1LL;
  v50 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = v4 & 0xFFFFFFFFFLL;
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v47 = *(_QWORD *)(qword_140C4E648 + 8 * ((v4 >> 39) & 0x3FF));
  do
  {
    v9 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v8);
    v10 = v9;
    if ( !v9 || (v9 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C4DF40 )
    {
      if ( (v9 & 0x10) != 0 )
        v10 = v9 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v10 = ~qword_140C4DF40 & v9;
    }
    v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
    if ( ((*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
      return 0LL;
    v12 = 48 * v11 - 0x58000000000LL;
    BugCheckParameter2 = v12;
    if ( (unsigned int)MiIsPfnFromSlabAllocation(v12) || v8 && v11 != v3 )
      return 0LL;
    ++v8;
    v3 = v11 + 1;
  }
  while ( v8 < 0x10 );
  v15 = v11 - 15;
  v48 = v14 + 48 * v5;
  v16 = (unsigned __int64 *)(a2 + 120);
  v52 = 0LL;
  while ( 1 )
  {
    v17 = 0x8000000000000000uLL;
    if ( v11 == v15 )
    {
      v18 = v14 + 48 * v15;
      BugCheckParameter2 = v18;
    }
    else
    {
      MiTryLockLeafPage(v16, v13, &BugCheckParameter2);
      v18 = BugCheckParameter2;
      if ( !BugCheckParameter2 )
        goto LABEL_45;
      if ( BugCheckParameter2 != v12 )
        goto LABEL_44;
    }
    if ( (unsigned __int64 *)(v17 | *(_QWORD *)(v18 + 8)) != v16 )
    {
      v45 = MI_READ_PTE_LOCK_FREE(v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v45, *(_QWORD *)(v18 + 8));
    }
    if ( (*(_BYTE *)(v18 + 34) & 7) == 6 )
      MiBadShareCount(v18);
    if ( *(_WORD *)(v18 + 32)
      || (*(_BYTE *)(v18 + 35) & 0x40) != 0
      || (unsigned int)MiIsPageOnBadList(v18)
      || (unsigned int)MiIsPfnFromSlabAllocation(v19) )
    {
      break;
    }
    MiUnlinkPageFromList(v18, 0);
    if ( ((*(_QWORD *)(v18 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v18, 12LL);
    MiReleasePageFileSpace(v47, *(_QWORD *)(v18 + 16), 1LL);
    v21 = *(_QWORD *)(v18 + 16);
    if ( (v21 & 4) != 0 )
    {
      v21 &= ~4uLL;
      *(_QWORD *)(v18 + 16) = v21;
    }
    if ( (v21 & 2) != 0 )
      *(_QWORD *)(v18 + 16) = v21 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v18 + 35) &= 0xF8u;
    *(_QWORD *)(v18 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    ++*((_DWORD *)&v52 + ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) >> 6));
    *(_QWORD *)(v18 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v18 + 34) &= 0xC7u;
    *(_BYTE *)(v18 + 35) &= ~0x20u;
    v22 = *(_BYTE *)(v18 + 34) & 0xEF;
    *(_BYTE *)(v18 + 34) = v22;
    *(_BYTE *)(v18 + 34) = v22 & 0xF8 | 1;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v18 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v18 + 16) = 0LL;
    v23 = ZeroPte;
    if ( !(unsigned int)MiPteInShadowRange(v16, v20) )
      goto LABEL_40;
    if ( !(unsigned int)MiPteHasShadow(v24, v13, v25, v26) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v23 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_40:
      *v16 = v23;
      goto LABEL_41;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v23 = ZeroPte | 0x8000000000000000uLL;
    *v16 = v23;
    MiWritePteShadow(v16, v23);
LABEL_41:
    ++v7;
    --v11;
    v12 -= 48LL;
    --v16;
    if ( v11 < v15 )
      goto LABEL_45;
    v14 = 0xFFFFFA8000000000uLL;
  }
  if ( v11 == v15 )
    goto LABEL_45;
LABEL_44:
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_45:
  LODWORD(v27) = 0;
  LODWORD(v28) = 1;
  v29 = 0;
  for ( i = 0; i < 4; i += 4 )
  {
    v31 = *((_DWORD *)&v52 + i);
    if ( v31 && (_DWORD)v27 )
      v29 = 1;
    v32 = i + 1;
    v33 = i;
    if ( (unsigned int)v27 >= v31 )
    {
      v31 = v27;
      v33 = v28;
    }
    v34 = *((_DWORD *)&v52 + v32);
    if ( v34 && v31 )
      v29 = 1;
    if ( v31 >= v34 )
    {
      LODWORD(v32) = v33;
      v34 = v31;
    }
    v35 = i + 2;
    v36 = *((unsigned int *)&v52 + v35);
    if ( (_DWORD)v36 && v34 )
      v29 = 1;
    v28 = i + 3;
    if ( v34 >= (unsigned int)v36 )
    {
      v36 = v34;
      LODWORD(v35) = v32;
    }
    v27 = *((unsigned int *)&v52 + v28);
    if ( (_DWORD)v27 && (_DWORD)v36 )
      v29 = 1;
    if ( (unsigned int)v36 >= (unsigned int)v27 )
      LODWORD(v28) = v35;
    if ( (unsigned int)v36 >= (unsigned int)v27 )
      v27 = (unsigned int)v36;
  }
  if ( v29 )
  {
    v37 = 48 * v15 - 0x58000000000LL;
    v38 = 16LL;
    do
    {
      if ( *(unsigned __int8 *)(v37 + 34) >> 6 != (_DWORD)v28 )
        MiChangePageAttribute(v37, (unsigned int)v28, 1LL);
      v37 += 48LL;
      --v38;
    }
    while ( v38 );
  }
  v39 = v15 + 15;
  BugCheckParameter2 = 48 * (v15 + 15) - 0x58000000000LL;
  if ( v7 == 16 )
  {
    *(_QWORD *)&v50 = v15;
    *((_QWORD *)&v50 + 1) = 0x200000001LL;
    LOBYTE(v51) = 2;
    v40 = MI_NODE_FROM_PFN(48 * (v15 + 15) - 0x58000000000LL, v36, v27);
    v41 = *(_QWORD *)(v47 + 16) + 4544LL * v40;
    MiInitializeAllResidentPageBasePfns(v47, v15, 16, 2, v28, 1, 1);
    MiCreateInitialLargeLeafPfns(v15, 16, 2, v28, *(_WORD *)v47, 1);
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v41 + 4328), &LockHandle);
LABEL_77:
    v42 = (_QWORD *)(48 * (v15 + 15) - 0x58000000000LL + 40);
    do
    {
      if ( v39 == v15 )
        break;
      if ( !v41 )
      {
        *v42 &= 0xFFFFFFF000000000uLL;
        MiInsertPageInFreeOrZeroedList(v39, 2);
      }
      _InterlockedAnd64(v42 - 2, 0x7FFFFFFFFFFFFFFFuLL);
      ++v6;
      --v39;
      v42 -= 6;
    }
    while ( v6 < v7 );
    v43 = v48;
    MiLockNestedPageAtDpcInline(v48);
    *(_QWORD *)(v43 + 24) ^= (*(_QWORD *)(v43 + 24) ^ (*(_QWORD *)(v43 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v41 = 0LL;
    if ( v7 )
      goto LABEL_77;
  }
  if ( v41 )
  {
    MiInsertLargePageInNodeList((__int64)&v50);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    return 1LL;
  }
  return 0LL;
}
