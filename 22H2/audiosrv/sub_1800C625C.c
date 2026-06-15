/*
 * XREFs of sub_1800C625C @ 0x1800C625C
 * Callers:
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_5 @ 0x180075440 (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180075440.c)
 *     sub_1800D0209 @ 0x1800D0209 (sub_1800D0209.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_24 @ 0x1800ED846 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_24.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BB290 @ 0x1800BB290 (sub_1800BB290.c)
 */

BOOL __fastcall sub_1800C625C(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rbp
  __int64 *v4; // rsi
  __int64 v5; // rdx
  BOOL result; // eax
  unsigned __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = *(__int64 **)a1;
    if ( v1 != v3 )
    {
      do
        sub_18000F708(v4++);
      while ( v4 != v3 );
    }
    v5 = *(_QWORD *)(a1 + 16) - (_QWORD)v1;
    v8 = v1;
    v7 = v5 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
    {
      sub_1800BB290(&v8, &v7);
      v1 = v8;
    }
    result = sub_18006A148(v1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
