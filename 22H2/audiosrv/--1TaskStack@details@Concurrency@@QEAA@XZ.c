/*
 * XREFs of ??1TaskStack@details@Concurrency@@QEAA@XZ @ 0x1800B7BD0
 * Callers:
 *     sub_180072E20 @ 0x180072E20 (sub_180072E20.c)
 *     sub_180076180 @ 0x180076180 (sub_180076180.c)
 *     sub_180076270 @ 0x180076270 (sub_180076270.c)
 *     ?dtor$0@?0??_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4 @ 0x1800762A0 (-dtor$0@-0--_wcstombs_l_helper@@YA_KPEADPEB_W_KPEAU__crt_locale_pointers@@@Z@4HA_4.c)
 *     ?dtor$0@?0??str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEGBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ@4HA @ 0x180076310 (-dtor$0@-0--str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEGBA-AV-$basic_.c)
 *     sub_180076340 @ 0x180076340 (sub_180076340.c)
 *     sub_1800764E0 @ 0x1800764E0 (sub_1800764E0.c)
 *     sub_180077E50 @ 0x180077E50 (sub_180077E50.c)
 *     sub_180077F30 @ 0x180077F30 (sub_180077F30.c)
 *     sub_1800790C0 @ 0x1800790C0 (sub_1800790C0.c)
 *     sub_180079300 @ 0x180079300 (sub_180079300.c)
 *     unknown_libname_249 @ 0x180079D80 (unknown_libname_249.c)
 *     sub_18007AC04 @ 0x18007AC04 (sub_18007AC04.c)
 *     sub_18007BD20 @ 0x18007BD20 (sub_18007BD20.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_15 @ 0x18007BE6D (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_18007BE6D.c)
 *     sub_1800E1B1A @ 0x1800E1B1A (sub_1800E1B1A.c)
 *     sub_1800E5D06 @ 0x1800E5D06 (sub_1800E5D06.c)
 *     sub_1800EF6B7 @ 0x1800EF6B7 (sub_1800EF6B7.c)
 *     sub_1800EF6E1 @ 0x1800EF6E1 (sub_1800EF6E1.c)
 *     ?dtor$0@?0??do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z@4HA @ 0x180106D7C (-dtor$0@-0--do_transform@-$collate@G@std@@MEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_64 @ 0x180107AAE (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_180107AAE.c)
 *     ?dtor$0@?0???$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_resizing@@@@YAHAEAV?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@@Z@4HA_65 @ 0x1801089AD (-dtor$0@-0---$__acrt_get_current_directory@U__crt_win32_buffer_internal_dynamic_res_ea_1801089AD.c)
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 */

void __fastcall Concurrency::details::TaskStack::~TaskStack(Concurrency::details::TaskStack *this)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v1 )
    sub_180052600(v1);
}
