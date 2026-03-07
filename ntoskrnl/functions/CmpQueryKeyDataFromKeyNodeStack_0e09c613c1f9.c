__int64 __fastcall CmpQueryKeyDataFromKeyNodeStack(__int16 *a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  ULONG_PTR v6; // r14
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdx
  ULONG_PTR v9; // r15
  __int16 v10; // r9
  __int16 v11; // r10
  ULONG_PTR *EntryAtLayerHeight; // rax
  __int64 v13; // rbx
  unsigned int v14; // r13d
  unsigned int v15; // esi
  __int16 v16; // r9
  _QWORD *v17; // rax
  __int16 v18; // r9
  __int16 v19; // r10
  unsigned int v20; // r11d
  __int16 v21; // ax
  __int16 v22; // r9
  __int64 v23; // rdx
  ULONG_PTR v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  __int16 v29; // r9
  __int16 v30; // r10
  __int64 CellFlat; // rax
  int SubKeyCountForKeyNodeStack; // esi
  unsigned int v33; // r9d
  unsigned int v34; // ecx
  unsigned int v35; // edx
  unsigned __int16 v36; // cx
  char v38; // [rsp+40h] [rbp-A8h]
  unsigned int BugCheckParameter4; // [rsp+48h] [rbp-A0h]
  ULONG_PTR BugCheckParameter4a; // [rsp+48h] [rbp-A0h]
  unsigned int v41; // [rsp+50h] [rbp-98h]
  unsigned int v42; // [rsp+54h] [rbp-94h]
  unsigned int v43; // [rsp+58h] [rbp-90h]
  unsigned int v44; // [rsp+68h] [rbp-80h] BYREF
  unsigned int v45; // [rsp+6Ch] [rbp-7Ch] BYREF
  __int64 v46; // [rsp+70h] [rbp-78h] BYREF
  __int128 v47; // [rsp+78h] [rbp-70h] BYREF
  __int128 v48; // [rsp+88h] [rbp-60h]
  __int128 v49; // [rsp+98h] [rbp-50h]
  ULONG_PTR v50; // [rsp+A8h] [rbp-40h]

  v46 = 0LL;
  v44 = 0;
  v45 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v38 = 0;
  v6 = 0LL;
  BugCheckParameter4 = -1;
  HvpGetCellContextReinitialize(&v46);
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v50 = 0LL;
  v10 = *a1;
  v11 = -1;
  if ( *a1 >= 0 )
  {
    while ( 1 )
    {
      EntryAtLayerHeight = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v10);
      if ( EntryAtLayerHeight[2] )
        break;
      v10 += v11;
      if ( v10 < 0 )
      {
        v8 = 0LL;
        goto LABEL_6;
      }
    }
    v8 = *EntryAtLayerHeight;
    v9 = EntryAtLayerHeight[2];
    v50 = v9;
  }
