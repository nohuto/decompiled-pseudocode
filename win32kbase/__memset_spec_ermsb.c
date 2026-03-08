/*
 * XREFs of __memset_spec_ermsb @ 0x1C00E1BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall _memset_spec_ermsb(char *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  unsigned __int64 v9; // r8
  __m128 *v10; // r9
  unsigned __int64 v11; // r8
  char *v12; // r9
  unsigned __int64 v13; // r8

  result = (__int64)a1;
  v4 = 0x101010101010101LL * a2;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( a3 >= 0x40 )
  {
    if ( a3 >= 0x320 )
      return _memset_spec_ermsb_repmovsb();
    *(__m128 *)a1 = v5;
    v6 = &a1[a3];
    a1 = (char *)((unsigned __int64)(a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    a3 = v6 - a1;
    if ( a3 >= 0x40 )
    {
      v7 = (__m128 *)&a1[a3 - 16];
      v8 = (_OWORD *)((unsigned __int64)&a1[a3 - 48] & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = a3 >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 += 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_8:
    v10 = (__m128 *)&a1[a3 - 16];
    *(__m128 *)a1 = v5;
    v11 = (a3 & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)&a1[v11] = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( a3 >= 0x10 )
    goto LABEL_8;
  if ( a3 < 4 )
  {
    if ( a3 )
    {
      *a1 = v4;
      if ( a3 != 1 )
        *(_WORD *)&a1[a3 - 2] = v4;
    }
  }
  else
  {
    v12 = &a1[a3 - 4];
    *(_DWORD *)a1 = v4;
    v13 = (a3 & 8) >> 1;
    *(_DWORD *)v12 = v4;
    *(_DWORD *)&a1[v13] = v4;
    *(_DWORD *)&v12[-v13] = v4;
  }
  return result;
}
