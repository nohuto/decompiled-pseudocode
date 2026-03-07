__int64 __fastcall MiConfigureMemoryRemoval(_QWORD *a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // r9
  char v4; // bl
  unsigned int *v7; // rdi
  _QWORD *v8; // rcx
  unsigned __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  SIZE_T v15; // rdx
  _QWORD *Pool; // rax
  char *v18; // r12
  char *v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 *v21; // r11
  __int64 v22; // r10
  _QWORD *v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+50h] [rbp+8h]

  v3 = *a2;
  v4 = 0;
  *a1 = 0LL;
  if ( *a3 )
    v7 = &a2[4 * v3 + 4];
  else
    v7 = 0LL;
  v8 = a2 + 6;
  v9 = a3[2];
  v10 = 0LL;
  v28 = a3[3];
  v11 = v28 + v9;
  v12 = -2LL;
  while ( 1 )
  {
    v13 = *(v8 - 1);
    v14 = v13 + *v8;
    if ( v9 >= v13 && v11 <= v14 )
      break;
    ++v10;
    v8 += 2;
    if ( v10 == v3 )
      goto LABEL_15;
  }
  if ( v9 != v13 )
  {
    if ( v11 != v14 )
    {
      v12 = 1LL;
      goto LABEL_15;
    }
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  if ( v11 != v14 )
    goto LABEL_14;
  v12 = -1LL;
LABEL_15:
  v15 = 16 * (v12 + (unsigned int)(v3 - 1) + 3LL);
  if ( v7 )
    v15 += 8 * (v12 + v3);
  Pool = MiAllocatePool(64, v15, 0x20206D4Du);
  if ( !Pool )
    return 3221225626LL;
  Pool[1] = 1LL;
  v18 = (char *)(Pool + 2);
  *Pool = MiSystemPartition;
  v19 = (char *)(Pool + 4);
  v20 = v12 + *a2;
  v21 = (unsigned __int64 *)(a2 + 4);
  v22 = 0LL;
  *((_DWORD *)Pool + 4) = v20;
  v23 = &Pool[2 * v20 + 4];
  Pool[3] = *((_QWORD *)a2 + 1) - v28;
  do
  {
    v24 = *v21;
    v25 = *v21 + v21[1];
    if ( (v4 & 1) != 0 || v9 < v24 || v11 > v25 )
    {
      *(_OWORD *)v19 = *(_OWORD *)v21;
      goto LABEL_34;
    }
    v4 |= 1u;
    if ( v9 == v24 )
    {
      if ( v11 == v25 )
        goto LABEL_36;
LABEL_25:
      v26 = v24 + v28;
      if ( v9 != v24 )
        v26 = *v21;
      *(_QWORD *)v19 = v26;
      *((_QWORD *)v19 + 1) = v21[1] - v28;
LABEL_34:
      v19 += 16;
      if ( v7 )
        *v23++ = *(_QWORD *)&v7[2 * v22];
      goto LABEL_36;
    }
    if ( v11 == v25 )
      goto LABEL_25;
    *(_QWORD *)v19 = v24;
    *((_QWORD *)v19 + 1) = v9 - v24;
    if ( v7 )
    {
      v27 = 2LL;
      do
      {
        *v23++ = *(_QWORD *)&v7[2 * v22];
        --v27;
      }
      while ( v27 );
    }
    *((_QWORD *)v19 + 2) = v11;
    *((_QWORD *)v19 + 3) = v25 - v11;
    v19 += 32;
LABEL_36:
    ++v22;
    v21 += 2;
  }
  while ( v22 != *a2 );
  *a1 = v18;
  return 0LL;
}
