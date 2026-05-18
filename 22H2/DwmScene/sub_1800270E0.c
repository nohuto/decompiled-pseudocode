/*
 * XREFs of sub_1800270E0 @ 0x1800270E0
 * Callers:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 *     sub_1800289D4 @ 0x1800289D4 (sub_1800289D4.c)
 *     sub_180028A8C @ 0x180028A8C (sub_180028A8C.c)
 *     sub_18002BEA4 @ 0x18002BEA4 (sub_18002BEA4.c)
 *     sub_1800728D0 @ 0x1800728D0 (sub_1800728D0.c)
 *     sub_1800D40E0 @ 0x1800D40E0 (sub_1800D40E0.c)
 *     sub_1800DC97C @ 0x1800DC97C (sub_1800DC97C.c)
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 * Callees:
 *     sub_1800270E0 @ 0x1800270E0 (sub_1800270E0.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800270E0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_1800270E0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
