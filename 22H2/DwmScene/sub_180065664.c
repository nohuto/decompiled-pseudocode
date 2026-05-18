/*
 * XREFs of sub_180065664 @ 0x180065664
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_10 @ 0x180124B50 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180124B50.c)
 * Callees:
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 */

__int64 __fastcall sub_180065664(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 result; // rax

  v1 = a1[1];
  v2 = *a1;
  if ( *a1 != v1 )
  {
    v3 = (__int64 *)(v2 + 136);
    do
    {
      result = sub_1800646EC(v3, (__int64)v3);
      v2 += 152LL;
      v3 += 19;
    }
    while ( v2 != v1 );
  }
  return result;
}
