/*
 * XREFs of sub_1800F0384 @ 0x1800F0384
 * Callers:
 *     sub_1800F0078 @ 0x1800F0078 (sub_1800F0078.c)
 * Callees:
 *     sub_1800EFEC4 @ 0x1800EFEC4 (sub_1800EFEC4.c)
 */

_QWORD *__fastcall sub_1800F0384(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx

  v4 = 0LL;
  v5 = (a2 - a1 + 7) >> 3;
  if ( a1 > a2 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = a1 - (_QWORD)a3;
    do
    {
      v7 = *(_QWORD *)((char *)a3 + v6);
      ++v4;
      *(_QWORD *)((char *)a3 + v6) = 0LL;
      *a3++ = v7;
    }
    while ( v4 != v5 );
  }
  sub_1800EFEC4(a3, a3);
  return a3;
}
