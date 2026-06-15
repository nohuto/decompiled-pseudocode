/*
 * XREFs of sub_180058B74 @ 0x180058B74
 * Callers:
 *     sub_180054760 @ 0x180054760 (sub_180054760.c)
 * Callees:
 *     sub_180058C08 @ 0x180058C08 (sub_180058C08.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180058B74(int a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD v4[6]; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v5[6]; // [rsp+48h] [rbp-28h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  v5[4] = 1;
  v4[4] = 1;
  v5[0] = 590439624;
  v5[1] = 1283267372;
  v5[2] = 1907779772;
  v5[3] = 1730509416;
  v4[0] = -1702713381;
  v4[1] = 1102331579;
  v4[2] = -1223116157;
  v4[3] = -65530063;
  return sub_180058C08(a1, (unsigned int)v5, (unsigned int)v4, (_DWORD)a2, (__int64)a3);
}
