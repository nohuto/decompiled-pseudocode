/*
 * XREFs of MiGatherSlabDemoteCandidates @ 0x1403C8690
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x1403C7F40 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall MiGatherSlabDemoteCandidates(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // edi
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  char *v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  unsigned __int64 v12; // rbp
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // r10d
  __int64 v16; // rax
  __int64 *v17; // r8
  unsigned __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _DWORD *v22; // r13
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  char *v25; // r15

  v3 = 0;
  if ( (*(_DWORD *)(a3 + 48) == 0) != *(_DWORD *)(a2 + 80) > 3u )
    return 0LL;
  v23 = *(_QWORD *)(a2 + 8);
  v24 = *(_QWORD *)a2;
  if ( (v23 & 1) != 0 )
  {
    if ( !v24 )
      return 0LL;
    v24 ^= a2;
  }
  if ( !v24 )
    return 0LL;
  v25 = (char *)(a3 + 32);
  v15 = 0;
  if ( (v23 & 1) != 0 )
  {
    if ( v23 == 1 )
      goto LABEL_24;
    v6 = (_QWORD *)(v23 ^ (a2 | 1));
  }
  else
  {
    v6 = (_QWORD *)v23;
  }
  if ( !v6 )
    goto LABEL_24;
  do
  {
    v21 = (_QWORD *)v6[1];
    v22 = v6;
    v7 = v6;
    if ( v21 )
    {
      v8 = (_QWORD *)*v21;
      v6 = (_QWORD *)v6[1];
      if ( *v21 )
      {
        do
        {
          v6 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(v6[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v6 || (_QWORD *)*v6 == v7 )
          break;
        v7 = v6;
      }
    }
    if ( (v22[35] & 2) == 0 )
    {
      v9 = (char *)a3;
      v10 = v22[33];
      v11 = v10 + v22[34];
      v12 = a3 + 8LL * *(_QWORD *)v25;
      if ( a3 >= v12 )
        goto LABEL_15;
      do
      {
        if ( !*(_DWORD *)(a3 + 48) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 40LL) + 80LL) <= 3u )
        {
          v13 = *(_DWORD *)(*(_QWORD *)v9 + 132LL);
          v14 = v13 + *(_DWORD *)(*(_QWORD *)v9 + 136LL);
          if ( v11 > v14 || v11 == v14 && v10 > v13 )
            break;
        }
        v9 += 8;
      }
      while ( (unsigned __int64)v9 < v12 );
      if ( (unsigned __int64)v9 < v12 )
      {
        memmove(v9 + 8, v9, v25 - v9 - 8);
        *(_QWORD *)v9 = v22;
        if ( v12 >= (unsigned __int64)v25 )
          goto LABEL_18;
      }
      else
      {
LABEL_15:
        if ( v9 >= v25 )
          continue;
        *(_QWORD *)v9 = v22;
      }
      ++*(_QWORD *)v25;
LABEL_18:
      v15 = 1;
    }
  }
  while ( v6 );
  if ( v15 )
  {
    v16 = *(_QWORD *)v25;
    v17 = (__int64 *)a3;
    *(_QWORD *)(a3 + 40) = 0LL;
    v18 = a3 + 8 * v16;
    if ( a3 < v18 )
    {
      v19 = 0LL;
      do
      {
        v20 = *v17++;
        v19 += (unsigned int)(*(_DWORD *)(v20 + 132) + *(_DWORD *)(v20 + 136));
        *(_QWORD *)(a3 + 40) = v19;
      }
      while ( (unsigned __int64)v17 < v18 );
    }
  }
LABEL_24:
  LOBYTE(v3) = *(_QWORD *)(a3 + 40) >= 0x420uLL;
  return v3;
}
