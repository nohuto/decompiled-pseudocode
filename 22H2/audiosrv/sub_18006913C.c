/*
 * XREFs of sub_18006913C @ 0x18006913C
 * Callers:
 *     sub_18007A209 @ 0x18007A209 (sub_18007A209.c)
 *     sub_18007A267 @ 0x18007A267 (sub_18007A267.c)
 *     sub_18007D000 @ 0x18007D000 (sub_18007D000.c)
 *     unknown_libname_72 @ 0x1800B9CD6 (unknown_libname_72.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_39 @ 0x1800EABA1 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1800EABA1.c)
 *     sub_1800EC0A6 @ 0x1800EC0A6 (sub_1800EC0A6.c)
 * Callees:
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 */

__int64 __fastcall sub_18006913C(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_18002AD80(v1);
  return result;
}
