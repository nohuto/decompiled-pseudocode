/*
 * XREFs of sub_1800F7380 @ 0x1800F7380
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 __fastcall sub_1800F7380(__int64 a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  sub_1800D2EA8(&v2, a1);
  return sub_18000F708(&v2);
}
