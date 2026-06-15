/*
 * XREFs of sub_18006BFC5 @ 0x18006BFC5
 * Callers:
 *     sub_18006BFB9 @ 0x18006BFB9 (sub_18006BFB9.c)
 *     sub_18006C098 @ 0x18006C098 (sub_18006C098.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006BFC5(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&dword_180195928, v4);
  return v5(a1, a2, a3, a4);
}
