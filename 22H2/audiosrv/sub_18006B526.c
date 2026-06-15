/*
 * XREFs of sub_18006B526 @ 0x18006B526
 * Callers:
 *     sub_18006B51A @ 0x18006B51A (sub_18006B51A.c)
 *     sub_18006B5C9 @ 0x18006B5C9 (sub_18006B5C9.c)
 *     sub_18006B5DB @ 0x18006B5DB (sub_18006B5DB.c)
 *     sub_18006B5ED @ 0x18006B5ED (sub_18006B5ED.c)
 *     sub_18006B5FF @ 0x18006B5FF (sub_18006B5FF.c)
 * Callees:
 *     sub_180046570 @ 0x180046570 (sub_180046570.c)
 */

__int64 __fastcall sub_18006B526(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(__int64, __int64, __int64, __int64); // rax

  v5 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_180046570((__int64)&HID_DLL_import_table, v4);
  return v5(a1, a2, a3, a4);
}
