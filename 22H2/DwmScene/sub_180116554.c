/*
 * XREFs of sub_180116554 @ 0x180116554
 * Callers:
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 * Callees:
 *     sub_18011657C @ 0x18011657C (sub_18011657C.c)
 */

__int64 __fastcall sub_180116554(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_18011657C(a1, a2, v3);
  return a1;
}
