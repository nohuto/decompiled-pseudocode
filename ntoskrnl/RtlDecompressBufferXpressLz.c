/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x1405B1820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(
        _BYTE *a1,
        unsigned int a2,
        _BYTE *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  __int64 v7; // rbp
  _BYTE *v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r11
  _BYTE *v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  int v14; // eax
  int v15; // r9d
  bool v16; // sf
  unsigned __int64 v17; // rdi
  char v18; // cl
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  signed __int64 v24; // r10
  _BYTE *v25; // rsi
  signed __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  char v28; // al
  _DWORD *v29; // rsi
  _BYTE *v30; // rax
  unsigned __int64 v31; // rdi
  char v32; // cl
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  void *v37; // rdi
  __int16 v38; // ax

  if ( a4 < 5 )
    return 3221226050LL;
  v7 = a2;
  v8 = a1;
  v9 = (unsigned __int64)&a1[v7];
  v10 = (unsigned __int64)&a3[a4];
  v11 = 0LL;
  v12 = v9 - 352;
  v13 = v10 - 86;
LABEL_3:
  v14 = *(_DWORD *)a3;
  a3 += 4;
  if ( (unsigned __int64)a3 < v13 && (unsigned __int64)v8 < v12 )
  {
    v15 = 2 * v14 + 1;
    if ( v14 >= 0 )
    {
      while ( 1 )
      {
        if ( v15 < 0 )
        {
          *v8++ = *a3++;
          goto LABEL_13;
        }
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        if ( v16 )
        {
          *(_WORD *)v8 = *(_WORD *)a3;
          v8 += 2;
          a3 += 2;
          goto LABEL_13;
        }
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        *(_DWORD *)v8 = *(_DWORD *)a3;
        if ( v16 )
        {
          v8 += 3;
          a3 += 3;
          goto LABEL_13;
        }
        v8 += 4;
        a3 += 4;
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
        if ( v16 )
          goto LABEL_13;
LABEL_44:
        v15 *= 2;
      }
    }
    while ( 1 )
    {
      v17 = *(unsigned __int16 *)a3;
      a3 += 2;
      v18 = v17;
      v19 = (v17 >> 3) + 1;
      v20 = v18 & 7;
      if ( v20 == 7 )
      {
        if ( v11 )
        {
          v21 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
          v11 = 0LL;
        }
        else
        {
          v11 = a3++;
          v21 = *v11 & 0xF;
        }
        if ( v21 == 15 )
        {
          if ( (unsigned __int64)(a3 + 7) >= v13 )
            goto LABEL_56;
          v22 = (unsigned __int8)*a3++;
          if ( v22 == 255 )
          {
            v23 = *(unsigned __int16 *)a3;
            a3 += 2;
            if ( !v23 )
            {
              v23 = *(unsigned int *)a3;
              a3 += 4;
            }
            if ( v23 < 0x16 || &v8[v23 + 3] < v8 )
              return 3221226050LL;
            v22 = v23 - 22;
          }
          v21 = v22 + 15;
        }
        v20 = v21 + 7;
      }
      v24 = v20;
      v25 = &v8[-v19];
      v26 = v20 + 3;
      if ( &v8[-v19] < a1 )
        return 3221226050LL;
      if ( v19 < 4 )
        break;
LABEL_37:
      *(_DWORD *)v8 = *(_DWORD *)v25;
      *((_DWORD *)v8 + 1) = *((_DWORD *)v25 + 1);
      if ( v26 >= 9 )
      {
        v8 += 8;
        v29 = v25 + 8;
        v26 -= 8LL;
        while ( (unsigned __int64)v8 < v12 )
        {
          *(_DWORD *)v8 = *v29;
          *((_DWORD *)v8 + 1) = v29[1];
          *((_DWORD *)v8 + 2) = v29[2];
          *((_DWORD *)v8 + 3) = v29[3];
          if ( v26 < 17 )
            goto LABEL_42;
          v8 += 16;
          v29 += 4;
          v26 -= 16LL;
        }
        v30 = &v8[v26];
        if ( (unsigned __int64)&v8[v26] <= v9 )
          goto LABEL_69;
        return 3221226050LL;
      }
LABEL_42:
      v8 += v26;
LABEL_43:
      if ( v15 >= 0 )
        goto LABEL_44;
LABEL_13:
      v15 *= 2;
      if ( !v15 )
        goto LABEL_3;
    }
    *v8 = *v25;
    v27 = v19 - 1;
    if ( v27 )
    {
      v8[1] = v25[1];
      if ( v27 == 1 )
      {
        v26 -= 2LL;
        v8 += 2;
        goto LABEL_36;
      }
      v28 = v25[2];
    }
    else
    {
      v8[1] = *v25;
      v28 = *v25;
    }
    v8[2] = v28;
    v26 = v24;
    v8 += 3;
LABEL_36:
    if ( !v26 )
      goto LABEL_43;
    goto LABEL_37;
  }
LABEL_47:
  v15 = 2 * v14 + 1;
  if ( v14 >= 0 )
    goto LABEL_71;
  while ( 1 )
  {
    if ( a3 == (_BYTE *)v10 )
      goto LABEL_83;
    if ( (unsigned __int64)(a3 + 1) >= v10 )
    {
      if ( (unsigned __int64)v8 < v9 )
        return 3221226050LL;
LABEL_83:
      *a6 = (_DWORD)v8 - (_DWORD)a1;
      return 0LL;
    }
    v31 = *(unsigned __int16 *)a3;
    a3 += 2;
    v32 = v31;
    v19 = (v31 >> 3) + 1;
    v33 = v32 & 7;
    if ( v33 == 7 )
      break;
LABEL_67:
    v26 = v33 + 3;
    v29 = &v8[-v19];
    if ( &v8[-v19] < a1 )
      return 3221226050LL;
    v30 = &v8[v26];
    if ( (unsigned __int64)&v8[v26] > v9 )
      return 3221226050LL;
LABEL_69:
    v37 = v8;
    v8 = v30;
    qmemcpy(v37, v29, v26);
    if ( v15 < 0 )
      goto LABEL_79;
    v15 *= 2;
LABEL_71:
    if ( v15 >= 0 )
    {
      do
      {
        v15 *= 2;
        if ( (unsigned __int64)(a3 + 2) > v10 || (unsigned __int64)(v8 + 2) > v9 )
          return 3221226050LL;
        v38 = *(_WORD *)a3;
        a3 += 2;
        *(_WORD *)v8 = v38;
        v8 += 2;
        if ( v15 < 0 )
          goto LABEL_79;
        v16 = (v15 & 0x40000000) != 0;
        v15 *= 2;
      }
      while ( !v16 );
    }
    if ( (unsigned __int64)a3 >= v10 || (unsigned __int64)v8 >= v9 )
      return 3221226050LL;
    *v8++ = *a3++;
LABEL_79:
    v15 *= 2;
    if ( !v15 )
    {
      if ( (unsigned __int64)(a3 + 3) >= v10 )
        return 3221226050LL;
      v14 = *(_DWORD *)a3;
      a3 += 4;
      goto LABEL_47;
    }
  }
  if ( v11 )
  {
    v34 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
    v11 = 0LL;
  }
  else
  {
    if ( (unsigned __int64)a3 >= v10 )
      return 3221226050LL;
    v11 = a3++;
    v34 = *v11 & 0xF;
  }
  if ( v34 != 15 )
  {
LABEL_66:
    v33 = v34 + 7;
    goto LABEL_67;
  }
LABEL_56:
  if ( (unsigned __int64)a3 >= v10 )
    return 3221226050LL;
  v35 = (unsigned __int8)*a3++;
  if ( v35 != 255 )
  {
LABEL_65:
    v34 = v35 + 15;
    goto LABEL_66;
  }
  if ( (unsigned __int64)(a3 + 1) >= v10 )
    return 3221226050LL;
  v36 = *(unsigned __int16 *)a3;
  a3 += 2;
  if ( !v36 )
  {
    if ( (unsigned __int64)(a3 + 3) >= v10 )
      return 3221226050LL;
    v36 = *(unsigned int *)a3;
    a3 += 4;
  }
  if ( v36 >= 0x16 && &v8[v36 + 3] >= v8 )
  {
    v35 = v36 - 22;
    goto LABEL_65;
  }
  return 3221226050LL;
}
