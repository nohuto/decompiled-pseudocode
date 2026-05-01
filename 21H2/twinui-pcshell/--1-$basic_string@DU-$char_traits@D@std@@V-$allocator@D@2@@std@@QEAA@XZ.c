/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108E9C
 * Callers:
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108EF8 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 *     _ShellFeedsAvailabilityHelpers::CheckFeedsEnablementOnServer_::_1_::dtor$2 @ 0x1801090B1 (_ShellFeedsAvailabilityHelpers--CheckFeedsEnablementOnServer_--_1_--dtor$2.c)
 *     _std::filesystem::_Convert_wide_to_narrow_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x180118211 (_std--filesystem--_Convert_wide_to_narrow_std--char_traits_char__std--allocator_char____--_1_--d.c)
 *     ??0_System_error@std@@IEAA@Verror_code@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18011A95C (--0_System_error@std@@IEAA@Verror_code@1@AEBV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ??0system_error@std@@QEAA@Verror_code@1@@Z @ 0x18011ADF8 (--0system_error@std@@QEAA@Verror_code@1@@Z.c)
 *     _std::system_error::system_error_::_1_::dtor$0 @ 0x18011AE7D (_std--system_error--system_error_--_1_--dtor$0.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18011B778 (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 *     ?_Makestr@_System_error@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@Verror_code@2@V32@@Z @ 0x180126B84 (-_Makestr@_System_error@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@Verr.c)
 *     _std::_System_error::_Makestr_::_1_::dtor$0 @ 0x180126C56 (_std--_System_error--_Makestr_--_1_--dtor$0.c)
 *     _std::_System_error::_Makestr_::_1_::dtor$1 @ 0x180126C62 (_std--_System_error--_Makestr_--_1_--dtor$1.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180126D94 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$0 @ 0x180126F09 (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$0.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$1 @ 0x180126F30 (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$1.c)
 *     _std::filesystem::filesystem_error::_Pretty_message_::_1_::dtor$2 @ 0x180126F3C (_std--filesystem--filesystem_error--_Pretty_message_--_1_--dtor$2.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$0 @ 0x180127166 (_std--filesystem--_Throw_fs_error_--_1_--dtor$0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$0_0 @ 0x1801271D1 (_std--filesystem--_Throw_fs_error_--_1_--dtor$0_0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$0_1 @ 0x180127247 (_std--filesystem--_Throw_fs_error_--_1_--dtor$0_1.c)
 *     _std::_System_error_category::message_::_1_::dtor$0 @ 0x180128776 (_std--_System_error_category--message_--_1_--dtor$0.c)
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x180129030 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 *     _std::basic_filebuf_char_std::char_traits_char___::uflow_::_1_::dtor$0 @ 0x180129282 (_std--basic_filebuf_char_std--char_traits_char___--uflow_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(v1 + 1));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
