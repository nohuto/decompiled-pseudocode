/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C00CBEE4
 * Callers:
 *     SetGestureConfigSettings @ 0x1C00CB3F8 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortGestureConfigArray(struct tagGESTURECONFIG *a1, int a2)
{
  __int64 v2; // r10
  unsigned int v4; // r8d
  unsigned int v5; // edi
  __int64 v6; // rbx
  char *v8; // rbp
  __int64 v9; // xmm1_8
  int v10; // r13d
  unsigned int v11; // r14d
  __int64 i; // rsi
  __int64 v13; // r15
  __int64 v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *j; // rdx
  __int64 v19; // [rsp+0h] [rbp-38h]

  v2 = a2;
  if ( a2 > 0 )
  {
    v4 = 1;
    if ( (int)(a2 / 9u) > 1 )
    {
      do
        v4 = 3 * v4 + 1;
      while ( (int)v4 < (int)(a2 / 9u) );
    }
    while ( (int)v4 > 0 )
    {
      v5 = v4;
      v6 = v4;
      if ( v4 < (unsigned __int64)a2 )
      {
        v8 = (char *)a1 + 12 * v4;
        do
        {
          v9 = *(_QWORD *)v8;
          v10 = *((_DWORD *)v8 + 2);
          v11 = v5 - v4;
          v19 = *(_QWORD *)v8;
          for ( i = v6 - v4; i >= 0; *((_DWORD *)a1 + v15 + 2) = *((_DWORD *)a1 + v13 + 2) )
          {
            v13 = 3 * i;
            if ( *((_DWORD *)a1 + 3 * i) <= (unsigned int)v19 )
              break;
            v14 = *(_QWORD *)((char *)a1 + 12 * i);
            v15 = 3 * (v4 + i);
            v11 -= v4;
            i -= v4;
            *(_QWORD *)((char *)a1 + 4 * v15) = v14;
          }
          if ( v5 != v11 + v4 )
          {
            v16 = 3 * (v4 + i);
            *(_QWORD *)((char *)a1 + 4 * v16) = v9;
            *((_DWORD *)a1 + v16 + 2) = v10;
          }
          ++v5;
          ++v6;
          v8 += 12;
        }
        while ( v6 < a2 );
      }
      v4 /= 3u;
    }
    if ( *(_DWORD *)a1 || a2 == 1 )
    {
      if ( (unsigned __int64)a2 <= 1 )
        return 1LL;
      v17 = 1LL;
      for ( j = (_DWORD *)((char *)a1 + 12); *j != *(j - 3); j += 3 )
      {
        if ( ++v17 >= v2 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
