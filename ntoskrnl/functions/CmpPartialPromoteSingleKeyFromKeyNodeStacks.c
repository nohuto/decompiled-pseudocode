__int64 __fastcall CmpPartialPromoteSingleKeyFromKeyNodeStacks(__int16 *a1, __int64 a2)
{
  __int16 v3; // dx
  __int64 EntryAtLayerHeight; // r14
  __int16 v5; // dx
  __int64 v6; // r9
  __int16 v7; // dx
  __int16 *v8; // r10
  __int64 v9; // r15
  int v10; // esi
  __int64 v11; // r13
  __int64 v12; // rax
  __int16 v13; // dx
  signed int v14; // r8d
  unsigned int v15; // eax
  ULONG_PTR v16; // rbp
  unsigned int v17; // edi
  __int64 v18; // rax
  char v19; // cl
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // ax
  __int64 v22; // rdx
  unsigned int *v23; // r8
  __int64 CellFlat; // rax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  v3 = *a1;
  LODWORD(BugCheckParameter4) = -1;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v3);
  v9 = CmpKeyNodeStackGetEntryAtLayerHeight(v6, v5);
  if ( *(_DWORD *)(EntryAtLayerHeight + 8) == -1 )
  {
    v11 = 0LL;
    if ( v7 >= 0 )
    {
      while ( 1 )
      {
        v12 = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)v8, v7);
        if ( *(_DWORD *)(v12 + 8) != -1 )
          break;
        v7 = v13 - 1;
        if ( v7 < 0 )
          goto LABEL_8;
      }
      v11 = v12;
    }
LABEL_8:
    v14 = *(_DWORD *)(v9 + 8);
    if ( v14 >= 0 )
      v15 = *(_DWORD *)(v11 + 8) >> 31;
    else
      v15 = 1;
    v16 = *(_QWORD *)v9;
    v10 = CmpCopyMergeOfLayeredKeyNode(v8, *(_QWORD *)v9, v14, 2, v15, (unsigned int *)&BugCheckParameter4);
    if ( v10 < 0 || (v10 = HvpMarkCellDirty(v16, *(unsigned int *)(v9 + 8), 0), v10 < 0) )
    {
      v17 = BugCheckParameter4;
    }
    else
    {
      v17 = BugCheckParameter4;
      v10 = CmpAddSubKeyEx(v16, *(unsigned int *)(v9 + 8), BugCheckParameter4, 0);
      if ( v10 >= 0 )
      {
        v18 = *(_QWORD *)(v11 + 16);
        v19 = *(_BYTE *)(v18 + 2);
        v20 = *(_WORD *)(v18 + 72);
        v21 = 2 * v20;
        if ( (v19 & 0x20) == 0 )
          v21 = v20;
        v22 = *(_QWORD *)(v9 + 16);
        if ( (unsigned __int16)*(_DWORD *)(v22 + 52) < (unsigned int)v21 )
          *(_WORD *)(v22 + 52) = v21;
        *(_QWORD *)EntryAtLayerHeight = v16;
        v23 = (unsigned int *)(EntryAtLayerHeight + 24);
        *(_DWORD *)(EntryAtLayerHeight + 8) = v17;
        if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v16, v17, v23);
        else
          CellFlat = HvpGetCellPaged(v16, v17, v23);
        *(_QWORD *)(EntryAtLayerHeight + 16) = CellFlat;
        v17 = -1;
        v10 = 0;
      }
    }
    if ( v17 != -1 )
      CmpFreeKeyByCell(v16, v17, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v10;
}
