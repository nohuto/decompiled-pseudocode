/*
 * XREFs of ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_3 @ 0x18012030D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `__acrt_get_current_directory<__crt_win32_buffer_internal_dynamic_resizing>'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(a2 + 32));
}
