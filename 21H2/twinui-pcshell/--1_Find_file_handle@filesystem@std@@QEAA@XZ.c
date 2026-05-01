/*
 * XREFs of ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x18011B73C
 * Callers:
 *     _std::_Ref_count_obj_std::filesystem::_Dir_enum_impl_::_Ref_count_obj_std::filesystem::_Dir_enum_impl__std::filesystem::_Dir_enum_impl::_Creator_enum_std::filesystem::directory_options_const_&__::_1_::dtor$2 @ 0x180116C37 (_std--_Ref_count_obj_std--filesystem--_Dir_enum_impl_--_Ref_count_obj_std--filesyst_ea_180116C37.c)
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$3 @ 0x1801184D2 (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_1801184D2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::_Find_file_handle::~_Find_file_handle(std::filesystem::_Find_file_handle *this)
{
  _std_fs_directory_iterator_close(*(_QWORD *)this);
}
