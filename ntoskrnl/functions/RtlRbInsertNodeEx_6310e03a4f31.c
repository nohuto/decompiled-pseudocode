char __fastcall RtlRbInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v4; // bl
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  char v9; // r14
  char v10; // cl
  _BYTE *v11; // rdi
  unsigned __int64 v12; // rsi
  __int64 v13; // r11
  unsigned __int64 v14; // r8
  int v15; // r15d
  int v16; // ebp
  __int64 v17; // r13
  __int64 v18; // r12
  __int64 v19; // r11
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r14
  _DWORD *v23; // r11
  __int64 v24; // rbp
  unsigned __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 *v27; // rsi
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rbx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rbp
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // r11d
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 *v45; // rsi
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rbx
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  unsigned __int64 v57; // [rsp+48h] [rbp+10h]

  v4 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  LOBYTE(v6) = a1[1] & 1;
  if ( !a2 )
  {
    v20 = a4 ^ (unsigned __int64)a1;
    if ( (_BYTE)v6 )
    {
      *a1 = v20;
      a1[1] = v20;
      *((_BYTE *)a1 + 8) = v20 | 1;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    else
    {
      *a1 = a4;
      a1[1] = a4;
      *(_QWORD *)(a4 + 16) = 0LL;
    }
    return v6;
  }
  v7 = a4 ^ a2;
  if ( !(_BYTE)v6 )
    v7 = a4;
  *(_QWORD *)(a2 + 8LL * a3) = v7;
  v8 = a2;
  if ( (a1[1] & 1) != 0 )
    v8 = a4 ^ a2;
  *(_QWORD *)(a4 + 16) = v8 | 1;
  if ( a3 )
    goto LABEL_7;
  v6 = a1[1];
  if ( (v6 & 1) == 0 )
  {
    v37 = a1[1];
    goto LABEL_53;
  }
  if ( v6 != 1 )
  {
    v37 = v6 ^ ((unsigned __int64)a1 | 1);
LABEL_53:
    if ( a2 == v37 )
    {
      if ( (v6 & 1) != 0 )
      {
        a1[1] = a4 ^ (unsigned __int64)a1;
        LOBYTE(v6) = a4 ^ (unsigned __int8)a1 | 1;
        *((_BYTE *)a1 + 8) = v6;
      }
      else
      {
        a1[1] = a4;
      }
    }
  }
LABEL_7:
  if ( (*(_BYTE *)(a2 + 16) & 1) == 0 )
    return v6;
  v9 = *((_BYTE *)a1 + 8);
  v10 = v9 & 1;
  while ( 1 )
  {
    v11 = (_BYTE *)(a2 + 16);
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v10 && v12 )
    {
      v14 = a2 ^ v12;
      v57 = a2 ^ v12;
      v13 = *(_QWORD *)(a2 ^ v12);
    }
    else
    {
      v13 = *(_QWORD *)v12;
      v14 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v57 = v14;
      if ( !v10 )
        goto LABEL_11;
    }
    if ( !v13 )
    {
LABEL_11:
      v15 = v13 != a2;
      v16 = v15;
      v17 = v13 != a2;
      v6 = v13 == a2;
      v18 = 8 * v6;
      v19 = *(_QWORD *)(8 * v6 + v14);
      if ( !v10 )
        goto LABEL_12;
      goto LABEL_26;
    }
    LOBYTE(v6) = (v14 ^ v13) != a2;
    v15 = (unsigned __int8)v6;
    v16 = (unsigned __int8)v6;
    v18 = 8LL * ((v14 ^ v13) == a2);
    v17 = (unsigned __int8)v6;
    v19 = *(_QWORD *)(v57 + v18);
LABEL_26:
    if ( !v19 )
      break;
    v19 ^= v14;
LABEL_12:
    if ( !v19 || (*(_BYTE *)(v19 + 16) & 1) == 0 )
      break;
    *v11 &= ~1u;
    a4 = v14;
    *(_BYTE *)(v19 + 16) &= ~1u;
    a2 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (a1[1] & 1) != 0 )
    {
      if ( !a2 )
        return v6;
      a2 ^= v14;
    }
    if ( a2 )
    {
      *(_BYTE *)(v14 + 16) = *(_QWORD *)(v14 + 16) | 1;
      v9 = *((_BYTE *)a1 + 8);
      v6 = *(_QWORD *)a2;
      v10 = v9 & 1;
      if ( (v9 & 1) != 0 && v6 )
        v6 ^= a2;
      v4 = v14 != v6;
      if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
        continue;
    }
    return v6;
  }
  if ( v4 != v15 )
  {
    v41 = *(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    v42 = v9 & 1;
    if ( (v9 & 1) != 0 && v41 )
      v41 ^= a4;
    if ( v41 != a2 )
      goto LABEL_136;
    v43 = *(_QWORD *)(v18 + a2);
    if ( (v9 & 1) != 0 && v43 )
      v43 ^= a2;
    if ( v43 != a4 )
      goto LABEL_136;
    v44 = *(_QWORD *)(v14 + 8 * v17);
    if ( (v9 & 1) != 0 && v44 )
      v44 ^= v14;
    if ( v44 != a2 )
      goto LABEL_136;
    if ( (v9 & 1) != 0 && v12 )
      v12 ^= a2;
    if ( v12 != v14 )
      goto LABEL_136;
    v21 = v57;
    v45 = (unsigned __int64 *)(a4 + 8 * v17);
    v46 = a4 ^ v57;
    if ( (v9 & 1) != 0 )
    {
      *(_QWORD *)(v14 + 8 * v17) = v46;
      *(_QWORD *)(a4 + 16) = v46 | *(_DWORD *)(a4 + 16) & 3;
      v47 = *v45;
      if ( !*v45 )
        goto LABEL_72;
      v47 ^= a4;
    }
    else
    {
      *(_QWORD *)(v14 + 8 * v17) = a4;
      *(_QWORD *)(a4 + 16) = v14 | *(_DWORD *)(a4 + 16) & 3;
      v47 = *v45;
    }
    if ( v47 )
    {
      v52 = *(_QWORD *)(v47 + 16);
      v53 = v52 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v42 && v53 )
        v53 ^= v47;
      if ( v53 != a4 )
        goto LABEL_136;
      v54 = a2;
      v48 = a2 ^ v47;
      if ( v42 )
        v54 = a2 ^ v47;
      *(_QWORD *)(v47 + 16) = v54 | v52 & 3;
LABEL_73:
      if ( v42 && v47 )
      {
        *(_QWORD *)(v18 + a2) = v48;
        v49 = a4 ^ a2;
      }
      else
      {
        *(_QWORD *)(v18 + a2) = v47;
        v49 = a4 ^ a2;
        if ( !v42 )
        {
          *v45 = a2;
          a2 = a4;
          *(_QWORD *)v11 = a4 | *(_DWORD *)v11 & 3;
          goto LABEL_29;
        }
      }
      *v45 = v49;
      a2 = a4;
      *(_QWORD *)v11 = v49 | *(_DWORD *)v11 & 3;
      goto LABEL_29;
    }
LABEL_72:
    v48 = a2 ^ v47;
    goto LABEL_73;
  }
  v21 = v57;
