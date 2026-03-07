__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned __int8 *v4; // rcx
  __int64 v5; // r13
  unsigned int v7; // r8d
  __int64 v8; // r9
  int v9; // r12d
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r14d
  unsigned __int8 v14; // r11
  __int64 v15; // rbp
  unsigned int v16; // r9d
  unsigned __int8 v17; // r11
  signed int v18; // edx
  __int64 v19; // r11
  _QWORD *m; // rbx
  signed int v22; // ebx
  __int64 v23; // rdx
  _QWORD *i; // rdi
  __int64 v25; // rax
  unsigned __int8 *v26; // rdx
  unsigned int v27; // ebx
  __int64 v28; // r14
  int v29; // ebp
  char j; // dl
  signed int v31; // esi
  __int64 v32; // rbx
  _QWORD *k; // rdi
  int v34; // [rsp+50h] [rbp+8h]
  unsigned int v35; // [rsp+68h] [rbp+20h]

  v2 = *a1;
  v3 = 0;
  v4 = (unsigned __int8 *)a1[1];
  v5 = v2 & 7;
  v35 = 0;
  v7 = 0;
  LODWORD(v8) = 0;
  v9 = 0;
  v10 = (v2 >> 3) + ((v2 & 7) != 0);
  if ( !v10 )
    return v7;
  v11 = 0LL;
  v12 = v10 - 1;
  v13 = 0;
  v34 = 0;
  do
  {
    v14 = *v4++;
    if ( v11 == v12 && v5 )
      v14 |= byte_1400165E0[v5];
    if ( !v14 )
    {
      LODWORD(v8) = v8 + 8;
      goto LABEL_10;
    }
    v15 = *((unsigned __int8 *)RtlpBitsClearLow + v14);
    v16 = v15 + v8;
    if ( v16 )
    {
      if ( !v7 )
      {
        v7 = 1;
LABEL_22:
        v22 = v7 - 2;
        v23 = (int)(v7 - 2);
        for ( i = (_QWORD *)(a2 + 8 + 8 * v23); v23 >= 0 && *((_DWORD *)i - 1) < v16; --i )
        {
          --v22;
          --v23;
          *i = *(i - 1);
        }
        v25 = v22;
        v3 = v35;
        *(_DWORD *)(a2 + 8 * v25 + 12) = v16;
        *(_DWORD *)(a2 + 8 * v25 + 8) = v9;
        goto LABEL_8;
      }
      if ( *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < v16 )
        goto LABEL_22;
    }
LABEL_8:
    v8 = *((unsigned __int8 *)RtlpBitsClearHigh + v14);
    v9 = v13 - v8 + 8;
    v17 = *((_BYTE *)&qword_1400165E8 - v8) | byte_140018DE0[v15] | v14;
    if ( v17 != 0xFF )
    {
      do
      {
        v26 = (unsigned __int8 *)RtlpBitsClearAnywhere + v17;
        v27 = v7;
        if ( v7 && *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) >= (unsigned int)*v26 )
          break;
        v28 = *v26;
        v29 = 0;
        for ( j = byte_140018DE0[v28]; ((unsigned __int8)j & v17) != 0; j *= 2 )
          ++v29;
        ++v7;
        if ( v27 )
          v7 = v27;
        v31 = v7 - 2;
        v32 = (int)(v7 - 2);
        for ( k = (_QWORD *)(a2 + 8 + 8 * v32); v32 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v28; --k )
        {
          --v31;
          --v32;
          *k = *(k - 1);
        }
        v17 |= j;
        *(_DWORD *)(a2 + 8LL * v31 + 12) = v28;
        v13 = v34;
        *(_DWORD *)(a2 + 8LL * v31 + 8) = v34 + v29;
      }
      while ( v17 != 0xFF );
      v3 = v35;
    }
    v12 = v10 - 1;
LABEL_10:
    ++v3;
    v13 += 8;
    v11 = v3;
    v35 = v3;
    v34 = v13;
  }
  while ( v3 < v10 );
  if ( (_DWORD)v8 )
  {
    if ( v7 )
    {
      if ( *(_DWORD *)(a2 + 8LL * (v7 - 1) + 4) < (unsigned int)v8 )
        goto LABEL_14;
    }
    else
    {
      v7 = 1;
LABEL_14:
      v18 = v7 - 2;
      v19 = (int)(v7 - 2);
      for ( m = (_QWORD *)(a2 + 8 + 8 * v19); v19 >= 0 && *((_DWORD *)m - 1) < (unsigned int)v8; --m )
      {
        --v18;
        --v19;
        *m = *(m - 1);
      }
      *(_DWORD *)(a2 + 8LL * v18 + 12) = v8;
      *(_DWORD *)(a2 + 8LL * v18 + 8) = v9;
    }
  }
  return v7;
}
