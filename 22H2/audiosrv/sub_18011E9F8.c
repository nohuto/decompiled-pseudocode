/*
 * XREFs of sub_18011E9F8 @ 0x18011E9F8
 * Callers:
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_180059458 @ 0x180059458 (sub_180059458.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_1801191A4 @ 0x1801191A4 (sub_1801191A4.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 * Callees:
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 */

__int64 __fastcall sub_18011E9F8(__int64 *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  __int64 v3; // r11

  v2 = sub_180022EE0(a1, a2);
  if ( v2 == -1 )
    return 0LL;
  else
    return sub_18011EACC(v3, v2);
}
