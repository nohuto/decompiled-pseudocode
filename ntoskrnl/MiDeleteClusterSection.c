/*
 * XREFs of MiDeleteClusterSection @ 0x14034B3A4
 * Callers:
 *     MiDeleteSubsectionPages @ 0x14034B8E0 (MiDeleteSubsectionPages.c)
 * Callees:
 *     MiCreateInitialLargeLeafPfns @ 0x140213A50 (MiCreateInitialLargeLeafPfns.c)
 *     MiInitializeAllResidentPageBasePfns @ 0x140213BC4 (MiInitializeAllResidentPageBasePfns.c)
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiTryLockLeafPage @ 0x1402A29B8 (MiTryLockLeafPage.c)
 *     MiCheckSlabPfnBitmap @ 0x1402B7400 (MiCheckSlabPfnBitmap.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiIsPageOnBadList @ 0x14034B1D0 (MiIsPageOnBadList.c)
 *     MiReleasePageFileSpace @ 0x14034BE0C (MiReleasePageFileSpace.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 *     MiClearPfnImageVerified @ 0x14036ABC0 (MiClearPfnImageVerified.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiBadShareCount @ 0x14064B0E0 (MiBadShareCount.c)
 */

__int64 __fastcall MiDeleteClusterSection(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rcx
  __int64 v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  ULONG_PTR v8; // rdi
  ULONG_PTR v9; // rsi
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // r10
  __int64 v13; // r11
  ULONG_PTR v14; // r12
  __int64 v15; // r13
  __int64 *v16; // r15
  __int64 v17; // rbx
  __int64 v18; // r11
  int v19; // eax
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rbx
  BOOL v23; // eax
  __int64 v24; // r8
  int v25; // eax
  unsigned int v27; // r9d
  unsigned int *v28; // r8
  int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // ecx
  unsigned __int64 v32; // r15
  __int64 v33; // rbx
  unsigned int v34; // esi
  BOOL HasShadow; // eax
  __int64 v36; // r9
  __int64 v37; // r15
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rax
  ULONG_PTR v41; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-39h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-31h] BYREF
  ULONG_PTR v44; // [rsp+50h] [rbp-29h]
  unsigned __int16 *v45; // [rsp+58h] [rbp-21h]
  unsigned __int64 v46; // [rsp+60h] [rbp-19h]
  __int128 v47; // [rsp+68h] [rbp-11h] BYREF
  __int128 v48; // [rsp+78h] [rbp-1h]
  __int128 v49; // [rsp+88h] [rbp+Fh] BYREF

  BugCheckParameter2 = a1;
  v47 = 0LL;
  v2 = -1LL;
  v44 = a2;
  v48 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = v3 & 0xFFFFFFFFFFLL;
  v46 = 0LL;
  v5 = 0;
  v45 = *(unsigned __int16 **)(qword_140C67048 + 8 * ((v3 >> 43) & 0x3FF));
  do
  {
    v6 = MI_READ_PTE_LOCK_FREE(a2 + 8LL * v5);
    v7 = v6;
    if ( !v6 || (v6 & 0x800) == 0 )
      return 0LL;
    if ( qword_140C657C0 )
    {
      if ( (v6 & 0x10) != 0 )
        v7 = v6 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v7 = ~qword_140C657C0 & v6;
    }
    v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
    v9 = v8;
    if ( v8 > qword_140C65820 )
      return 0LL;
    if ( ((*(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 0LL;
    v10 = 48 * v8 - 0x220000000000LL;
    v11 = MiCheckSlabPfnBitmap(v10, 1LL, 0);
    v12 = 0LL;
    if ( v11 || v5 && v8 != v2 )
      return 0LL;
    a2 = v44;
    v2 = v8 + 1;
    LOBYTE(v13) = 1;
    ++v5;
  }
  while ( v5 < 0x10 );
  BugCheckParameter2 = 48 * v8 - 0x220000000000LL;
  v14 = v8 - 15;
  v44 = BugCheckParameter2;
  v49 = 0LL;
  v15 = 48 * v4 - 0x220000000000LL;
  v16 = (__int64 *)(a2 + 120);
  while ( 1 )
  {
    if ( v9 == v14 )
    {
      v17 = 48 * v14 - 0x220000000000LL;
      BugCheckParameter2 = v17;
    }
    else
    {
      MiTryLockLeafPage(v16, v13, (__int64 *)&BugCheckParameter2);
      v17 = BugCheckParameter2;
      v12 = 0LL;
      v13 = 1LL;
      if ( !BugCheckParameter2 )
        goto LABEL_37;
      if ( BugCheckParameter2 != v44 )
        goto LABEL_68;
    }
    BugCheckParameter4 = *(_QWORD *)(v17 + 8);
    if ( (__int64 *)(BugCheckParameter4 | 0x8000000000000000uLL) != v16 )
    {
      v41 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v16);
      KeBugCheckEx(0x1Au, 0x403uLL, (ULONG_PTR)v16, v41, BugCheckParameter4);
    }
    if ( (*(_BYTE *)(v17 + 34) & 7) == 6 )
      MiBadShareCount(v17);
    if ( *(_WORD *)(v17 + 32) != (_WORD)v12 )
      break;
    if ( (*(_BYTE *)(v17 + 35) & 0x40) != 0 )
      break;
    if ( MiIsPageOnBadList(v17) )
      break;
    v19 = MiCheckSlabPfnBitmap(v17, v18, 0);
    v12 = 0LL;
    if ( v19 )
      break;
    MiUnlinkPageFromListEx(v17, 0LL);
    if ( ((*(_QWORD *)(v17 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v17);
    MiReleasePageFileSpace(v45, *(_QWORD *)(v17 + 16), 1LL);
    v20 = *(_QWORD *)(v17 + 16);
    if ( (v20 & 4) != 0 )
    {
      v20 &= ~4uLL;
      *(_QWORD *)(v17 + 16) = v20;
    }
    if ( (v20 & 2) != 0 )
      *(_QWORD *)(v17 + 16) = v20 & 0xFFFFFFFFFFFFFFFDuLL;
    *(_BYTE *)(v17 + 35) &= 0xF8u;
    MiSetPfnIdentity(v17, 0LL);
    ++*((_DWORD *)&v49 + ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) >> 6));
    *(_QWORD *)(v17 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v17 + 34) &= 0xC7u;
    *(_BYTE *)(v17 + 35) &= ~0x20u;
    v21 = *(_BYTE *)(v17 + 34) & 0xEF;
    *(_BYTE *)(v17 + 34) = v21;
    *(_BYTE *)(v17 + 34) = v21 & 0xF8 | 1;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 24) &= 0x8000000000000000uLL;
    *(_QWORD *)(v17 + 16) = 0LL;
    v22 = ZeroPte;
    v23 = MiPteInShadowRange((unsigned __int64)v16);
    v12 = 0LL;
    if ( v23 )
    {
      HasShadow = MiPteHasShadow();
      v13 = 1LL;
      if ( HasShadow )
      {
        v25 = 1;
        if ( HIBYTE(word_140C6697C) == (_BYTE)v12 && (ZeroPte & 1) != 0 )
          v22 = ZeroPte | 0x8000000000000000uLL;
        goto LABEL_32;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v22 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else
    {
      v13 = 1LL;
    }
    v25 = v12;
LABEL_32:
    *v16 = v22;
    if ( v25 )
    {
      MiWritePteShadow((__int64)v16, v22, v24);
      v12 = 0LL;
    }
    v46 += v13;
    v9 -= v13;
    v44 -= 48LL;
    --v16;
    if ( v9 < v14 )
      goto LABEL_37;
  }
  v13 = 1LL;
  if ( v9 == v14 )
    goto LABEL_37;
LABEL_68:
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_37:
  v27 = v12;
  v28 = (unsigned int *)&v49;
  v29 = v12;
  v30 = v13;
  v31 = v12;
  do
  {
    if ( *v28 && v27 )
      v29 = v13;
    if ( v27 < *v28 )
    {
      v27 = *v28;
      v30 = v31;
    }
    v31 += v13;
    ++v28;
  }
  while ( v31 < 4 );
  if ( v29 )
  {
    v36 = 48 * v14 - 0x220000000000LL;
    v37 = 16LL;
    v38 = v36;
    v39 = v36;
    v40 = v36;
    do
    {
      if ( *(unsigned __int8 *)(v40 + 34) >> 6 != v30 )
      {
        MiChangePageAttribute(v36, v30, (unsigned int)v13, v36);
        v38 = v39;
        v13 = 1LL;
      }
      v36 = v38 + 48;
      v38 = v36;
      v39 = v36;
      v40 = v36;
      v37 -= v13;
    }
    while ( v37 );
    v12 = 0LL;
  }
  v32 = v46;
  BugCheckParameter2 = 48 * v8 - 0x220000000000LL;
  if ( v46 == 16 )
  {
    *(_QWORD *)&v47 = v8 - 15;
    *((_QWORD *)&v47 + 1) = (unsigned int)v13 | 0x200000000LL;
    LOBYTE(v48) = 2;
    v33 = *((_QWORD *)v45 + 2)
        + 25408LL * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(48 * v8) >> 4)) + 2);
    MiInitializeAllResidentPageBasePfns(v45, v8 - 15, 16LL, 2, v30, 1, 1);
    MiCreateInitialLargeLeafPfns(v8 - 15, 16LL, 2, v30, *v45, 1);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v33 + 23104));
    v13 = 1LL;
    v34 = 0;
    goto LABEL_45;
  }
  v34 = v12;
  v33 = v12;
  if ( v46 )
  {
LABEL_45:
    while ( v8 != v14 )
    {
      if ( !v33 )
      {
        MiSetPfnPteFrame(v10, 0LL);
        MiInsertPageInFreeOrZeroedList(v8, 2);
        v13 = 1LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v34 += v13;
      v10 = BugCheckParameter2 - 48;
      v8 -= v13;
      BugCheckParameter2 -= 48LL;
      if ( v34 >= v32 )
      {
        if ( !v32 )
          goto LABEL_51;
        break;
      }
    }
    MiLockNestedPageAtDpcInline(v15);
    *(_QWORD *)(v15 + 24) ^= (*(_QWORD *)(v15 + 24) ^ (*(_QWORD *)(v15 + 24) - v32)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
LABEL_51:
  if ( !v33 )
    return 0LL;
  MiInsertLargePageInNodeList((__int64)&v47);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v33 + 23104));
  return 1LL;
}
