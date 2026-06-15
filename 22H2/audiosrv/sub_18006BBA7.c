/*
 * XREFs of sub_18006BBA7 @ 0x18006BBA7
 * Callers:
 *     sub_18006BB9B @ 0x18006BB9B (sub_18006BB9B.c)
 *     sub_18006BC26 @ 0x18006BC26 (sub_18006BC26.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006BBA7(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_180195888, v4);
  return v5(a1, a2, a3, a4);
}
