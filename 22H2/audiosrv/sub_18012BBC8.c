/*
 * XREFs of sub_18012BBC8 @ 0x18012BBC8
 * Callers:
 *     sub_180128EB0 @ 0x180128EB0 (sub_180128EB0.c)
 *     sub_180128F30 @ 0x180128F30 (sub_180128F30.c)
 *     sub_180128FE0 @ 0x180128FE0 (sub_180128FE0.c)
 *     sub_180129090 @ 0x180129090 (sub_180129090.c)
 * Callees:
 *     sub_18012BB74 @ 0x18012BB74 (sub_18012BB74.c)
 */

__int64 __fastcall sub_18012BBC8(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-48h] BYREF
  int v3; // [rsp+30h] [rbp-38h]
  __int128 v4; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v4 = 0LL;
  LOWORD(v4) = 65;
  v5 = a1 + 544;
  v3 = 2;
  DWORD2(v4) = 24;
  v2 = xmmword_180160310;
  return sub_18012BB74(a1, (__int64)&v2, (__int64)&v4);
}
