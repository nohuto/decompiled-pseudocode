/*
 * XREFs of sub_18006B36E @ 0x18006B36E
 * Callers:
 *     sub_18006B362 @ 0x18006B362 (sub_18006B362.c)
 *     sub_18006B3ED @ 0x18006B3ED (sub_18006B3ED.c)
 *     sub_18006B411 @ 0x18006B411 (sub_18006B411.c)
 *     sub_18006B423 @ 0x18006B423 (sub_18006B423.c)
 *     sub_18006B447 @ 0x18006B447 (sub_18006B447.c)
 *     sub_18006B7AA @ 0x18006B7AA (sub_18006B7AA.c)
 *     sub_18006C872 @ 0x18006C872 (sub_18006C872.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B36E(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_1801957E8, v4);
  return v5(a1, a2, a3, a4);
}
