__int64 __fastcall AsiPopulateHashes(unsigned int *a1)
{
  size_t v1; // r14
  __int64 *v2; // rdi
  int v3; // r15d
  unsigned int v4; // ebp
  unsigned int v5; // r8d
  size_t v7; // rax
  char *v8; // rsi
  unsigned int v9; // r8d
  __int64 v11; // r10
  __int64 v12; // r11
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int16 *v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // r13
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // cx

  v1 = a1[3];
  v2 = qword_140047060;
  v3 = 31;
  v4 = 0;
  v5 = 0;
  v7 = (unsigned int)v1;
  if ( (_DWORD)v1 )
    goto LABEL_9;
  while ( 1 )
  {
    v8 = (char *)a1 + a1[5];
    qsort(v8, v7, 8uLL, AsiSortHashTableHelper);
    if ( (unsigned int)v1 <= 1 )
    {
LABEL_6:
      a1[6] = v3;
      return 1LL;
    }
    v9 = 1;
    while ( *(_DWORD *)&v8[8 * v9 - 8] != *(_DWORD *)&v8[8 * v9] )
    {
      if ( ++v9 >= (unsigned int)v1 )
        goto LABEL_6;
    }
    ++v4;
    v2 = (__int64 *)((char *)v2 + 4);
    if ( v4 >= 0x64 )
      return 0LL;
    v3 = *(_DWORD *)v2;
    v5 = 0;
LABEL_9:
    v11 = 0LL;
    v12 = 0LL;
    do
    {
      v13 = 0;
      v14 = v12 + a1[4];
      v15 = v11 + a1[5];
      v16 = (unsigned __int16 *)((char *)a1 + *(unsigned int *)((char *)a1 + v14 + 4));
      v17 = *(unsigned int *)((char *)a1 + v14 + 12) >> 1;
      if ( v17 )
      {
        v18 = v17;
        do
        {
          v19 = *v16++;
          v20 = v19 + 32;
          if ( (unsigned __int16)(v19 - 65) > 0x19u )
            v20 = v19;
          v13 = v20 + v3 * v13;
          --v18;
        }
        while ( v18 );
      }
      *(unsigned int *)((char *)a1 + v15 + 4) = v5;
      v12 += 24LL;
      ++v5;
      *(unsigned int *)((char *)a1 + v15) = v13;
      v11 += 8LL;
    }
    while ( v5 < (unsigned int)v1 );
    v7 = v1;
  }
}
