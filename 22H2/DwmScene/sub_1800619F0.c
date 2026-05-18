/*
 * XREFs of sub_1800619F0 @ 0x1800619F0
 * Callers:
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061744 @ 0x180061744 (sub_180061744.c)
 *     sub_1800617C8 @ 0x1800617C8 (sub_1800617C8.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_1800619B8 @ 0x1800619B8 (sub_1800619B8.c)
 * Callees:
 *     sub_18006151C @ 0x18006151C (sub_18006151C.c)
 *     sub_1800616BC @ 0x1800616BC (sub_1800616BC.c)
 */

bool __fastcall sub_1800619F0(__int64 a1, char a2)
{
  __int64 v4; // rdi
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(sub_1800616BC() + 8);
  return *sub_18006151C(a1, &v6, a2) != v4;
}
