/*
 * XREFs of ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18011B608
 * Callers:
 *     ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x18011BEE0 (--_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180108D2C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

void __fastcall std::filesystem::filesystem_error::~filesystem_error(std::filesystem::filesystem_error *this)
{
  std::string::~string((__int64)this + 104);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 9);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 5);
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0((__int64)this + 8);
}
