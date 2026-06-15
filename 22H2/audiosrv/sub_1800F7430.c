/*
 * XREFs of sub_1800F7430 @ 0x1800F7430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 __fastcall sub_1800F7430(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v4 = 0LL;
  sub_1800D2EA8(&v4, v1);
  *a1 = 0LL;
  sub_18000F708(&v4);
  return 0LL;
}
