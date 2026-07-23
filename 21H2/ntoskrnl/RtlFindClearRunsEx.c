/*
 * XREFs of RtlFindClearRunsEx @ 0x14039B7E8
 * Callers:
 *     RtlFindLongestRunClearEx @ 0x14039B7B0 (RtlFindLongestRunClearEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int8 *v3; // rcx
  __int64 v4; // r13
  int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v8; // r8d
  __int64 v9; // r9
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int v13; // r12d
  unsigned __int8 v14; // r11
  __int64 v15; // rsi
  unsigned int v16; // r9d
  unsigned __int8 v17; // r11
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r11
  _QWORD *k; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  _QWORD *i; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  int v29; // ebp
  char j; // bl
  unsigned int v31; // eax
  int v32; // edx
  unsigned int v33; // esi
  __int64 v34; // rdi
  _QWORD *v35; // rcx
  unsigned __int8 *v36; // [rsp+40h] [rbp+8h]
  unsigned int v37; // [rsp+58h] [rbp+20h]

  v2 = *a1;
  v3 = (unsigned __int8 *)a1[1];
  v4 = v2 & 7;
  v5 = 0;
  v6 = 0;
  v37 = 0;
  v8 = 0;
  LODWORD(v9) = 0;
  v10 = (v2 >> 3) + ((v2 & 7) != 0);
  if ( v10 )
  {
    v11 = 0LL;
    v12 = v10 - 1;
    v13 = 0;
    do
    {
      v14 = *v3++;
      v36 = v3;
      if ( v11 == v12 && v4 )
        v14 |= byte_14001B620[v4];
      if ( v14 )
      {
        v15 = *((unsigned __int8 *)RtlpBitsClearLow + v14);
        v16 = v15 + v9;
        if ( v16 && (!v8 || *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < v16) )
        {
          v23 = v8 + 1;
          if ( v8 )
            v23 = v8;
          v8 = v23;
          v24 = v23 - 2;
          v25 = (int)(v23 - 2);
          for ( i = (_QWORD *)(a2 + 8 + 8 * v25); v25 >= 0 && *((_DWORD *)i - 1) < v16; --i )
          {
            --v24;
            --v25;
            *i = *(i - 1);
          }
          v27 = (int)v24;
          v6 = v37;
          *(_DWORD *)(a2 + 8 * v27 + 12) = v16;
          *(_DWORD *)(a2 + 8 * v27 + 8) = v5;
        }
        v9 = *((unsigned __int8 *)RtlpBitsClearHigh + v14);
        v5 = v13 - v9 + 8;
        v17 = *((_BYTE *)&qword_14001B628 - v9) | byte_14001E890[v15] | v14;
        if ( v17 != 0xFF )
        {
          do
          {
            if ( v8
              && *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) >= (unsigned int)*((unsigned __int8 *)RtlpBitsClearAnywhere + v17) )
            {
              break;
            }
            v28 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
            v29 = 0;
            for ( j = byte_14001E890[v28]; ((unsigned __int8)j & v17) != 0; j *= 2 )
              ++v29;
            v31 = v8 + 1;
            v32 = *((unsigned __int8 *)RtlpBitsClearAnywhere + v17);
            if ( v8 )
              v31 = v8;
            v8 = v31;
            v33 = v31 - 2;
            v34 = (int)(v31 - 2);
            v35 = (_QWORD *)(a2 + 8 + 8 * v34);
            while ( v34 >= 0 )
            {
              v32 = v28;
              if ( *((_DWORD *)v35 - 1) >= (unsigned int)v28 )
                break;
              --v33;
              --v34;
              *v35 = *(v35 - 1);
              --v35;
            }
            v17 |= j;
            *(_DWORD *)(a2 + 8LL * (int)v33 + 12) = v32;
            *(_DWORD *)(a2 + 8LL * (int)v33 + 8) = v13 + v29;
          }
          while ( v17 != 0xFF );
          v5 = v13 - v9 + 8;
          v6 = v37;
        }
        v3 = v36;
        v12 = v10 - 1;
      }
      else
      {
        LODWORD(v9) = v9 + 8;
      }
      ++v6;
      v13 += 8;
      v11 = v6;
      v37 = v6;
    }
    while ( v6 < v10 );
  }
  if ( (_DWORD)v9 && (!v8 || *(_DWORD *)(a2 + 8LL * (v8 - 1) + 4) < (unsigned int)v9) )
  {
    v18 = v8 + 1;
    if ( v8 )
      v18 = v8;
    v8 = v18;
    v19 = v18 - 2;
    v20 = (int)(v18 - 2);
    for ( k = (_QWORD *)(a2 + 8 + 8 * v20); v20 >= 0 && *((_DWORD *)k - 1) < (unsigned int)v9; --k )
    {
      --v19;
      --v20;
      *k = *(k - 1);
    }
    *(_DWORD *)(a2 + 8LL * (int)v19 + 12) = v9;
    *(_DWORD *)(a2 + 8LL * (int)v19 + 8) = v5;
  }
  return v8;
}
