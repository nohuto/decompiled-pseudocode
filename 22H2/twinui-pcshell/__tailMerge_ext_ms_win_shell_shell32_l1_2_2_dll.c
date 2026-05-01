/*
 * XREFs of __tailMerge_ext_ms_win_shell_shell32_l1_2_2_dll @ 0x180094FD5
 * Callers:
 *     __imp_load_PathComparePaths @ 0x180094FC9 (__imp_load_PathComparePaths.c)
 *     __imp_load_SHLogILFromFSIL @ 0x180095054 (__imp_load_SHLogILFromFSIL.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18008B610 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_shell_shell32_l1_2_2_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_shell_shell32_l1_2_2_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
