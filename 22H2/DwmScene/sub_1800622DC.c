/*
 * XREFs of sub_1800622DC @ 0x1800622DC
 * Callers:
 *     ?dtor$4@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180124A6A (-dtor$4@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_7 @ 0x180124A86 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180124A86.c)
 * Callees:
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 */

__int64 __fastcall sub_1800622DC(unsigned int *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax

  v2 = -*((_QWORD *)a1 + 1);
  v3 = sub_1800CBBF8(a1);
  return sub_1800CBBE0(v3, *a1, 2LL, v2);
}
