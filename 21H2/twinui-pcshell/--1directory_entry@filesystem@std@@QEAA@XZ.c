/*
 * XREFs of ??1directory_entry@filesystem@std@@QEAA@XZ @ 0x18011B768
 * Callers:
 *     _std::_Ref_count_obj_std::filesystem::_Dir_enum_impl_::_Ref_count_obj_std::filesystem::_Dir_enum_impl__std::filesystem::_Dir_enum_impl::_Creator_enum_std::filesystem::directory_options_const_&__::_1_::dtor$1 @ 0x180116C2B (_std--_Ref_count_obj_std--filesystem--_Dir_enum_impl_--_Ref_count_obj_std--filesyst_ea_180116C2B.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::directory_entry::~directory_entry(std::filesystem::directory_entry *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
}
