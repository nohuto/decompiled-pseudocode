/*
 * XREFs of RtlFindClearRuns @ 0x1800EC020
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800EC300 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRuns(int *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // ebp
  unsigned int v6; // edx
  int v7; // r10d
  BOOL v9; // r15d
  bool v11; // zf
  unsigned int v12; // r15d
  int v13; // esi
  unsigned __int8 *v14; // rax
  __int64 v15; // r8
  unsigned int v16; // r12d
  int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int8 v19; // r9
  __int64 v20; // r14
  unsigned int v21; // r8d
  __int64 result; // rax
  int v23; // esi
  __int64 v24; // rbx
  _QWORD *i; // rcx
  unsigned __int8 v26; // r9
  __int64 v27; // r14
  int v28; // ebp
  unsigned __int8 j; // si
  unsigned int v30; // eax
  unsigned int v31; // ebx
  __int64 v32; // r10
  _QWORD *k; // rcx
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // r10d
  __int64 v37; // r9
  _QWORD *m; // rcx
  unsigned int v39; // [rsp+0h] [rbp-48h]
  int v40; // [rsp+4h] [rbp-44h]
  int v41; // [rsp+8h] [rbp-40h]
  unsigned __int8 *v42; // [rsp+10h] [rbp-38h]
  int v43; // [rsp+50h] [rbp+8h]

  v39 = *a1;
  v4 = *a1;
  v6 = 0;
  v7 = *a1 & 7;
  v41 = v7;
  v9 = v7 != 0;
  v43 = 0;
  v11 = ((unsigned int)*a1 >> 3) + v9 == 0;
  v12 = ((unsigned int)*a1 >> 3) + v9;
  v13 = 0;
  v14 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
  LODWORD(v15) = 0;
  v16 = 0;
  if ( !v11 )
  {
    v17 = 0;
    v18 = v12 - 1;
    v40 = 0;
    while ( 1 )
    {
      v19 = *v14;
      v42 = v14 + 1;
      if ( v16 == v18 && v7 )
        v19 |= byte_18012E6A0[v4 & 7];
      if ( v19 )
      {
        v20 = (unsigned __int8)RtlpBitsClearLow[v19];
        v21 = v20 + v15;
        if ( v21 && (v6 < a3 || *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) < v21) )
        {
          LODWORD(result) = v6 + 1;
          if ( v6 >= a3 )
            LODWORD(result) = v6;
          v6 = result;
          v23 = result - 2;
          if ( a4 )
          {
            v24 = v23;
            for ( i = (_QWORD *)(a2 + 8 + 8LL * v23); v24 >= 0 && *((_DWORD *)i - 1) < v21; --i )
            {
              --v23;
              --v24;
              *i = *(i - 1);
            }
            v17 = v40;
          }
          *(_DWORD *)(a2 + 8LL * v23 + 12) = v21;
          *(_DWORD *)(a2 + 8LL * v23 + 8) = v43;
          if ( !a4 && (unsigned int)result >= a3 )
            return (unsigned int)result;
        }
        v15 = (unsigned __int8)RtlpBitsClearHigh[v19];
        v13 = v17 - v15 + 8;
        v43 = v13;
        v26 = *((_BYTE *)&unk_18012E6A8 - v15) | RtlIsSystemAceType[v20 + 16] | v19;
        if ( v26 != 0xFF )
        {
          do
          {
            if ( v6 >= a3 && *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) >= (unsigned int)RtlpBitsClearAnywhere[v26] )
              break;
            v27 = RtlpBitsClearAnywhere[v26];
            v28 = 0;
            for ( j = RtlIsSystemAceType[v27 + 16]; (j & v26) != 0; j *= 2 )
              ++v28;
            v30 = v6 + 1;
            if ( v6 >= a3 )
              v30 = v6;
            v6 = v30;
            v31 = v30 - 2;
            if ( a4 )
            {
              v32 = (int)v31;
              for ( k = (_QWORD *)(a2 + 8 + 8LL * (int)v31); v32 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v27; --k )
              {
                --v31;
                --v32;
                *k = *(k - 1);
              }
            }
            v34 = (int)v31;
            v17 = v40;
            *(_DWORD *)(a2 + 8 * v34 + 12) = v27;
            *(_DWORD *)(a2 + 8 * v34 + 8) = v40 + v28;
            if ( !a4 && v30 >= a3 )
              return v6;
            v26 |= j;
          }
          while ( v26 != 0xFF );
          v13 = v43;
        }
        LOBYTE(v4) = v39;
        v18 = v12 - 1;
      }
      else
      {
        v13 = v43;
        LODWORD(v15) = v15 + 8;
      }
      v17 += 8;
      ++v16;
      v40 = v17;
      if ( v16 >= v12 )
        break;
      v14 = v42;
      v7 = v41;
    }
  }
  if ( (_DWORD)v15 && (v6 < a3 || *(_DWORD *)(a2 + 8LL * (v6 - 1) + 4) < (unsigned int)v15) )
  {
    v35 = v6 + 1;
    if ( v6 >= a3 )
      v35 = v6;
    v6 = v35;
    v36 = v35 - 2;
    if ( a4 )
    {
      v37 = (int)v36;
      for ( m = (_QWORD *)(a2 + 8 + 8LL * (int)v36); v37 >= 0 && *((_DWORD *)m - 1) < (unsigned int)v15; --m )
      {
        --v36;
        --v37;
        *m = *(m - 1);
      }
    }
    *(_DWORD *)(a2 + 8LL * (int)v36 + 12) = v15;
    *(_DWORD *)(a2 + 8LL * (int)v36 + 8) = v13;
  }
  return v6;
}
