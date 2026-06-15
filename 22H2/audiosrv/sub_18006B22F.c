/*
 * XREFs of sub_18006B22F @ 0x18006B22F
 * Callers:
 *     sub_18006B223 @ 0x18006B223 (sub_18006B223.c)
 *     sub_18006BC4A @ 0x18006BC4A (sub_18006BC4A.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B22F(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_1801957C8, v4);
  return v5(a1, a2, a3, a4);
}
