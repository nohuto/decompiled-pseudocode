/*
 * XREFs of sub_18000EDC0 @ 0x18000EDC0
 * Callers:
 *     sub_18000C498 @ 0x18000C498 (sub_18000C498.c)
 *     sub_18000D83C @ 0x18000D83C (sub_18000D83C.c)
 * Callees:
 *     sub_18000D9C0 @ 0x18000D9C0 (sub_18000D9C0.c)
 */

__int64 __fastcall sub_18000EDC0(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000D9C0(a1, a2, a3, 0LL, 0LL, retaddr, 3);
}
