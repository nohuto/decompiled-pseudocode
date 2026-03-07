__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rcx
  char *v5; // r10
  _DWORD *v6; // r11
  char *v7; // rbx
  _DWORD *v8; // rsi
  int v9; // eax
  char *v10; // rdi
  int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  _DWORD *v14; // r9
  int i; // eax
  _DWORD *v16; // r8
  int v17; // eax
  char *v18; // r10
  int v19; // eax
  int v20; // eax
  int v21; // r11d
  int v22; // ebx
  _DWORD *v23; // rbp
  _DWORD *v24; // r14
  char *v25; // r8
  int v27; // ecx
  int v28; // eax
  _DWORD *v29; // rcx
  _DWORD *k; // r9
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  char *v35; // rax
  char *m; // r10
  int v37; // ecx
  int j; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  char *v42; // rcx
  int v43; // eax

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a1 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a2 + 12;
  v6 = v3;
  v7 = (char *)a2 + 12;
  v8 = &v3[2 * v2];
  v9 = v4 + v2;
  v10 = (char *)a2 + 8 * v4 + 12;
  v11 = *((_DWORD *)a2 + 3);
  v12 = 8 * v9 + 12;
  if ( *v3 < v11 )
  {
    v13 = v3[3];
    v14 = v3 + 2;
    for ( i = v13 - v6[1] - (_DWORD)v6; ; i = v14[1] - v16[1] - (_DWORD)v16 )
    {
      v12 += (_DWORD)v14 + i;
      if ( *v14 >= v11 )
        break;
      v16 = v14;
      v14 += 2;
      if ( v14 == v8 )
      {
        v33 = *((_DWORD *)v5 + 3);
        v18 = v5 + 8;
        v19 = v33 - *((_DWORD *)v7 + 1);
LABEL_30:
        v34 = (_DWORD)v18 + v19 - (_DWORD)v7;
LABEL_31:
        v12 += v34;
        goto LABEL_32;
      }
    }
    v18 = v5 + 8;
    v6 = v14;
    if ( *v14 > v11 )
    {
      v27 = (_DWORD)v18 + v14[1] + *((_DWORD *)v18 + 1) - *((_DWORD *)v7 + 1) - *(v14 - 1) + 8 - (_DWORD)v7;
      goto LABEL_19;
    }
    v14 += 2;
    v19 = *((_DWORD *)v18 + 1) - *((_DWORD *)v7 + 1);
    if ( v14 == v8 )
      goto LABEL_30;
LABEL_8:
    v20 = v14[1] + v19 - v6[1] - (_DWORD)v6 - (_DWORD)v7;
LABEL_9:
    v12 += (_DWORD)v18 + (_DWORD)v14 + v20;
    goto LABEL_10;
  }
  v17 = *((_DWORD *)v5 + 3);
  v18 = v5 + 8;
  if ( *v3 <= v11 )
  {
    v14 = v3 + 2;
    v19 = v17 - *((_DWORD *)v7 + 1);
    goto LABEL_8;
  }
  for ( j = v17 - *((_DWORD *)v7 + 1) - (_DWORD)v7; ; j = *((_DWORD *)v18 + 1) - *((_DWORD *)v42 + 1) - (_DWORD)v42 )
  {
    v12 += (_DWORD)v18 + j;
    v39 = *(_DWORD *)v18;
    if ( *v3 < *(_DWORD *)v18 )
      break;
    v42 = v18;
    v18 += 8;
    if ( *v3 <= v39 )
    {
      v14 = v3 + 2;
      if ( v18 != v10 )
      {
        v20 = v14[1] + *((_DWORD *)v18 + 1) - *((_DWORD *)v42 + 1) - v6[1] - (_DWORD)v6 - (_DWORD)v42;
        goto LABEL_9;
      }
      goto LABEL_44;
    }
    if ( v18 == v10 )
    {
      v14 = v3 + 2;
LABEL_44:
      v43 = v14[1] - v6[1] - (_DWORD)v6;
LABEL_45:
      v28 = (_DWORD)v14 + v43;
LABEL_22:
      v12 += v28;
      v29 = v14;
      for ( k = v14 + 2; k != v8; k += 2 )
      {
        v31 = (_DWORD)k + v29[3] - v29[1] - (_DWORD)v29;
        v12 += v31;
        v29 += 2;
      }
      return v12;
    }
  }
  v40 = v3[3] - *((_DWORD *)v18 - 1);
  v14 = v3 + 2;
  v27 = (_DWORD)v14 + *((_DWORD *)v18 + 1) + v40 - v6[1] - (_DWORD)v6 + 8;
LABEL_19:
  v12 += v27;
LABEL_10:
  v21 = *(_DWORD *)v18;
  while ( 2 )
  {
    v22 = *v14;
    while ( 1 )
    {
      v23 = v14;
      v24 = v14;
      v25 = v18;
      if ( v22 < v21 )
        break;
      v18 += 8;
      if ( v22 > v21 )
      {
        if ( v18 == v10 )
        {
          v28 = v14[1] + 8 - *(v14 - 1);
          goto LABEL_22;
        }
        v41 = v14[1] + (_DWORD)v18 + *((_DWORD *)v18 + 1) - *((_DWORD *)v25 + 1) - *(v14 - 1) + 8 - (_DWORD)v25;
      }
      else
      {
        v14 += 2;
        if ( v14 == v8 )
        {
          if ( v18 == v10 )
            return v12;
          v34 = (_DWORD)v18 + *((_DWORD *)v18 + 1) - *((_DWORD *)v25 + 1) - (_DWORD)v25;
          goto LABEL_31;
        }
        if ( v18 == v10 )
        {
          v43 = v14[1] - v23[1] - (_DWORD)v23;
          goto LABEL_45;
        }
        v22 = *v14;
        v41 = (_DWORD)v18
            + (_DWORD)v14
            + v14[1]
            + *((_DWORD *)v18 + 1)
            - *((_DWORD *)v25 + 1)
            - v23[1]
            - (_DWORD)v23
            - (_DWORD)v25;
      }
      v21 = *(_DWORD *)v18;
      v12 += v41;
    }
    v32 = *((_DWORD *)v18 + 1);
    v14 += 2;
    if ( v14 != v8 )
    {
      v12 += (_DWORD)v14 + v32 + v14[1] - *((_DWORD *)v18 - 1) - v24[1] - (_DWORD)v24 + 8;
      continue;
    }
    break;
  }
  v12 += v32 - *((_DWORD *)v18 - 1) + 8;
LABEL_32:
  v35 = v18;
  for ( m = v18 + 8; m != v10; m += 8 )
  {
    v37 = (_DWORD)m + *((_DWORD *)v35 + 3) - *((_DWORD *)v35 + 1) - (_DWORD)v35;
    v12 += v37;
    v35 += 8;
  }
  return v12;
}
