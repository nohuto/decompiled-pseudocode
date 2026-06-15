/*
 * XREFs of sub_1800F0320 @ 0x1800F0320
 * Callers:
 *     sub_1800EFF1C @ 0x1800EFF1C (sub_1800EFF1C.c)
 * Callees:
 *     sub_1800EFE6C @ 0x1800EFE6C (sub_1800EFE6C.c)
 */

__int64 **__fastcall sub_1800F0320(unsigned __int64 a1, unsigned __int64 a2, __int64 **a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 *v7; // rcx

  v4 = 0LL;
  v5 = (a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = a1 - (_QWORD)a3;
    do
    {
      v7 = *(__int64 **)((char *)a3 + v6);
      ++v4;
      *(__int64 **)((char *)a3 + v6) = 0LL;
      *a3++ = v7;
    }
    while ( v4 != v5 );
  }
  sub_1800EFE6C(a3, a3);
  return a3;
}
