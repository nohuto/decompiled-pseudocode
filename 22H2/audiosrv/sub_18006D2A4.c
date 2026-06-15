/*
 * XREFs of sub_18006D2A4 @ 0x18006D2A4
 * Callers:
 *     sub_1800B8A20 @ 0x1800B8A20 (sub_1800B8A20.c)
 * Callees:
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_18006CF50 @ 0x18006CF50 (sub_18006CF50.c)
 */

char __fastcall sub_18006D2A4(volatile signed __int32 *a1)
{
  char v2; // bl
  __int64 v3; // r8
  signed __int32 v5; // [rsp+38h] [rbp+10h] BYREF

  sub_18006CDF4(a1, &v5);
  v2 = v5 & 1;
  sub_18006CF50(a1, v5 & 1, v3);
  return v2;
}
