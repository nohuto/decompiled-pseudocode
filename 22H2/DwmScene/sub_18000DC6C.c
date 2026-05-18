/*
 * XREFs of sub_18000DC6C @ 0x18000DC6C
 * Callers:
 *     sub_18000D03C @ 0x18000D03C (sub_18000D03C.c)
 *     sub_18000EAC8 @ 0x18000EAC8 (sub_18000EAC8.c)
 * Callees:
 *     sub_18000DA98 @ 0x18000DA98 (sub_18000DA98.c)
 */

__int64 __fastcall sub_18000DC6C(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000DA98(a1, a2, a3, 0LL, 0LL, retaddr, 1);
}
