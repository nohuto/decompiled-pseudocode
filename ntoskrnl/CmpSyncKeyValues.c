/*
 * XREFs of CmpSyncKeyValues @ 0x140A20124
 * Callers:
 *     CmpCopySyncTree2 @ 0x140A1E7F8 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x140A1F628 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140243994 (CmpDereferenceSecurityNode.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067D1C8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFreeValue @ 0x1406BAA4C (CmpFreeValue.c)
 *     CmpFreeSecurityDescriptor @ 0x1406BB6D4 (CmpFreeSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x14078F10C (CmpCopyCell.c)
 *     CmpUnlockTwoSecurityCaches @ 0x14078F228 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x14078F258 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 *     CmpFreeKeyValueList @ 0x140A1F10C (CmpFreeKeyValueList.c)
 *     CmpFreeKeyValues @ 0x140A1F1C0 (CmpFreeKeyValues.c)
 */

__int64 __fastcall CmpSyncKeyValues(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int16 a7)
{
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  char v12; // r13
  unsigned int v13; // esi
  ULONG_PTR v14; // rdx
  int v15; // eax
  int SecurityDescriptorNode; // esi
  int v17; // edx
  ULONG_PTR v18; // rdx
  unsigned int *CellFlat; // rax
  unsigned int v20; // r13d
  __int64 v21; // r13
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rax
  int v24; // eax
  unsigned int v26; // [rsp+40h] [rbp-38h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+50h] [rbp-28h] BYREF
  unsigned int *v29; // [rsp+58h] [rbp-20h]
  unsigned int *v30; // [rsp+60h] [rbp-18h]
  ULONG_PTR BugCheckParameter3a; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v34; // [rsp+D8h] [rbp+60h] BYREF

  v28 = 0LL;
  v34 = 0;
  v8 = -1;
  LODWORD(BugCheckParameter3a) = -1;
  a7 = 0;
  v9 = -1;
  LODWORD(BugCheckParameter4) = -1;
  LODWORD(v32) = -1;
  v27 = 0xFFFFFFFF00000000uLL;
  v29 = 0LL;
  HvpGetCellContextReinitialize(&v28);
  v12 = 0;
  v13 = a5 >> 31;
  v26 = a5 >> 31;
  if ( *(_WORD *)(a3 + 74) )
  {
    v14 = *(unsigned int *)(a3 + 48);
    if ( (_DWORD)v14 != -1 )
    {
      v15 = CmpCopyCell(BugCheckParameter3, v14, a4, v13, (int *)&BugCheckParameter3a);
      v8 = BugCheckParameter3a;
      SecurityDescriptorNode = v15;
      if ( v15 < 0 )
        goto LABEL_26;
      v13 = v26;
      a7 = *(_WORD *)(a3 + 74);
    }
  }
  CmpLockTwoSecurityCachesExclusiveShared(a4, BugCheckParameter3);
  v17 = *(_DWORD *)(a3 + 44);
  v12 = 1;
  LODWORD(BugCheckParameter3a) = 1;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, v17, &v34) )
  {
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a4,
                               a5,
                               a6,
                               v13,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v34 + 8) + 32LL),
                               0,
                               (unsigned int *)&BugCheckParameter4);
    if ( SecurityDescriptorNode >= 0 )
    {
      v34 = *(_DWORD *)(a3 + 36);
      if ( v34 )
      {
        v18 = *(unsigned int *)(a3 + 40);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellFlat = (unsigned int *)HvpGetCellFlat(BugCheckParameter3, v18, &v28);
        else
          CellFlat = (unsigned int *)HvpGetCellPaged(BugCheckParameter3, v18, (unsigned int *)&v28);
        v29 = CellFlat;
        v20 = 0;
        v30 = CellFlat;
        while ( 1 )
        {
          SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, *CellFlat, a4, v26, (unsigned int *)&v32);
          if ( SecurityDescriptorNode < 0 )
            break;
          v9 = v32;
          SecurityDescriptorNode = CmpAddValueToListEx(a4, v32, v20, v26, (unsigned int *)&v27, BugCheckParameter3a);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_19;
          v9 = -1;
          v20 += BugCheckParameter3a;
          CellFlat = v30 + 1;
          LODWORD(v32) = -1;
          ++v30;
          if ( v20 >= v34 )
            goto LABEL_17;
        }
        v9 = v32;
      }
      else
      {
LABEL_17:
        v21 = a6;
        SecurityDescriptorNode = CmpFreeKeyValues(a4, a5, a6);
        if ( SecurityDescriptorNode >= 0 )
        {
          v22 = a5;
          SecurityDescriptorNode = 0;
          *(_WORD *)(v21 + 74) = a7;
          v23 = v27;
          *(_DWORD *)(v21 + 48) = v8;
          v8 = -1;
          *(_QWORD *)(v21 + 36) = v23;
          *(_DWORD *)(v21 + 60) = *(_DWORD *)(a3 + 60);
          LODWORD(v23) = *(_DWORD *)(a3 + 64);
          HIDWORD(v27) = -1;
          *(_DWORD *)(v21 + 64) = v23;
          LODWORD(v27) = 0;
          CmpFreeSecurityDescriptor(a4, v22);
          v24 = BugCheckParameter4;
          LODWORD(BugCheckParameter4) = -1;
          *(_DWORD *)(v21 + 44) = v24;
        }
      }
LABEL_19:
      v12 = BugCheckParameter3a;
      if ( v29 )
      {
        if ( ((unsigned __int8)BugCheckParameter3a & *(_BYTE *)(BugCheckParameter3 + 140)) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v28);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
      }
      if ( v9 != -1 )
        CmpFreeValue(a4, v9);
    }
  }
  else
  {
    SecurityDescriptorNode = -1073741492;
  }
LABEL_26:
  CmpFreeKeyValueList(a4, &v27);
  if ( v8 != -1 )
    HvFreeCell(a4, v8);
  if ( (_DWORD)BugCheckParameter4 != -1 )
    CmpDereferenceSecurityNode(a4, (unsigned int)BugCheckParameter4);
  if ( v12 )
    CmpUnlockTwoSecurityCaches(a4, BugCheckParameter3);
  return (unsigned int)SecurityDescriptorNode;
}
