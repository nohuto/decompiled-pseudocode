/*
 * XREFs of CmpCopyKeyPartial @ 0x14078ECB4
 * Callers:
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A26040 (CmpLightWeightPrepareAddKeyUoW.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x14078F10C (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14078F228 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14078F258 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 */

__int64 __fastcall CmpCopyKeyPartial(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        ULONG_PTR a3,
        int a4,
        __int16 a5,
        ULONG_PTR BugCheckParameter4,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int v10; // r14d
  __int64 v11; // rdi
  __int64 CellFlat; // rax
  __int64 v13; // r15
  int SecurityDescriptorNode; // r14d
  __int16 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // r13d
  __int64 CellPaged; // rax
  __int16 v19; // ax
  int v20; // r14d
  __int64 v21; // rax
  unsigned int v22; // r15d
  unsigned int *v23; // rcx
  unsigned int v24; // r15d
  __int64 v25; // rax
  unsigned int *v26; // rdi
  __int64 v27; // rsi
  __int64 v29; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-41h]
  unsigned int v31; // [rsp+4Ch] [rbp-3Dh] BYREF
  __int64 v32; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v33; // [rsp+58h] [rbp-31h] BYREF
  __int64 v34; // [rsp+60h] [rbp-29h] BYREF
  __int64 v35; // [rsp+68h] [rbp-21h] BYREF
  __int64 v36; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+78h] [rbp-11h] BYREF
  __int64 v38; // [rsp+80h] [rbp-9h]
  __int64 v39; // [rsp+88h] [rbp-1h]
  int v40; // [rsp+D0h] [rbp+47h]
  unsigned int v42; // [rsp+F0h] [rbp+67h]

  LODWORD(v32) = 0;
  v31 = 0;
  LODWORD(BugCheckParameter4) = -1;
  v40 = -1;
  v10 = a2;
  v29 = -1LL;
  v11 = 0LL;
  v34 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v39 = 0LL;
  v36 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v30 = 0;
  v33 = 0xFFFFFFFF00000000uLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v13 = CellFlat;
  LODWORD(v38) = *(_DWORD *)(CellFlat + 44);
  SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, v10, (__int64)&BugCheckParameter4);
  if ( SecurityDescriptorNode < 0 )
  {
    v16 = BugCheckParameter4;
    goto LABEL_40;
  }
  v15 = a5;
  if ( (a5 & 2) != 0 )
  {
    a7 = *(unsigned __int16 *)(v13 + 74);
    if ( a7 )
    {
      SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, *(unsigned int *)(v13 + 48), (__int64)&v29);
      if ( SecurityDescriptorNode < 0 )
      {
        v16 = BugCheckParameter4;
        v17 = v29;
LABEL_41:
        v24 = HIDWORD(v29);
        goto LABEL_42;
      }
      v15 = a5;
      v40 = v29;
    }
  }
  else
  {
    a7 = 0;
  }
  v16 = BugCheckParameter4;
  if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(a3, (unsigned int)BugCheckParameter4);
  else
    CellPaged = HvpGetCellPaged(a3);
  v11 = CellPaged;
  *(_DWORD *)(CellPaged + 20) = 0;
  *(_DWORD *)(CellPaged + 24) = 0;
  *(_DWORD *)(CellPaged + 48) = v40;
  *(_WORD *)(CellPaged + 74) = a7;
  *(_DWORD *)(CellPaged + 44) = -1;
  *(_DWORD *)(CellPaged + 28) = -1;
  *(_DWORD *)(CellPaged + 32) = -1;
  *(_DWORD *)(CellPaged + 16) = a4;
  *(_BYTE *)(CellPaged + 12) = 0;
  if ( (v15 & 0x100) != 0 )
    *(_BYTE *)(CellPaged + 13) &= 0xFCu;
  if ( (v15 & 0x80u) != 0 )
    *(_BYTE *)(CellPaged + 13) |= 0x80u;
  v19 = *(_WORD *)(v13 + 2) & 0x30;
  *(_WORD *)(v11 + 2) = v19;
  if ( (v15 & 0x20) != 0 )
  {
    v19 = *(_WORD *)(v13 + 2) & 0xFFBF;
    *(_WORD *)(v11 + 2) = v19;
  }
  if ( a4 == -1 )
    *(_WORD *)(v11 + 2) = v19 | 0xC;
  if ( (v15 & 0x10) == 0 )
  {
    CmpLockTwoSecurityCachesExclusiveShared(a3, BugCheckParameter3);
    CmpFindSecurityCellCacheIndex(BugCheckParameter3, v38, &v31);
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a3,
                               v16,
                               v11,
                               v16 >> 31,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v31 + 8) + 32LL),
                               0,
                               (unsigned int *)(v11 + 44));
    CmpUnlockTwoSecurityCaches(a3, BugCheckParameter3);
    if ( SecurityDescriptorNode < 0 )
    {
LABEL_40:
      v17 = v40;
      goto LABEL_41;
    }
  }
  if ( (*(_BYTE *)(v13 + 2) & 0x40) != 0 )
    v20 = 0;
  else
    v20 = *(_DWORD *)(v13 + 36);
  *(_DWORD *)(v11 + 36) = 0;
  a7 = v20;
  *(_DWORD *)(v11 + 40) = -1;
  if ( (a5 & 4) != 0 && v20 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v21 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v13 + 40));
    else
      v21 = HvpGetCellPaged(BugCheckParameter3);
    v42 = 0;
    v39 = v21;
    v22 = a7;
    v23 = (unsigned int *)v21;
    v38 = v21;
    while ( 1 )
    {
      SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, *v23, a3, (__int64)&v32);
      if ( SecurityDescriptorNode < 0 )
        break;
      SecurityDescriptorNode = CmpAddValueToListEx(a3, (__int64)&v33, v22);
      if ( SecurityDescriptorNode < 0 )
        break;
      v23 = (unsigned int *)(v38 + 4);
      ++v42;
      v38 += 4LL;
      if ( v42 >= v22 )
      {
        *(_QWORD *)(v11 + 36) = v33;
        goto LABEL_37;
      }
    }
    v24 = HIDWORD(v33);
    v17 = v40;
    v30 = v33;
  }
  else
  {
LABEL_37:
    v24 = -1;
    v30 = 0;
    v17 = -1;
    SecurityDescriptorNode = 0;
    *a8 = v16;
    v16 = -1;
  }
LABEL_42:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v34);
  if ( v11 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v35);
    else
      HvpReleaseCellPaged(a3, &v35);
  }
  if ( v39 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v36);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v36);
  }
  if ( v24 != -1 )
  {
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v25 = HvpGetCellFlat(a3, v24);
    else
      v25 = HvpGetCellPaged(a3);
    v26 = (unsigned int *)v25;
    if ( v30 )
    {
      v27 = v30;
      do
      {
        HvFreeCell(a3, *v26++);
        --v27;
      }
      while ( v27 );
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a3, &v37);
    else
      HvpReleaseCellPaged(a3, &v37);
    HvFreeCell(a3, v24);
  }
  if ( v17 != -1 )
    HvFreeCell(a3, v17);
  if ( v16 != -1 )
    HvFreeCell(a3, v16);
  return (unsigned int)SecurityDescriptorNode;
}