LABEL_29:
  v22 = *a1;
  if ( (a1[1] & 1) != 0 && v22 )
    v22 ^= (unsigned __int64)a1;
  v23 = (_DWORD *)(a2 + 16);
  v24 = v16 ^ 1u;
  v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v26 = a1[1] & 1;
  if ( (a1[1] & 1) != 0 && v25 )
    v25 ^= a2;
  if ( v25 != v14 )
    goto LABEL_136;
  v27 = (unsigned __int64 *)(v14 + 8 * ((unsigned int)v24 ^ 1LL));
  v28 = *v27;
  if ( (a1[1] & 1) != 0 && v28 )
    v28 ^= v14;
  if ( v28 != a2 )
    goto LABEL_136;
  v29 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (a1[1] & 1) == 0 )
    goto LABEL_35;
  if ( !v29 )
    goto LABEL_86;
  v29 ^= v14;
LABEL_35:
  if ( !v29 )
  {
LABEL_86:
    if ( v22 == v14 )
    {
      v22 = a2;
      goto LABEL_41;
    }
    goto LABEL_136;
  }
  v30 = *(_QWORD *)(v29 + 8);
  if ( (a1[1] & 1) != 0 && v30 )
    v30 ^= v29;
  if ( v30 == v14 )
  {
    v31 = a2;
    if ( (a1[1] & 1) != 0 )
      v31 = a2 ^ v29;
    *(_QWORD *)(v29 + 8) = v31;
    goto LABEL_41;
  }
  v50 = *(_QWORD *)v29;
  if ( (a1[1] & 1) != 0 && v50 )
    v50 ^= v29;
  if ( v50 != v14 )
    goto LABEL_136;
  v51 = a2;
  if ( (a1[1] & 1) != 0 )
    v51 = a2 ^ v29;
  *(_QWORD *)v29 = v51;
LABEL_41:
  if ( v26 && v29 )
  {
    v55 = a2 ^ v29 | *v23 & 3;
    v33 = (unsigned __int64 *)(a2 + 8 * v24);
    *(_QWORD *)v23 = v55;
    v34 = *v33;
LABEL_93:
    if ( v34 )
    {
      v34 ^= a2;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
  v32 = v29 | *v23 & 3;
  v33 = (unsigned __int64 *)(a2 + 8 * v24);
  *(_QWORD *)v23 = v32;
  v34 = *v33;
  if ( v26 )
    goto LABEL_93;
LABEL_43:
  if ( !v34 )
  {
LABEL_44:
    v35 = v14 ^ v34;
    goto LABEL_45;
  }
  v38 = *(_QWORD *)(v34 + 16);
  v39 = v38 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v26 && v39 )
    v39 ^= v34;
  if ( v39 != a2 )
LABEL_136:
    __fastfail(0x1Du);
  v40 = v14;
  v35 = v34 ^ v21;
  if ( v26 )
    v40 = v34 ^ v21;
  *(_QWORD *)(v34 + 16) = v40 | v38 & 3;
LABEL_45:
  if ( v26 && v34 )
  {
    *v27 = v35;
    v36 = v21 ^ a2;
LABEL_96:
    *v33 = v36;
  }
  else
  {
    *v27 = v34;
    v36 = v21 ^ a2;
    if ( v26 )
      goto LABEL_96;
    *v33 = v14;
    v36 = a2;
  }
  *(_QWORD *)(v14 + 16) &= 3uLL;
  v6 = v22;
  *(_QWORD *)(v14 + 16) |= v36;
  if ( (a1[1] & 1) != 0 )
  {
    v6 = (unsigned __int64)a1 ^ v22;
    if ( !v22 )
      v6 = 0LL;
  }
  *a1 = v6;
  *(_BYTE *)(v14 + 16) |= 1u;
  *(_BYTE *)v23 &= ~1u;
  return v6;
}
