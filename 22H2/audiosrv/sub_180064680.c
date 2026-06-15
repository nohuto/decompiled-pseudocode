/*
 * XREFs of sub_180064680 @ 0x180064680
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 * Callees:
 *     sub_1800646D8 @ 0x1800646D8 (sub_1800646D8.c)
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 */

__int64 __fastcall sub_180064680(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+30h] [rbp-18h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = sub_1800648C8(a1, a2, (unsigned int)&v8, (unsigned int)&v7, (__int64)&v6);
  if ( !v4 )
    v4 = sub_1800646D8(a1, a2, v8);
  return v4 + 8;
}
