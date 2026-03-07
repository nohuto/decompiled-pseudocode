char *__fastcall InputAABFDATAToAA24(char *a1, char *a2)
{
  __int64 v2; // xmm0_8
  char *v3; // rbx
  unsigned __int8 *v4; // r11
  char *v5; // r10
  char *v6; // rdi
  size_t v7; // r8
  unsigned int v8; // ecx
  char *v9; // r9
  __int64 v10; // rdi
  char *v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  unsigned int v14; // r9d
  unsigned int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // rdi
  unsigned __int8 *v18; // rcx
  unsigned __int8 v19; // al
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // edx
  char v23; // cl
  int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+28h] [rbp-8h]

  v2 = *((_QWORD *)a1 + 8);
  v3 = a1;
  v4 = (unsigned __int8 *)*((_QWORD *)a1 + 5);
  v5 = a2;
  v6 = a2;
  v27 = *((_DWORD *)a1 + 18);
  v7 = *((int *)a1 + 14);
  v8 = HIBYTE(v27);
  v9 = &a2[v7];
  if ( (*v3 & 4) != 0 )
  {
    v10 = *((_QWORD *)v3 + 1);
    v11 = &a2[*((int *)v3 + 12)];
    if ( (v2 & 1) != 0 )
    {
      do
      {
        v12 = *(_DWORD *)(v10 + 4LL * v4[1] + 1024) + *(_DWORD *)(v10 + 4LL * v4[2] + 2048);
        v13 = *v4;
        v4 += v8;
        *v5++ = (unsigned __int16)(*(_WORD *)(v10 + 4 * v13) + v12) >> 8;
      }
      while ( v5 < v11 );
    }
    else
    {
      if ( v8 == 4 )
      {
        do
        {
          v14 = *(_DWORD *)v4;
          v15 = *(_DWORD *)v4;
          v4 += 4;
          *v5++ = (unsigned __int16)(*(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE4(v2) & ((unsigned __int8)(v14 >> SBYTE2(v27)) << SHIBYTE(v2))))
                                   + *(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE2(v2) & ((unsigned __int8)(v14 >> v27) << SBYTE5(v2)))
                                              + 2048)
                                   + *(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE3(v2) & ((unsigned __int8)(v15 >> SBYTE1(v27)) << SBYTE6(v2)))
                                              + 1024)) >> 8;
        }
        while ( v5 < v11 );
      }
      else
      {
        do
        {
          v16 = *(unsigned __int16 *)v4;
          v4 += 2;
          *v5++ = (unsigned __int16)(*(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE4(v2) & ((unsigned __int8)(v16 >> SBYTE2(v27)) << SHIBYTE(v2))))
                                   + *(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE2(v2) & ((unsigned __int8)(v16 >> v27) << SBYTE5(v2)))
                                              + 2048)
                                   + *(_WORD *)(v10
                                              + 4LL
                                              * (unsigned __int8)(BYTE3(v2) & ((unsigned __int8)(v16 >> SBYTE1(v27)) << SBYTE6(v2)))
                                              + 1024)) >> 8;
        }
        while ( v5 < v11 );
      }
      v3 = a1;
    }
  }
  else if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 2) != 0 )
    {
      memmove(a2, v4, v7);
      goto LABEL_21;
    }
    v17 = v8;
    v18 = &v4[BYTE3(v2)];
    do
    {
      v5[2] = v18[BYTE2(v2) - (unsigned __int64)BYTE3(v2)];
      v5[1] = *v18;
      v19 = v18[BYTE4(v2) - (unsigned __int64)BYTE3(v2)];
      v18 += v17;
      *v5 = v19;
      v5 += 3;
    }
    while ( v5 < v9 );
  }
  else if ( v8 == 4 )
  {
    do
    {
      v20 = *(_DWORD *)v4;
      v21 = *(_DWORD *)v4;
      v4 += 4;
      v5[2] = BYTE2(v2) & ((unsigned __int8)(v21 >> v27) << SBYTE5(v2));
      *v5 = BYTE4(v2) & ((unsigned __int8)(v20 >> SBYTE2(v27)) << SHIBYTE(v2));
      v5[1] = BYTE3(v2) & ((unsigned __int8)(v20 >> SBYTE1(v27)) << SBYTE6(v2));
      v5 += 3;
    }
    while ( v5 < v9 );
  }
  else
  {
    do
    {
      v22 = *(unsigned __int16 *)v4;
      v4 += 2;
      v5[2] = BYTE2(v2) & ((unsigned __int8)(v22 >> v27) << SBYTE5(v2));
      *v5 = BYTE4(v2) & ((unsigned __int8)(v22 >> SBYTE2(v27)) << SHIBYTE(v2));
      v5[1] = BYTE3(v2) & ((unsigned __int8)(v22 >> SBYTE1(v27)) << SBYTE6(v2));
      v5 += 3;
    }
    while ( v5 < v9 );
  }
  v6 = a2;
LABEL_21:
  v23 = *v3;
  if ( (*v3 & 2) != 0 )
  {
    v24 = *((_DWORD *)v3 + 13);
    if ( v24 && (v25 = v24 - 1, (*((_DWORD *)v3 + 13) = v25) != 0) )
    {
      *((_QWORD *)v3 + 5) += *((int *)v3 + 15);
    }
    else if ( (v23 & 1) != 0 )
    {
      *((_QWORD *)v3 + 5) = *((_QWORD *)v3 + 3);
      *((_DWORD *)v3 + 13) = *((_DWORD *)v3 + 8);
    }
    else
    {
      *v3 = v23 & 0xFD;
    }
  }
  return v6;
}
