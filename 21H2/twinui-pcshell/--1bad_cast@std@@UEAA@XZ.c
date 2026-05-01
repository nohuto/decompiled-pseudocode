/*
 * XREFs of ??1bad_cast@std@@UEAA@XZ @ 0x18011B74C
 * Callers:
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0 @ 0x18011AB10 (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0_0 @ 0x18011AC2A (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0_0.c)
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0_1 @ 0x18011ACDC (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0_1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
}
