__int64 __fastcall PnpGetDeviceLocationStrings(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rbx
  _BYTE *v4; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // r15
  PVOID *v9; // r13
  _DWORD *v10; // r12
  int v11; // r15d
  unsigned int v12; // r13d
  int v13; // edi
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edx
  _WORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  size_t v21; // r14
  void *v22; // rax
  _WORD *v23; // rax
  unsigned int v24; // r12d
  int v25; // ebx
  char v26; // dl
  char v27; // r8
  __int64 v28; // rcx
  void *v29; // rax
  unsigned int v30; // r10d
  char *v31; // rbx
  unsigned int v32; // esi
  unsigned int v33; // edi
  unsigned int v34; // r12d
  unsigned int v35; // eax
  char *v36; // r14
  char v37; // r13
  char v38; // r9
  char v39; // r15
  unsigned int v40; // edx
  _WORD *v41; // rsi
  char v42; // dl
  char v43; // r8
  __int64 v44; // r8
  __int64 v45; // rcx
  char *v46; // r14
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  PVOID *v50; // rbx
  int v52; // r11d
  unsigned int v53; // [rsp+38h] [rbp-69h]
  int v54; // [rsp+3Ch] [rbp-65h]
  unsigned int v55; // [rsp+40h] [rbp-61h]
  void *Src; // [rsp+48h] [rbp-59h] BYREF
  int v57; // [rsp+50h] [rbp-51h]
  unsigned int v58; // [rsp+54h] [rbp-4Dh]
  unsigned int v59; // [rsp+58h] [rbp-49h]
  PVOID P; // [rsp+60h] [rbp-41h]
  unsigned int v61; // [rsp+68h] [rbp-39h]
  int v62; // [rsp+6Ch] [rbp-35h]
  __int64 Pool2; // [rsp+70h] [rbp-31h]
  PVOID v64; // [rsp+78h] [rbp-29h]
  __int64 v65; // [rsp+80h] [rbp-21h]
  int v66; // [rsp+88h] [rbp-19h]
  __int128 v67; // [rsp+90h] [rbp-11h] BYREF
  __int128 v68; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v69)(_QWORD, void **); // [rsp+B0h] [rbp+Fh]
  __int64 v70; // [rsp+108h] [rbp+67h]
  char v71; // [rsp+108h] [rbp+67h]

  v70 = a1;
  v3 = a1;
  Src = 0LL;
  v69 = 0LL;
  LOBYTE(v57) = 0;
  v58 = -1;
  v53 = -1;
  v4 = 0LL;
  v64 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = IopRootDeviceNode;
  *a2 = 0LL;
  *a3 = 0;
  if ( (_QWORD *)v3 == v5 )
    return 3221225486LL;
  LODWORD(v6) = 0;
  v7 = (_QWORD *)v3;
  do
  {
    v7 = (_QWORD *)v7[2];
    v6 = (unsigned int)(v6 + 1);
  }
  while ( v7 != v5 );
  v8 = (unsigned int)v6;
  v62 = v6;
  v65 = (unsigned int)v6;
  P = (PVOID)ExAllocatePool2(256LL, 8 * v6, 1970499664LL);
  v9 = (PVOID *)P;
  if ( !P )
    return (unsigned int)-1073741670;
  Pool2 = ExAllocatePool2(256LL, 4 * v6, 1970499664LL);
  v10 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_90;
  }
  v11 = 1;
  v54 = 1;
  v12 = 0;
  if ( (PVOID)v3 == IopRootDeviceNode )
    goto LABEL_53;
  while ( 1 )
  {
    v13 = PnpQueryInterface(*(PVOID *)(v3 + 32), 0LL, &v67);
    if ( v13 < 0 )
    {
      v4 = 0LL;
      goto LABEL_89;
    }
    if ( !v69 )
    {
      v13 = -1073741823;
      goto LABEL_42;
    }
    Src = 0LL;
    v13 = v69(*((_QWORD *)&v67 + 1), &Src);
    if ( v13 < 0 )
      goto LABEL_111;
    if ( !Src )
    {
      v13 = -1073741637;
LABEL_111:
      if ( Src )
      {
        ExFreePoolWithTag(Src, 0);
        Src = 0LL;
      }
      goto LABEL_42;
    }
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v10[v12] = 0;
    v17 = Src;
    if ( *(_WORD *)Src )
    {
      do
      {
        ++v14;
        v18 = -1LL;
        v10[v12] = v14;
        do
          ++v18;
        while ( v17[v18] );
        v15 += v18 + 1;
        v19 = -1LL;
        do
          ++v19;
        while ( v17[v19] );
        if ( (unsigned int)v19 <= v16 )
          LODWORD(v19) = v16;
        v16 = v19;
        v20 = -1LL;
        do
          ++v20;
        while ( v17[v20] );
        v17 += v20 + 1;
      }
      while ( *v17 );
      v3 = v70;
    }
    LODWORD(v4) = v16 + (_DWORD)v4;
    v21 = 2LL * (unsigned int)(v15 + 1);
    v54 *= v14;
    v22 = (void *)ExAllocatePool2(256LL, v21, 1970499664LL);
    *((_QWORD *)P + v12) = v22;
    if ( v22 )
    {
      memmove(v22, Src, v21);
      v23 = (_WORD *)*((_QWORD *)P + v12);
      if ( *v23 )
      {
        v24 = v58;
        LOBYTE(v25) = v57;
        while ( 1 )
        {
          v26 = 0;
          v27 = 0;
          while ( 1 )
          {
            if ( *v23 == 33 )
            {
              v26 = 1;
              goto LABEL_50;
            }
            if ( *v23 != 64 )
              break;
            v27 = 1;
LABEL_50:
            ++v23;
          }
          v25 = (unsigned __int8)v25;
          if ( v27 )
            v25 = 1;
          if ( v26 && v24 == -1 )
            v24 = v12;
          v28 = -1LL;
          do
            ++v28;
          while ( v23[v28] );
          v23 += v28 + 1;
          if ( !*v23 )
          {
            v57 = v25;
            v3 = v70;
            v58 = v24;
            v10 = (_DWORD *)Pool2;
            break;
          }
        }
      }
      ++v12;
    }
    else
    {
      v13 = -1073741670;
    }
    ExFreePoolWithTag(Src, 0);
    LODWORD(v6) = v62;
    Src = 0LL;
LABEL_42:
    if ( *((_QWORD *)&v68 + 1) )
      (*((void (__fastcall **)(_QWORD))&v68 + 1))(*((_QWORD *)&v67 + 1));
    if ( v13 < 0 )
    {
      v4 = v64;
      goto LABEL_89;
    }
    if ( v13 == 288 || v12 == (_DWORD)v6 )
      break;
    v3 = *(_QWORD *)(v3 + 16);
    LODWORD(v4) = (_DWORD)v4 + 1;
    v70 = v3;
    if ( (PVOID)v3 == IopRootDeviceNode )
      goto LABEL_52;
  }
  LODWORD(v4) = (_DWORD)v4 + 1;
