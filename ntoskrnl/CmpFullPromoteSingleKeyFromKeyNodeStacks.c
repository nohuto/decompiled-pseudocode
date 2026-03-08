/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A23124
 * Callers:
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x140A23050 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSubtree @ 0x140A23F00 (CmpPromoteSubtree.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x1404632F4 (CmpValueEnumStackGetCurrentValueHive.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140614374 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCopyCell @ 0x14078F10C (CmpCopyCell.c)
 *     CmpAddValueToListEx @ 0x1407A5A94 (CmpAddValueToListEx.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpCopyValue @ 0x1408A6FF4 (CmpCopyValue.c)
 *     CmpConcatenateValueLists @ 0x140A1E25C (CmpConcatenateValueLists.c)
 *     CmpFreeKeyValueList @ 0x140A1F10C (CmpFreeKeyValueList.c)
 *     CmpValueEnumStackAdvance @ 0x140A228A4 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x140A22A28 (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x140A22A88 (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  __int64 v2; // r15
  __int16 *v3; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  __int16 v7; // dx
  __int64 EntryAtLayerHeight; // rdi
  ULONG_PTR v9; // rsi
  unsigned int v10; // r13d
  __int16 v11; // dx
  __int16 v12; // dx
  __int16 v13; // r9
  ULONG_PTR *v14; // r13
  ULONG_PTR v15; // rcx
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  ULONG_PTR CurrentValueHive; // rax
  int v20; // ebx
  __int64 CellFlat; // rax
  unsigned __int16 v22; // dx
  unsigned __int16 v23; // cx
  bool v24; // zf
  unsigned int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // eax
  unsigned __int16 v30; // r13
  ULONG_PTR v31; // rdx
  __int64 v32; // rcx
  char v33; // al
  __int64 v34; // rax
  ULONG_PTR v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int16 v39; // [rsp+30h] [rbp-89h]
  int v40; // [rsp+34h] [rbp-85h]
  unsigned int v41; // [rsp+34h] [rbp-85h]
  ULONG_PTR v42; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v43; // [rsp+40h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+44h] [rbp-75h] BYREF
  __int16 v45; // [rsp+4Ch] [rbp-6Dh]
  __int64 v46; // [rsp+50h] [rbp-69h] BYREF
  __int64 v47; // [rsp+58h] [rbp-61h] BYREF
  __int16 *v48; // [rsp+60h] [rbp-59h]
  ULONG_PTR BugCheckParameter4[12]; // [rsp+70h] [rbp-49h] BYREF

  v2 = 0LL;
  v48 = a2;
  v3 = a2;
  v46 = 0LL;
  memset(BugCheckParameter4, 0, 0x58uLL);
  v39 = 0;
  v5 = -1;
  LODWORD(v42) = -1;
  BugCheckParameter3 = -1LL;
  v6 = -1;
  v43 = 0;
  v47 = 0xFFFFFFFF00000000uLL;
  HvpGetCellContextReinitialize(&v46);
  CmpValueEnumStackInitialize(BugCheckParameter4);
  v45 = *v3;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v3, v45);
  if ( a1 )
    v2 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v7);
  v9 = *(_QWORD *)EntryAtLayerHeight;
  v10 = *(_DWORD *)(EntryAtLayerHeight + 8) >> 31;
  v40 = v10;
  if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) < 0 )
  {
    v11 = v7 - 1;
    if ( v11 >= 0 )
    {
      while ( 1 )
      {
        v14 = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v3, v11);
        v15 = v14[2];
        if ( v15 )
        {
          if ( *(char *)(v15 + 13) >= (char)v13 )
            break;
        }
        v11 = v12 - 1;
        if ( v11 < 0 )
          goto LABEL_12;
      }
      if ( *(_WORD *)(v15 + 74) != v13 )
      {
        v16 = CmpCopyCell(*v14, *(unsigned int *)(v15 + 48), v9, v40, (int *)&v42);
        v5 = v42;
        v17 = v16;
        if ( v16 < 0 )
          goto LABEL_61;
        v3 = v48;
        v39 = *(_WORD *)(v14[2] + 74);
      }
LABEL_12:
      v10 = v40;
    }
  }
  v17 = CmpValueEnumStackStartFromKeyNodeStack((__int64)BugCheckParameter4, v3);
  if ( v17 >= 0 )
  {
    LODWORD(v42) = 0;
    v41 = 0;
    while ( 1 )
    {
      v18 = CmpValueEnumStackAdvance((__int64)BugCheckParameter4);
      v17 = v18;
      if ( v18 == -2147483622 )
        break;
      if ( v18 < 0 )
        goto LABEL_61;
      if ( HIWORD(BugCheckParameter4[0]) != v45 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)BugCheckParameter4);
        v17 = CmpCopyValue(
                CurrentValueHive,
                LODWORD(BugCheckParameter4[0]),
                v9,
                v10,
                (unsigned int *)&BugCheckParameter3 + 1);
        if ( v17 < 0 )
          goto LABEL_61;
        v20 = HIDWORD(BugCheckParameter3);
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v9, HIDWORD(BugCheckParameter3), &v46);
        else
          CellFlat = HvpGetCellPaged(v9, HIDWORD(BugCheckParameter3), (unsigned int *)&v46);
        v22 = *(_WORD *)(CellFlat + 2);
        v23 = 2 * v22;
        v24 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
        v25 = *(_DWORD *)(CellFlat + 4);
        if ( v24 )
          v23 = v22;
        v26 = v23;
        v27 = v25 + 0x80000000;
        if ( v25 < 0x80000000 )
          v27 = v25;
        v28 = v42;
        if ( v27 > (unsigned int)v42 )
          v28 = v27;
        LODWORD(v42) = v28;
        if ( v26 <= v41 )
          v26 = v41;
        v41 = v26;
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, &v46);
        else
          HvpReleaseCellPaged(v9, (unsigned int *)&v46);
        v17 = CmpAddValueToListEx(v9, v20, v43, 1, &v43, 1);
        if ( v17 < 0 )
          goto LABEL_61;
        HIDWORD(BugCheckParameter3) = -1;
      }
    }
    if ( !v43
      || (v29 = CmpConcatenateValueLists(
                  v9,
                  (unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL),
                  &v43,
                  v10,
                  (unsigned int *)&v47),
          v6 = HIDWORD(v47),
          v17 = v29,
          v29 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
        goto LABEL_43;
      v17 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0);
      if ( v17 < 0 )
        goto LABEL_61;
      if ( v2 )
      {
        v30 = v39;
        if ( *(_DWORD *)(*(_QWORD *)(v2 + 16) + 56LL) < (unsigned int)v39 )
        {
          v17 = HvpMarkCellDirty(*(_QWORD *)v2, *(unsigned int *)(v2 + 8), 0);
          if ( v17 < 0 )
            goto LABEL_61;
        }
      }
      else
      {
LABEL_43:
        v30 = v39;
      }
      if ( v6 == -1
        || (v17 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0), v17 >= 0)
        && ((v31 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL), (_DWORD)v31 == -1)
         || (v17 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v31, 0), v17 >= 0)) )
      {
        v32 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v33 = *(_BYTE *)(v32 + 13);
        if ( v33 < 0 )
        {
          *(_BYTE *)(v32 + 13) = v33 & 0x7F;
          *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 48LL) = v5;
          v5 = -1;
          *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v30;
          if ( v2 )
          {
            v34 = *(_QWORD *)(v2 + 16);
            if ( *(_DWORD *)(v34 + 56) < (unsigned int)v30 )
              *(_DWORD *)(v34 + 56) = v30;
          }
        }
        if ( v6 != -1 )
        {
          v35 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL);
          if ( (_DWORD)v35 != -1 )
            HvFreeCell(*(_QWORD *)EntryAtLayerHeight, v35);
          v6 = -1;
          *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL) = v47;
          v36 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v36 + 64) < (unsigned int)v42 )
            *(_DWORD *)(v36 + 64) = v42;
          v37 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v37 + 60) < v41 )
            *(_DWORD *)(v37 + 60) = v41;
          HvFreeCell(v9, (unsigned int)BugCheckParameter3);
          v43 = 0;
          LODWORD(BugCheckParameter3) = -1;
        }
        v17 = 0;
      }
    }
  }
LABEL_61:
  CmpValueEnumStackCleanup((__int64)BugCheckParameter4);
  if ( (_DWORD)BugCheckParameter3 != -1 )
    CmpFreeKeyValueList(v9, &v43);
  if ( v6 != -1 )
    HvFreeCell(v9, v6);
  if ( v5 != -1 )
    HvFreeCell(v9, v5);
  return (unsigned int)v17;
}
