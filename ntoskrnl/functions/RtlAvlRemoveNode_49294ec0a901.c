char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v4; // r11
  unsigned __int64 v5; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  char v9; // r8
  char v10; // al
  _BYTE *v11; // rdi
  unsigned __int8 v12; // bl
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  bool v15; // zf
  _QWORD *v16; // r10
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 v19; // r10
  __int64 v20; // rbx
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rbp
  char v24; // r10
  __int64 v25; // r11
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rbx
  char v33; // r9
  unsigned __int8 v34; // cl

  v2 = *a2;
  v4 = a2[1];
  v5 = v4;
  if ( *a2 )
    v5 = *a2;
  v7 = 0LL;
  if ( v2 )
    v7 = a2[1];
  if ( !v7 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 )
    {
      if ( *(unsigned __int64 **)(v5 + 16) != a2 )
        goto LABEL_77;
      *(_QWORD *)(v5 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v5;
        goto LABEL_11;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v5;
        goto LABEL_11;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v5;
      return v7;
    }
LABEL_77:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v31 = *(_QWORD **)(v2 + 8);
    v17 = *a2;
    v8 = *a2;
    v18 = 0;
    if ( v31 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v31;
        v31 = (_QWORD *)v31[1];
      }
      while ( v31 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v4;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v4 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v4;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v4 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_77;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = 3;
  if ( !v18 )
    v9 = 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v22 )
  {
    if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v17;
      goto LABEL_11;
    }
    goto LABEL_77;
  }
  v30 = 0LL;
  if ( *(unsigned __int64 **)(v22 + 8) == a2 )
    v30 = 8LL;
  if ( *(unsigned __int64 **)(v30 + v22) != a2 )
    goto LABEL_77;
  *(_QWORD *)(v30 + v22) = v17;
  while ( 1 )
  {
LABEL_11:
    v10 = *(_BYTE *)(v8 + 16);
    v11 = (_BYTE *)(v8 + 16);
    v12 = v10 & 3;
    if ( (v10 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v7) = v10 & 0xFC;
      *v11 = v7;
      v13 = *(_QWORD *)v11;
      goto LABEL_16;
    }
    if ( !v12 )
    {
      LOBYTE(v7) = v9 | v10 & 0xFC;
      *v11 = v7;
      return v7;
    }
    v13 = *(_QWORD *)v11;
    v23 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v23 = *(_QWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v23 + 16) & 3;
    if ( v24 != ((unsigned __int8)v9 ^ 2) )
      break;
    v7 = RtlpTreeDoubleRotateNodes(a1, v8, v23, v9 == 1);
    *v11 &= 0xFCu;
    v8 = v7;
    v33 = *(_BYTE *)(v23 + 16) & 0xFC;
    *(_BYTE *)(v23 + 16) = v33;
    v34 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v34 & 3;
    if ( v12 == (_DWORD)v7 )
    {
      *v11 ^= (*v11 ^ v12 ^ 0xFE) & 3;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
    else
    {
      if ( v12 == ((v34 ^ 0xFE) & 3) )
        *(_BYTE *)(v23 + 16) = v12 | v33;
      *(_BYTE *)(v8 + 16) &= 0xFCu;
    }
LABEL_16:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v7;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_77;
  v25 = 8LL;
  if ( v9 != 1 )
    v25 = 0LL;
  if ( *(_QWORD *)(v25 + v8) != v23 )
    goto LABEL_77;
  v26 = *(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 )
  {
    if ( *(_QWORD *)(v26 + 8) == v8 )
    {
      *(_QWORD *)(v26 + 8) = v23;
    }
    else
    {
      if ( *(_QWORD *)v26 != v8 )
        goto LABEL_77;
      *(_QWORD *)v26 = v23;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_77;
    *a1 = v23;
  }
  v27 = v26 | *(_DWORD *)(v23 + 16) & 3;
  v28 = 0LL;
  *(_QWORD *)(v23 + 16) = v27;
  if ( v9 != 1 )
    v28 = 8LL;
  v29 = *(_QWORD *)(v28 + v23);
  if ( v29 )
  {
    v32 = *(_QWORD *)(v29 + 16);
    if ( (v32 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
      goto LABEL_77;
    *(_QWORD *)(v29 + 16) = v8 | v32 & 3;
  }
  *(_QWORD *)(v25 + v8) = v29;
  *(_QWORD *)(v28 + v23) = v8;
  *(_QWORD *)v11 = v23 | *(_DWORD *)v11 & 3;
  LOBYTE(v7) = *(_BYTE *)(v23 + 16) & 0xFC;
  if ( v24 )
  {
    *(_BYTE *)(v23 + 16) = v7;
    v8 = v23;
    *v11 &= 0xFCu;
    goto LABEL_16;
  }
  *(_BYTE *)(v23 + 16) = v7 | (v9 ^ 0xFE) & 3;
  return v7;
}
