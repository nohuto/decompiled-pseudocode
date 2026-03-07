char __fastcall do_decode(__int64 a1)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  unsigned __int8 *v3; // rbp
  unsigned __int8 *i; // r8
  int v6; // r10d
  int v7; // eax
  int v8; // r11d
  unsigned int v9; // eax
  unsigned int v10; // ecx
  _BYTE *v11; // rbx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  _BYTE *v15; // r8
  __int64 v16; // rbx
  char v17; // al
  __int64 v18; // r8
  _DWORD *v19; // rdi
  unsigned __int64 v20; // rbx
  unsigned int v21; // eax
  unsigned __int8 *v22; // r8
  unsigned int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rbx
  char v27; // al
  int v28; // ecx
  __int64 v29; // r11
  char v30; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&retaddr;
  v2 = *(_BYTE **)(a1 + 8);
  v3 = 0LL;
  i = *(unsigned __int8 **)(a1 + 48);
  v6 = 1;
  do
  {
    if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 56) || (unsigned __int64)v2 >= *(_QWORD *)(a1 + 16) )
      goto LABEL_32;
    v7 = *(_DWORD *)i;
    i += 4;
    v8 = 2 * v7 + 1;
    if ( v7 < 0 )
      break;
    while ( 1 )
    {
      LOBYTE(v1) = *i;
      *v2++ = *i++;
LABEL_28:
      if ( v8 < 0 )
        break;
      v8 *= 2;
    }
    v8 *= 2;
  }
  while ( !v8 );
  v9 = *(unsigned __int16 *)i;
  i += 2;
  v10 = v9 & 7;
  LODWORD(v1) = ~(v9 >> 3);
  if ( v10 <= 5 )
  {
    v11 = &v2[(int)v1];
    if ( (unsigned __int64)v11 >= *(_QWORD *)(a1 + 8) )
    {
      *v2 = *v11;
      v2[1] = v11[1];
      v2[2] = v11[2];
      v2[3] = v11[3];
      v2[4] = v11[4];
      v2[5] = v11[5];
      v2[6] = v11[6];
      LOBYTE(v1) = v11[7];
      v2[7] = v1;
      v2 += v10 + 3;
      goto LABEL_28;
    }
    goto LABEL_73;
  }
  if ( v10 != 7 )
    goto LABEL_15;
  if ( v3 )
  {
    v12 = *v3 >> 4;
    v3 = 0LL;
  }
  else
  {
    v3 = i;
    v12 = *i++ & 0xF;
  }
  if ( v12 == 15 )
  {
    v13 = *i++;
    if ( v13 == 255 )
    {
      v10 = *(unsigned __int16 *)i;
      i += 2;
      if ( v10 < 0x115 )
        goto LABEL_73;
LABEL_15:
      v14 = v10 + 3;
      goto LABEL_16;
    }
    v12 = v13 + 15;
  }
  v14 = v12 + 10;
