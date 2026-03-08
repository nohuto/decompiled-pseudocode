/*
 * XREFs of __memset_spec_plain @ 0x1C0003BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall _memset_spec_plain(_OWORD *a1, unsigned __int8 a2, unsigned __int64 a3)
{
  _OWORD *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  unsigned __int64 v9; // r8
  __m128 *v10; // r9
  unsigned __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int64 v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * a2;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( a3 >= 0x40 )
  {
    *a1 = v5;
    v6 = (char *)a1 + a3;
    a1 = (_OWORD *)((unsigned __int64)(a1 + 1) & 0xFFFFFFFFFFFFFFF0uLL);
    a3 = v6 - (char *)a1;
    if ( a3 >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + a3 - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + a3 - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = a3 >> 6;
      do
      {
        *a1 = v5;
        a1[1] = v5;
        a1 += 4;
        --v9;
        *(a1 - 2) = v5;
        *(a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_7:
    v10 = (__m128 *)((char *)a1 + a3 - 16);
    *a1 = v5;
    v11 = (a3 & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( a3 >= 0x10 )
    goto LABEL_7;
  if ( a3 < 4 )
  {
    if ( a3 )
    {
      *(_BYTE *)a1 = v4;
      if ( a3 != 1 )
        *(_WORD *)((char *)a1 + a3 - 2) = v4;
    }
  }
  else
  {
    v12 = (_DWORD *)((char *)a1 + a3 - 4);
    *(_DWORD *)a1 = v4;
    v13 = (a3 & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
