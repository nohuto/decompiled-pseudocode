/*
 * XREFs of MiConfigureMemoryInsertion @ 0x140A29718
 * Callers:
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall MiConfigureMemoryInsertion(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v7; // r11
  unsigned int *v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v16; // r10
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r8
  SIZE_T v21; // r9
  _QWORD *Pool; // rax
  _QWORD *v23; // rdx
  char *v24; // r15
  _DWORD *v25; // rdi
  unsigned __int64 *v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  int v34; // r9d
  __int64 v36; // [rsp+80h] [rbp+18h]
  unsigned __int64 v37; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a3 + 24);
  v5 = *(_QWORD *)(a3 + 16);
  *a1 = 0LL;
  v37 = v3;
  v7 = v3 + v5;
  if ( *(_QWORD *)a3 )
    v8 = &a2[4 * *a2 + 4];
  else
    v8 = 0LL;
  v9 = *a2;
  v10 = *a2 + 1;
  if ( v10 < v9 )
    return 3221225626LL;
  v11 = v9;
  v12 = 16LL * (v9 - 1);
  v13 = v12 + 48;
  if ( v8 )
    v13 = v12 + 8 * (v10 + 6LL);
  v14 = 0LL;
  v36 = 1LL;
  v15 = 0LL;
  v16 = a2 + 6;
  v17 = 1LL;
  while ( 1 )
  {
    v18 = *(v16 - 1);
    if ( *v16 )
    {
      v19 = v18 + *v16;
      if ( v5 >= v18 )
      {
        if ( v5 < v19 )
          return 3221225496LL;
      }
      else if ( v7 > v18 )
      {
        return 3221225496LL;
      }
      if ( (v5 == v19 || v7 == v18)
        && (!v8 || v8[2 * v14] == *(_DWORD *)(a3 + 32) && v8[2 * v14 + 1] == *(_DWORD *)(a3 + 36)) )
      {
        if ( v17 == 1 )
        {
          v15 = v14;
          v17 = 0LL;
        }
        else
        {
          v17 = -1LL;
        }
        v36 = v17;
      }
    }
    if ( ++v14 >= v11 )
      break;
    v16 += 2;
  }
  v21 = 16 * v17 + v13;
  if ( v8 )
    v21 += 8 * (v11 + v17);
  Pool = MiAllocatePool(64, v21, 0x20206D4Du);
  if ( !Pool )
    return 3221225626LL;
  *Pool = MiSystemPartition;
  v23 = a2 + 4;
  Pool[1] = 1LL;
  v24 = (char *)(Pool + 2);
  *((_DWORD *)Pool + 4) = v17 + v11;
  v25 = &Pool[2 * (unsigned int)(v17 + v11) + 4];
  Pool[3] = v37 + *((_QWORD *)a2 + 1);
  v26 = Pool + 4;
  if ( v36 == -1 )
  {
    v27 = 4 * v15;
    memmove(v26, v23, 16 * v15 + 16);
    if ( v8 )
      memmove(v25, v8, 8 * v15 + 8);
    v28 = v15 + 2;
    *(_QWORD *)&v24[v27 * 4 + 24] += v37 + *(_QWORD *)&a2[v27 + 10];
    if ( v15 + 2 != v11 )
    {
      v29 = v11 - v15;
      memmove(&v24[16 * v28], &a2[v27 + 12], 16 * v29 - 32);
      if ( v8 )
        memmove(&v25[2 * v15 + 2], &v8[2 * v28], 8 * v29 - 16);
    }
  }
  else if ( v36 )
  {
    v33 = 0LL;
    v34 = 0;
    do
    {
      if ( !v34 && v37 + v5 <= *v23 )
      {
        *v26 = v5;
        v26[1] = v37;
        v26 += 2;
        if ( v8 )
        {
          v25[1] = *(_DWORD *)(a3 + 36);
          *v25 = *(_DWORD *)(a3 + 32);
          v25 += 2;
        }
        v34 = 1;
      }
      *(_OWORD *)v26 = *(_OWORD *)v23;
      v26 += 2;
      if ( v8 )
      {
        *(_QWORD *)v25 = *(_QWORD *)&v8[2 * v33];
        v25 += 2;
      }
      ++v33;
      v23 += 2;
    }
    while ( v33 != *a2 );
    if ( !v34 )
    {
      *v26 = v5;
      v26[1] = v37;
      if ( v8 )
      {
        v25[1] = *(_DWORD *)(a3 + 36);
        *v25 = *(_DWORD *)(a3 + 32);
      }
    }
  }
  else
  {
    memmove(v26, v23, 16 * v11);
    if ( v8 )
      memmove(v25, v8, 8 * v11);
    v30 = 2 * v15;
    v31 = *(_QWORD *)&a2[2 * v30 + 4];
    v32 = *(_QWORD *)&a2[2 * v30 + 6];
    *(_QWORD *)&v24[8 * v30 + 24] += v37;
    if ( v5 != v31 + v32 )
      *(_QWORD *)&v24[8 * v30 + 16] = v5;
  }
  *a1 = v24;
  return 0LL;
}
