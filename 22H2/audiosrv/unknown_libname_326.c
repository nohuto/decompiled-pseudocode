/*
 * XREFs of unknown_libname_326 @ 0x180100190
 * Callers:
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_46 @ 0x180102FDF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_46.c)
 *     sub_1801035FD @ 0x1801035FD (sub_1801035FD.c)
 *     sub_1801041A1 @ 0x1801041A1 (sub_1801041A1.c)
 *     sub_1801041ED @ 0x1801041ED (sub_1801041ED.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_47 @ 0x1801043E3 (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_47.c)
 *     ?dtor$0@?0??_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_48 @ 0x1801043EF (-dtor$0@-0--_wcrtomb_s_l@@YAHQEAHQEAD_K_WQEAU_Mbstatet@@QEAU__crt_locale_pointers@@@Z@4HA_48.c)
 * Callees:
 *     sub_18010046C @ 0x18010046C (sub_18010046C.c)
 */

// Microsoft VisualC v7/14 64bit runtime
// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_326(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    result = sub_18010046C();
  *a1 = 0LL;
  return result;
}
