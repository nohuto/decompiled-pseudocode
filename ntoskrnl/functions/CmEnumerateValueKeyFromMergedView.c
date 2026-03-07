__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *Size,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  char v10; // r15
  __int64 v12; // rsi
  int KeyValueData; // ebx
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r13
  char v21; // al
  unsigned __int64 v22; // rax
  unsigned int *v23; // rsi
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 CellFlat; // rax
  ULONG_PTR *v27; // r14
  ULONG_PTR v28; // rcx
  ULONG_PTR v29; // rdx
  __int64 CellPaged; // rax
  __int64 v31; // r12
  unsigned int v32; // r15d
  unsigned int v33; // r12d
  __int64 v34; // rsi
  ULONG_PTR v35; // rcx
  ULONG_PTR v36; // rdx
  __int64 v37; // rax
  ULONG_PTR v38; // r15
  ULONG_PTR v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r12
  __int16 v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  __int64 v46; // rcx
  unsigned int v47; // ecx
  ULONG_PTR v48; // rcx
  ULONG_PTR v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  ULONG_PTR v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v59; // [rsp+48h] [rbp-79h]
  __int64 v60; // [rsp+50h] [rbp-71h] BYREF
  int v61[2]; // [rsp+58h] [rbp-69h] BYREF
  int v62; // [rsp+60h] [rbp-61h]
  __int64 v63; // [rsp+68h] [rbp-59h] BYREF
  unsigned int *v64; // [rsp+70h] [rbp-51h]
  __int64 v65; // [rsp+78h] [rbp-49h]
  int v66; // [rsp+80h] [rbp-41h] BYREF
  int v67; // [rsp+84h] [rbp-3Dh]
  __int64 v68; // [rsp+88h] [rbp-39h] BYREF
  __int64 v69; // [rsp+90h] [rbp-31h] BYREF
  __int64 v70; // [rsp+98h] [rbp-29h] BYREF
  _DWORD *v71; // [rsp+A0h] [rbp-21h]
  __int64 v72; // [rsp+A8h] [rbp-19h]
  __int64 v73; // [rsp+B0h] [rbp-11h]
  __int128 v74; // [rsp+B8h] [rbp-9h] BYREF
  unsigned int v75; // [rsp+108h] [rbp+47h]
  char v76; // [rsp+118h] [rbp+57h]
  unsigned int v77; // [rsp+120h] [rbp+5Fh]

  v77 = a4;
  v76 = a3;
  *(_QWORD *)v61 = 0LL;
  v72 = 0LL;
  v69 = 0xFFFFFFFFLL;
  v10 = a3;
  v65 = 0LL;
  v70 = 0xFFFFFFFFLL;
  v12 = 0LL;
  KeyValueData = 0;
  v64 = 0LL;
  v14 = 0LL;
  v71 = 0LL;
  v62 = 0;
  v75 = 0;
  v59 = 0LL;
  v63 = 0xFFFFFFFFLL;
  v68 = 0xFFFFFFFFLL;
  v60 = 0xFFFFFFFFLL;
  v66 = 0;
  v74 = 0LL;
  if ( !(_BYTE)a3 )
    CmpLockRegistry(0xFFFFFFFFLL, a2, a3, a4);
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, v61);
    if ( KeyValueData < 0 )
    {
      if ( !v10 )
        goto LABEL_102;
      return (unsigned int)KeyValueData;
    }
    v12 = *(_QWORD *)v61;
  }
  v19 = *(_QWORD *)(a2 + 8);
  v20 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v61 = v19;
  if ( !v76 )
    CmpLockTwoKcbsShared(v20, v19);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v12) )
  {
    v21 = *(_BYTE *)(a1 + 48);
LABEL_13:
    KeyValueData = (v21 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_100;
  }
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v12) )
  {
    v21 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_24;
  if ( *(_QWORD *)(v20 + 288) == v12 )
  {
    v22 = v20 + 280;
    v64 = (unsigned int *)(v20 + 280);
  }
  else
  {
    v22 = 0LL;
  }
  if ( *(_QWORD *)(v19 + 288) == v12 )
  {
    v14 = v19 + 280;
    v71 = (_DWORD *)(v19 + 280);
  }
  if ( v22 )
  {
    v23 = v64;
  }
  else
  {
LABEL_24:
    v24 = *(_QWORD *)(v20 + 32);
    v25 = *(unsigned int *)(v20 + 40);
    if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(v24, v25, &v69);
    else
      CellFlat = HvpGetCellPaged(v24, v25, (unsigned int *)&v69);
    v72 = CellFlat;
    if ( !CellFlat )
    {
      KeyValueData = -1073741670;
      goto LABEL_100;
    }
    v23 = (unsigned int *)(CellFlat + 36);
    v64 = (unsigned int *)(CellFlat + 36);
  }
  v27 = (ULONG_PTR *)(v19 + 32);
  if ( v14 )
    goto LABEL_37;
  v28 = *v27;
  v29 = *(unsigned int *)(v19 + 40);
  if ( (*(_BYTE *)(*v27 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(v28, v29, &v70);
  else
    CellPaged = HvpGetCellPaged(v28, v29, (unsigned int *)&v70);
  v65 = CellPaged;
  v31 = CellPaged;
  if ( CellPaged )
  {
    v71 = (_DWORD *)(CellPaged + 36);
LABEL_37:
    v32 = 0;
    v33 = 0;
    while ( v33 < *v23 )
    {
      v34 = v59;
      if ( !v59 )
      {
        v35 = *(_QWORD *)(v20 + 32);
        v36 = v64[1];
        v37 = (*(_BYTE *)(v35 + 140) & 1) != 0
            ? HvpGetCellFlat(v35, v36, &v63)
            : HvpGetCellPaged(v35, v36, (unsigned int *)&v63);
        v59 = v37;
        v34 = v37;
        if ( !v37 )
        {
          KeyValueData = -1073741670;
          goto LABEL_91;
        }
      }
      v38 = *(_QWORD *)(v20 + 32);
      v39 = *(unsigned int *)(v34 + 4LL * v33);
      v67 = *(_DWORD *)(v34 + 4LL * v33);
      if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
        v40 = HvpGetCellFlat(v38, v39, &v60);
      else
        v40 = HvpGetCellPaged(v38, v39, (unsigned int *)&v60);
      v41 = v40;
      if ( !v40 )
      {
        KeyValueData = -1073741670;
LABEL_66:
        v45 = 0LL;
        goto LABEL_83;
      }
      v42 = *(_WORD *)(v40 + 16);
      *((_QWORD *)&v74 + 1) = v40 + 20;
      LOWORD(v74) = *(_WORD *)(v40 + 2);
      v73 = *(_QWORD *)v61 + 32LL;
      if ( CmpFindNameInList(
             *(_QWORD *)(*(_QWORD *)v61 + 32LL),
             (__int64)v71,
             (__int64)&v74,
             (unsigned __int8)(v42 & 1) << 16,
             0LL,
             (__int64)&v66)
        && v66 == -1 )
      {
        if ( v75 == v77 )
        {
          v46 = v20;
          v45 = 0LL;
          goto LABEL_80;
        }
        v32 = ++v75;
      }
      else
      {
        v32 = v75;
      }
      v43 = *(_QWORD *)(v20 + 32);
      v33 = ++v62;
      if ( (*(_BYTE *)(v43 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v43, &v60);
      else
        HvpReleaseCellPaged(v43, (unsigned int *)&v60);
      if ( v34 )
      {
        v44 = *(_QWORD *)(v20 + 32);
        if ( (*(_BYTE *)(v44 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v44, &v63);
        else
          HvpReleaseCellPaged(v44, (unsigned int *)&v63);
        v59 = 0LL;
      }
      v45 = 0LL;
      if ( v32 > v77 )
        goto LABEL_83;
      v27 = (ULONG_PTR *)v73;
      v23 = v64;
    }
    v47 = v32 + *v71;
    if ( v47 <= v77 )
    {
      KeyValueData = -2147483622;
      if ( a9 )
        *a9 = v47;
      goto LABEL_66;
    }
    v48 = *v27;
    v49 = (unsigned int)v71[1];
    if ( (*(_BYTE *)(*v27 + 140) & 1) != 0 )
      v50 = HvpGetCellFlat(v48, v49, &v68);
    else
      v50 = HvpGetCellPaged(v48, v49, (unsigned int *)&v68);
    v45 = v50;
    if ( !v50
      || ((v51 = v77 - v75,
           v38 = *v27,
           v52 = *(unsigned int *)(v50 + 4 * v51),
           v67 = *(_DWORD *)(v50 + 4 * v51),
           (*(_BYTE *)(v38 + 140) & 1) == 0)
        ? (v53 = HvpGetCellPaged(v38, v52, (unsigned int *)&v60))
        : (v53 = HvpGetCellFlat(v38, v52, &v60)),
          (v41 = v53) == 0) )
    {
      KeyValueData = -1073741670;
      goto LABEL_83;
    }
    v46 = *(_QWORD *)v61;
LABEL_80:
    KeyValueData = CmpQueryKeyValueData(v46, (unsigned int)v67, v41, a5, Size, a7, a8);
    if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v38, &v60);
    else
      HvpReleaseCellPaged(v38, (unsigned int *)&v60);
LABEL_83:
    if ( v59 )
    {
      v54 = *(_QWORD *)(v20 + 32);
      if ( (*(_BYTE *)(v54 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v54, &v63);
      else
        HvpReleaseCellPaged(v54, (unsigned int *)&v63);
    }
    if ( v45 )
    {
      v55 = *v27;
      if ( (*(_BYTE *)(*v27 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v55, &v68);
      else
        HvpReleaseCellPaged(v55, (unsigned int *)&v68);
    }
LABEL_91:
    v31 = v65;
    v19 = *(_QWORD *)v61;
    goto LABEL_92;
  }
  KeyValueData = -1073741670;
LABEL_92:
  if ( v72 )
  {
    v56 = *(_QWORD *)(v20 + 32);
    if ( (*(_BYTE *)(v56 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v56, &v69);
    else
      HvpReleaseCellPaged(v56, (unsigned int *)&v69);
  }
  if ( v31 )
  {
    v57 = *v27;
    if ( (*(_BYTE *)(*v27 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v57, &v70);
    else
      HvpReleaseCellPaged(v57, (unsigned int *)&v70);
  }
LABEL_100:
  if ( !v76 )
  {
    CmpUnlockTwoKcbs(v20, v19);
LABEL_102:
    CmpUnlockRegistry(v16, v15, v17, v18);
  }
  return (unsigned int)KeyValueData;
}