LABEL_52:
  v11 = v54;
LABEL_53:
  v66 = 0;
  v13 = 0;
  v29 = (void *)ExAllocatePool2(256LL, 2LL * (unsigned int)(v11 * (_DWORD)v4 + 1), 1970499664LL);
  v64 = v29;
  v4 = v29;
  if ( !v29 )
  {
    v13 = -1073741670;
    goto LABEL_89;
  }
  v59 = 0;
  v30 = v12 - 1;
  v55 = v12 - 1;
  v31 = (char *)v29;
  v32 = 0;
  if ( !v11 )
    goto LABEL_88;
  v33 = v54;
  while ( 2 )
  {
    v34 = v30;
    v35 = v33;
    v36 = v31;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    while ( 2 )
    {
      v61 = v35;
      v71 = v38;
      v40 = v32 / (v35 / *(_DWORD *)(Pool2 + 4LL * v34)) % *(_DWORD *)(Pool2 + 4LL * v34);
      v41 = (_WORD *)*((_QWORD *)P + v34);
      if ( v40 )
      {
        v48 = v40;
        do
        {
          v49 = -1LL;
          do
            ++v49;
          while ( v41[v49] );
          v41 += v49 + 1;
          --v48;
        }
        while ( v48 );
        v33 = v54;
      }
      v42 = 0;
      v43 = 0;
      while ( 2 )
      {
        if ( *v41 == 33 )
        {
          v42 = 1;
LABEL_73:
          ++v41;
          continue;
        }
        break;
      }
      if ( *v41 == 64 )
      {
        v43 = 1;
        goto LABEL_73;
      }
      if ( v34 == v30 )
      {
        v71 = v42;
        v37 = v42;
        v38 = v42;
        v39 = v42;
        if ( v42 )
        {
          v53 = v34;
          goto LABEL_63;
        }
        v53 = -1;
LABEL_75:
        v71 = 0;
        goto LABEL_65;
      }
      if ( !v42 )
        goto LABEL_75;
LABEL_63:
      if ( !(_BYTE)v57 && !v39 )
        goto LABEL_86;
      v53 = v34;
      v37 = 1;
      v39 = v38 != 0 ? v39 : 0;
LABEL_65:
      if ( v43 )
      {
        v52 = -1;
        v71 = v42;
        v36 = v31;
        v37 = v42;
        v39 = v42;
        if ( v42 )
          v52 = v34;
        v53 = v52;
      }
      v44 = -1LL;
      do
        ++v44;
      while ( v41[v44] );
      memmove(v36, v41, 2 * v44);
      v45 = -1LL;
      do
        ++v45;
      while ( v41[v45] );
      v46 = &v36[2 * v45];
      if ( v34 )
      {
        v47 = Pool2;
        v38 = v71;
        v32 = v59;
        v30 = v55;
        *(_WORD *)v46 = 35;
        v36 = v46 + 2;
        v35 = v61 / *(_DWORD *)(v47 + 4LL * v34--);
        continue;
      }
      break;
    }
    if ( !v37 || v39 && v53 <= v58 )
    {
      *(_WORD *)v46 = 0;
      v31 = v46 + 2;
    }
    v30 = v55;
LABEL_86:
    v32 = v59 + 1;
    v59 = v32;
    if ( v32 < v33 )
      continue;
    break;
  }
  v13 = v66;
  v10 = (_DWORD *)Pool2;
LABEL_88:
  v4 = v64;
  *(_WORD *)v31 = 0;
  *a2 = v4;
  *a3 = (v31 - v4 + 2) >> 1;
LABEL_89:
  v8 = v65;
  v9 = (PVOID *)P;
LABEL_90:
  if ( v62 )
  {
    v50 = v9;
    do
    {
      if ( *v50 )
        ExFreePoolWithTag(*v50, 0);
      ++v50;
      --v8;
    }
    while ( v8 );
  }
  ExFreePoolWithTag(v9, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( v13 < 0 )
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v13;
}
