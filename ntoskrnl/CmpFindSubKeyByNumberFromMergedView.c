__int64 __fastcall CmpFindSubKeyByNumberFromMergedView(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned int *a7,
        ULONG_PTR *a8,
        _DWORD *a9)
{
  unsigned int v9; // r9d
  unsigned int v10; // edi
  char v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  ULONG_PTR v15; // rsi
  ULONG_PTR v16; // r15
  __int64 v17; // r13
  int SubKeyByNumber; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  int v23; // r14d
  ULONG_PTR v24; // rcx
  __int64 v25; // rax
  ULONG_PTR v26; // rcx
  __int64 CellFlat; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  char v30; // r12
  int v31; // r14d
  unsigned int v32; // eax
  bool v33; // zf
  int v34; // eax
  bool v35; // sf
  bool v36; // cc
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  char v41; // [rsp+58h] [rbp-61h]
  unsigned int v42; // [rsp+5Ch] [rbp-5Dh] BYREF
  int v43; // [rsp+60h] [rbp-59h]
  BOOL v44; // [rsp+68h] [rbp-51h]
  unsigned int BugCheckParameter4; // [rsp+6Ch] [rbp-4Dh] BYREF
  int BugCheckParameter4_4; // [rsp+70h] [rbp-49h]
  int v47; // [rsp+74h] [rbp-45h]
  __int64 v48; // [rsp+78h] [rbp-41h] BYREF
  __int64 v49; // [rsp+80h] [rbp-39h]
  __int64 v50; // [rsp+88h] [rbp-31h] BYREF
  __int64 v51; // [rsp+90h] [rbp-29h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-21h] BYREF
  ULONG_PTR v53; // [rsp+A0h] [rbp-19h] BYREF

  HIDWORD(v50) = 0;
  v9 = a3;
  HIDWORD(v48) = 0;
  BugCheckParameter4_4 = 0;
  v10 = -1073741670;
  v47 = 0;
  v11 = 0;
  v41 = 0;
  *a6 = 0LL;
  v12 = 0;
  v13 = -1;
  v49 = 0LL;
  v14 = -1;
  LODWORD(v50) = -1;
  v15 = 0LL;
  LODWORD(v48) = -1;
  v16 = 0LL;
  *a7 = -1;
  BugCheckParameter4 = -1;
  v44 = a2 == 0;
  v42 = -1;
  LOBYTE(v43) = 0;
  BugCheckParameter2 = 0LL;
  v53 = 0LL;
LABEL_2:
  v51 = 0LL;
  while ( 1 )
  {
    if ( v11 && v12 >= v9 )
    {
LABEL_85:
      v10 = -2147483622;
      goto LABEL_36;
    }
    if ( v15 )
    {
      CmpDelayDerefKeyControlBlock(v15, a5);
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
    if ( v16 )
    {
      CmpDelayDerefKeyControlBlock(v16, a5);
      v16 = 0LL;
      v53 = 0LL;
    }
    if ( !(_BYTE)v43 && v13 == -1 )
    {
      v17 = a1;
      SubKeyByNumber = CmpFindSubKeyByNumberEx(
                         *(_QWORD *)(a1 + 32),
                         *(unsigned int *)(a1 + 40),
                         BugCheckParameter4_4,
                         &BugCheckParameter4,
                         a1 & -(__int64)(a4 != 0),
                         a2 & -(__int64)(a4 != 0),
                         a4,
                         a5,
                         (ULONG_PTR *)((unsigned __int64)&BugCheckParameter2 & -(__int64)(a4 != 0)));
      v15 = BugCheckParameter2;
      v10 = SubKeyByNumber;
      if ( SubKeyByNumber < 0 )
        goto LABEL_37;
      v13 = BugCheckParameter4;
      v19 = (unsigned __int8)v43;
      if ( BugCheckParameter4 == -1 )
        v19 = 1;
      v43 = v19;
    }
    LOBYTE(v20) = v44;
    if ( !v44 && v14 == -1 )
    {
      v21 = a2;
      v22 = CmpFindSubKeyByNumberEx(
              *(_QWORD *)(a2 + 32),
              *(unsigned int *)(a2 + 40),
              v47,
              &v42,
              a2 & -(__int64)(a4 != 0),
              a1 & -(__int64)(a4 != 0),
              a4,
              a5,
              (ULONG_PTR *)((unsigned __int64)&v53 & -(__int64)(a4 != 0)));
      v16 = v53;
      v10 = v22;
      if ( v22 < 0 )
        goto LABEL_56;
      v14 = v42;
      v20 = v44;
      if ( v42 == -1 )
        v20 = 1;
      v44 = v20;
    }
    if ( (_BYTE)v43 )
    {
      if ( (_BYTE)v20 )
        goto LABEL_85;
      v23 = 2;
    }
    else
    {
      v23 = (_BYTE)v20 != 0;
    }
    if ( v14 != -1 )
    {
      v24 = *(_QWORD *)(a2 + 32);
      v25 = (*(_BYTE *)(v24 + 140) & 1) != 0
          ? HvpGetCellFlat(v24, v14, &v48)
          : HvpGetCellPaged(v24, v14, (unsigned int *)&v48);
      v51 = v25;
      if ( !v25 )
      {
LABEL_35:
        v11 = v41;
LABEL_36:
        v17 = a1;
LABEL_37:
        v21 = a2;
        goto LABEL_38;
      }
    }
    if ( v13 == -1 )
    {
      v28 = v49;
    }
    else
    {
      v26 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v26, v13, &v50);
      else
        CellFlat = HvpGetCellPaged(v26, v13, (unsigned int *)&v50);
      v49 = CellFlat;
      v28 = CellFlat;
      if ( !CellFlat )
        goto LABEL_35;
    }
    v30 = 0;
    if ( !v23 )
      break;
    v31 = v23 - 1;
    if ( !v31 )
    {
      v32 = v12 + 1;
      v11 = 1;
LABEL_58:
      if ( !v41 )
        v32 = v12;
      v12 = v32;
      if ( v32 == a3 )
        goto LABEL_61;
LABEL_70:
      ++BugCheckParameter4_4;
      v13 = -1;
      v41 = 1;
      BugCheckParameter4 = -1;
      if ( v30 )
        goto LABEL_71;
      v14 = v42;
LABEL_74:
      v28 = v49;
      goto LABEL_75;
    }
    if ( v31 == 1 )
    {
      v32 = v12 + 1;
      v11 = 1;
      goto LABEL_50;
    }
    v14 = v42;
LABEL_75:
    if ( v28 )
    {
      v37 = *(_QWORD *)(a1 + 32);
      if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v37, &v50);
      else
        HvpReleaseCellPaged(v37, (unsigned int *)&v50);
      v49 = 0LL;
    }
    v11 = v41;
    v9 = a3;
    if ( v51 )
    {
      v38 = *(_QWORD *)(a2 + 32);
      if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v38, &v48);
      else
        HvpReleaseCellPaged(v38, (unsigned int *)&v48);
      v9 = a3;
      goto LABEL_2;
    }
  }
  v34 = CmpCompareKeysByName(v28, v51);
  v35 = v34 < 0;
  v36 = v34 <= 0;
  v32 = v12 + 1;
  v11 = 1;
  if ( v35 )
    goto LABEL_58;
  if ( v36 )
  {
    if ( !v41 )
      v32 = v12;
    v12 = v32;
    if ( v32 == a3 )
    {
LABEL_61:
      *a6 = *(_QWORD *)(a1 + 32);
      *a7 = v13;
      if ( a8 )
      {
        *a8 = v15;
        v15 = 0LL;
      }
      v10 = 0;
      goto LABEL_36;
    }
    v30 = 1;
    goto LABEL_70;
  }
LABEL_50:
  v33 = v41 == 0;
  v41 = 1;
  if ( v33 )
    v32 = v12;
  v12 = v32;
  if ( v32 != a3 )
  {
LABEL_71:
    v14 = -1;
    ++v47;
    v42 = -1;
    goto LABEL_74;
  }
  v21 = a2;
  *a6 = *(_QWORD *)(a2 + 32);
  *a7 = v42;
  if ( a8 )
  {
    *a8 = v16;
    v16 = 0LL;
  }
  v10 = 0;
LABEL_56:
  v17 = a1;
LABEL_38:
  if ( v15 )
    CmpDelayDerefKeyControlBlock(v15, a5);
  if ( v16 )
    CmpDelayDerefKeyControlBlock(v16, a5);
  if ( v51 )
  {
    v29 = *(_QWORD *)(v21 + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v29, &v48);
    else
      HvpReleaseCellPaged(v29, (unsigned int *)&v48);
  }
  if ( v49 )
  {
    v39 = *(_QWORD *)(v17 + 32);
    if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v39, &v50);
    else
      HvpReleaseCellPaged(v39, (unsigned int *)&v50);
  }
  *a9 = v11 != 0 ? v12 + 1 : 0;
  return v10;
}
