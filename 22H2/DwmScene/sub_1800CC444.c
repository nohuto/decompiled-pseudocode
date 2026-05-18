/*
 * XREFs of sub_1800CC444 @ 0x1800CC444
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_30 @ 0x180127E04 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180127E04.c)
 * Callees:
 *     sub_180065AF4 @ 0x180065AF4 (sub_180065AF4.c)
 */

__int64 *__fastcall sub_1800CC444(__int64 **a1)
{
  __int64 *v1; // rdi
  __int64 *i; // rbx
  __int64 *result; // rax

  v1 = a1[1];
  for ( i = *a1; i != v1; i += 6 )
    result = sub_180065AF4(i, 0);
  return result;
}
