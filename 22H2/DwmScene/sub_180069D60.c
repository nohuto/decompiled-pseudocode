/*
 * XREFs of sub_180069D60 @ 0x180069D60
 * Callers:
 *     sub_180124D87 @ 0x180124D87 (sub_180124D87.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_28 @ 0x180126D34 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180126D34.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180069D60(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