LABEL_16:
  *(_QWORD *)(a1 + 88) = i;
  v15 = &v2[(int)v1];
  v1 = (unsigned __int64)&v2[v14];
  if ( v1 < *(_QWORD *)(a1 + 16) )
  {
    if ( (unsigned __int64)v15 >= *(_QWORD *)(a1 + 8) )
    {
      if ( v14 > 8 )
      {
        v16 = ((v14 - 9) >> 3) + 1;
        v14 -= 8 * v16;
        do
        {
          *v2 = *v15;
          v2[1] = v15[1];
          v2[2] = v15[2];
          v2[3] = v15[3];
          v2[4] = v15[4];
          v2[5] = v15[5];
          v2[6] = v15[6];
          v17 = v15[7];
          v15 += 8;
          v2[7] = v17;
          v2 += 8;
          --v16;
        }
        while ( v16 );
      }
      v18 = v15 - v2;
      do
      {
        LOBYTE(v1) = v2[v18];
        *v2++ = v1;
        --v14;
      }
      while ( v14 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_28;
    }
    goto LABEL_73;
  }
  v19 = (_DWORD *)(a1 + 24);
  while ( 2 )
  {
    v1 = (unsigned __int64)&v2[v14];
    if ( (unsigned __int64)v15 < *(_QWORD *)(a1 + 8) )
      goto LABEL_73;
    if ( v1 > *(_QWORD *)v19 )
    {
      v28 = *v19 - (_DWORD)v2;
      if ( v28 > 8 )
      {
        v29 = ((unsigned int)(v28 - 9) >> 3) + 1;
        v28 -= 8 * v29;
        do
        {
          *v2 = *v15;
          v2[1] = v15[1];
          v2[2] = v15[2];
          v2[3] = v15[3];
          v2[4] = v15[4];
          v2[5] = v15[5];
          v2[6] = v15[6];
          v30 = v15[7];
          v15 += 8;
          v2[7] = v30;
          v2 += 8;
          --v29;
        }
        while ( v29 );
      }
      do
      {
        LOBYTE(v1) = *v15++;
        *v2++ = v1;
        --v28;
      }
      while ( v28 );
      i = *(unsigned __int8 **)(a1 + 88);
      goto LABEL_72;
    }
    if ( v14 > 8 )
    {
      v26 = ((v14 - 9) >> 3) + 1;
      v14 -= 8 * v26;
      do
      {
        *v2 = *v15;
        v2[1] = v15[1];
        v2[2] = v15[2];
        v2[3] = v15[3];
        v2[4] = v15[4];
        v2[5] = v15[5];
        v2[6] = v15[6];
        v27 = v15[7];
        v15 += 8;
        v2[7] = v27;
        v2 += 8;
        --v26;
      }
      while ( v26 );
    }
    do
    {
      LOBYTE(v1) = *v15++;
      *v2++ = v1;
      --v14;
    }
    while ( v14 );
    for ( i = *(unsigned __int8 **)(a1 + 88); ; ++i )
    {
      if ( v8 >= 0 )
      {
        v8 *= 2;
        goto LABEL_59;
      }
      v8 *= 2;
      if ( v8 )
        goto LABEL_35;
LABEL_32:
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 72) )
        goto LABEL_73;
      LODWORD(v1) = *(_DWORD *)i;
      i += 4;
      v8 = 2 * v1 + 1;
      if ( (v1 & 0x80000000) != 0LL )
        break;
LABEL_59:
      v19 = (_DWORD *)(a1 + 24);
      if ( (unsigned __int64)v2 >= *(_QWORD *)(a1 + 24) )
        goto LABEL_72;
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 40) )
        goto LABEL_73;
      LOBYTE(v1) = *i;
      *v2++ = *i;
    }
    v19 = (_DWORD *)(a1 + 24);
LABEL_35:
    if ( (unsigned __int64)v2 >= *(_QWORD *)v19 )
    {
      if ( v2 == *(_BYTE **)a1 )
        *(_DWORD *)(a1 + 100) = 1;
LABEL_72:
      *(_QWORD *)(a1 + 88) = i;
      *(_QWORD *)(a1 + 32) = v2;
      goto LABEL_74;
    }
    v20 = *(_QWORD *)(a1 + 64);
    if ( (unsigned __int64)i >= v20 )
      goto LABEL_73;
    v21 = *(unsigned __int16 *)i;
    v22 = i + 2;
    v23 = v21 & 7;
    LODWORD(v1) = ~(v21 >> 3);
    if ( v23 != 7 )
      goto LABEL_47;
    if ( v3 )
    {
      v24 = *v3 >> 4;
      v3 = 0LL;
LABEL_42:
      if ( v24 == 15 )
      {
        if ( (unsigned __int64)v22 >= *(_QWORD *)(a1 + 40) )
          goto LABEL_73;
        v25 = *v22++;
        if ( v25 == 255 )
        {
          if ( (unsigned __int64)v22 >= v20 )
            goto LABEL_73;
          v23 = *(unsigned __int16 *)v22;
          v22 += 2;
          if ( v23 < 0x115 )
            goto LABEL_73;
LABEL_47:
          v14 = v23 + 3;
          goto LABEL_48;
        }
        v24 = v25 + 15;
      }
      v14 = v24 + 10;
LABEL_48:
      *(_QWORD *)(a1 + 88) = v22;
      v15 = &v2[(int)v1];
      continue;
    }
    break;
  }
  if ( (unsigned __int64)v22 < *(_QWORD *)(a1 + 40) )
  {
    v3 = v22;
    v24 = *v22++ & 0xF;
    goto LABEL_42;
  }
LABEL_73:
  v6 = 0;
LABEL_74:
  *(_DWORD *)(a1 + 96) = v6;
  return v1;
}
