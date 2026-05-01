/*
 * XREFs of ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x18011B714
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$0 @ 0x1801184E2 (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_i_ea_1801184E2.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x18014DC88 (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::_Creator::~_Creator(std::filesystem::_Dir_enum_impl::_Creator *this)
{
  _std_fs_directory_iterator_close(*((_QWORD *)this + 4));
  std::wstring::_Tidy_deallocate(this);
}
