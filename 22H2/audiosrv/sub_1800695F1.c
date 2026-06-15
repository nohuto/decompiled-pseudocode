/*
 * XREFs of sub_1800695F1 @ 0x1800695F1
 * Callers:
 *     sub_1800695E5 @ 0x1800695E5 (sub_1800695E5.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_1800695F1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&HrtfApo_dll_import_table, v4);
  return v5(a1, a2, a3, a4);
}
