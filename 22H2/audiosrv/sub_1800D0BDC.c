/*
 * XREFs of sub_1800D0BDC @ 0x1800D0BDC
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_14 @ 0x18007A21B (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18007A21B.c)
 *     sub_1800D149D @ 0x1800D149D (sub_1800D149D.c)
 * Callees:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800D0BDC(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    sub_1800027F4((_QWORD *)*a1, (_QWORD *)a1[1]);
    result = sub_1800472E0(v1, (a1[2] - v1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
