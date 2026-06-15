/*
 * XREFs of sub_180063F94 @ 0x180063F94
 * Callers:
 *     sub_180033E20 @ 0x180033E20 (sub_180033E20.c)
 *     sub_180063F00 @ 0x180063F00 (sub_180063F00.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall sub_180063F94(_QWORD *a1))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))qword_18019FA30;
  if ( qword_18019FA30 )
    return (__int64 (*)(void))result();
  result = (__int64 (*)(void))qword_18019F990;
  if ( qword_18019F990 )
    return (__int64 (*)(void))result();
  *a1 = 0LL;
  return result;
}
