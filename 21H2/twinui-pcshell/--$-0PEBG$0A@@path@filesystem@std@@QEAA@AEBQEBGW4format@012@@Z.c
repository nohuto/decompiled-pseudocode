/*
 * XREFs of ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x180116978
 * Callers:
 *     ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320 (-BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAX.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@X@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180116D14 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@X@-$basic_string@GU-$char_traits@G@std@@V.c)
 */

__int64 __fastcall std::filesystem::path::path(__int64 a1)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = -1LL;
  v4[0] = L"lastCompatBackupTime.txt";
  do
    ++v2;
  while ( aLastcompatback[v2] );
  v4[1] = v2;
  std::wstring::wstring(a1, v4);
  return a1;
}
