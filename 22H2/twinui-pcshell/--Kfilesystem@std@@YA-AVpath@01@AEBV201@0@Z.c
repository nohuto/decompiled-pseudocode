/*
 * XREFs of ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x18011B8D0
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F1B0 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x180148B44 (_anonymous_namespace_--CreateTemporaryFile.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18011BAA0 (--_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::filesystem::operator/(__int64 a1)
{
  _QWORD Src[4]; // [rsp+28h] [rbp-30h] BYREF

  std::wstring::wstring((__int64)Src);
  std::filesystem::path::operator/=(Src);
  std::wstring::wstring(a1);
  std::wstring::_Tidy_deallocate(Src);
  return a1;
}