LABEL_6:
  v13 = *(_QWORD *)(v9 + 4);
  v14 = (unsigned __int16)*(_DWORD *)(v9 + 52);
  v41 = *(_DWORD *)(v9 + 56);
  v42 = *(_DWORD *)(v9 + 60);
  v15 = *(_DWORD *)(v9 + 64);
  v43 = v15;
  if ( *(char *)(v9 + 13) >= 0 )
  {
    v38 = 1;
    v6 = v8;
    BugCheckParameter4 = *(_DWORD *)(v9 + 48);
    v7 = *(unsigned __int16 *)(v9 + 74);
  }
  v16 = v11 + v10;
  if ( v16 >= 0 )
  {
    while ( 1 )
    {
      v17 = (_QWORD *)CmpKeyNodeStackGetEntryAtLayerHeight(a1, (unsigned __int16)v16);
      if ( v17[2] )
      {
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(*v17) == 1 )
          goto LABEL_26;
        if ( v13 < *(_QWORD *)(v23 + 4) )
          v13 = *(_QWORD *)(v23 + 4);
        v25 = (unsigned __int16)*(_DWORD *)(v23 + 52);
        if ( v14 >= v25 )
          v25 = v14;
        v14 = v25;
        v26 = *(_DWORD *)(v23 + 56);
        if ( v41 >= v26 )
          v26 = v41;
        v41 = v26;
        v27 = *(_DWORD *)(v23 + 64);
        if ( v15 >= v27 )
          v27 = v15;
        v15 = v27;
        if ( !v38 && *(char *)(v23 + 13) >= 0 )
        {
          v38 = 1;
          v6 = v24;
          BugCheckParameter4 = *(_DWORD *)(v23 + 48);
          v7 = *(unsigned __int16 *)(v23 + 74);
        }
        if ( (unsigned int)CmpGetEffectiveKeyNodeSemantics(v24) )
        {
LABEL_26:
          v43 = v15;
          v42 = v20;
          v9 = v50;
          break;
        }
        v41 = v28;
        v21 = v29;
        v22 = v30;
      }
      else
      {
        v21 = v18;
        v22 = v19;
      }
      v16 = v21 + v22;
      if ( v16 < 0 )
        goto LABEL_26;
    }
  }
  if ( v38 && v7 )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v6, BugCheckParameter4);
    else
      CellFlat = HvpGetCellPaged(v6);
    BugCheckParameter4a = CellFlat;
  }
  else
  {
    BugCheckParameter4a = 0LL;
    v7 = 0;
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      *(_QWORD *)&v47 = v13;
      SubKeyCountForKeyNodeStack = CmpPopulateKeyNodeInformation(&v47, v9, BugCheckParameter4a, v7, a3, a4, a5);
    }
    else
    {
      SubKeyCountForKeyNodeStack = CmpGetSubKeyCountForKeyNodeStack(a1, &v44);
      if ( SubKeyCountForKeyNodeStack >= 0 )
      {
        SubKeyCountForKeyNodeStack = CmpGetValueCountForKeyNodeStack(a1, &v45);
        if ( SubKeyCountForKeyNodeStack >= 0 )
        {
          if ( v44 )
          {
            v33 = v41;
          }
          else
          {
            v14 = 0;
            v33 = 0;
          }
          if ( v45 )
          {
            v34 = v42;
            v35 = v43;
          }
          else
          {
            v34 = 0;
            v35 = 0;
          }
          if ( a2 == 4 )
          {
            *(_QWORD *)&v47 = v13;
            HIDWORD(v47) = v44;
            *(_QWORD *)&v48 = __PAIR64__(v45, v14);
            *((_QWORD *)&v48 + 1) = __PAIR64__(v35, v34);
            v36 = 2 * *(_WORD *)(v9 + 72);
            if ( (*(_BYTE *)(v9 + 2) & 0x20) == 0 )
              v36 = *(_WORD *)(v9 + 72);
            LODWORD(v49) = v36;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyCachedInformation(&v47, a3, a4, a5);
          }
          else if ( a2 == 2 )
          {
            *(_QWORD *)&v47 = v13;
            *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(v14, v44);
            HIDWORD(v48) = v33;
            *(_QWORD *)&v49 = __PAIR64__(v34, v45);
            DWORD2(v49) = v35;
            SubKeyCountForKeyNodeStack = CmpPopulateKeyFullInformation(&v47, BugCheckParameter4a, v7, a3, a4, a5);
          }
          else
          {
            SubKeyCountForKeyNodeStack = -1073741811;
          }
        }
      }
    }
  }
  else
  {
    *(_QWORD *)&v47 = v13;
    SubKeyCountForKeyNodeStack = CmpPopulateKeyBasicInformation((unsigned int)&v47, v9, a3, a4, a5);
  }
  if ( BugCheckParameter4a )
  {
    if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v6, &v46);
    else
      HvpReleaseCellPaged(v6, &v46);
  }
  return (unsigned int)SubKeyCountForKeyNodeStack;
}
