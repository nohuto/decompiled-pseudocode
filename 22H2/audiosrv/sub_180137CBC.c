/*
 * XREFs of sub_180137CBC @ 0x180137CBC
 * Callers:
 *     sub_180137BBC @ 0x180137BBC (sub_180137BBC.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

_QWORD *__fastcall sub_180137CBC(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v4; // r14
  SIZE_T v5; // rcx
  _QWORD *v6; // rdi
  _QWORD *v7; // rdx
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  _QWORD *result; // rax

  v3 = (a1[1] - *a1) >> 3;
  v4 = a2;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = sub_180008EAC(v5);
  v7 = (_QWORD *)*a1;
  v8 = v6;
  v9 = 0LL;
  v10 = (unsigned __int64)(a1[1] - *a1 + 7) >> 3;
  if ( *a1 > (unsigned __int64)a1[1] )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      *v8++ = *v7++;
      ++v9;
    }
    while ( v9 != v10 );
  }
  if ( *a1 )
    sub_1800472E0(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = (__int64)v6;
  a1[1] = (__int64)&v6[v3];
  result = &v6[v4];
  a1[2] = (__int64)&v6[v4];
  return result;
}
