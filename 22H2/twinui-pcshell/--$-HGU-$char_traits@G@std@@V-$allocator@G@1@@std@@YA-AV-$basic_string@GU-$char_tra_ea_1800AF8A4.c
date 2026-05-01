/*
 * XREFs of ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEBG$$QEAV10@@Z @ 0x1800AF8A4
 * Callers:
 *     _lambda_6e6fea714a04690c65ea3b6c1455a89e_::operator() @ 0x1800B15C0 (_lambda_6e6fea714a04690c65ea3b6c1455a89e_--operator().c)
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FA0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124DA8 (-RegisterRegistryWatchers@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _anonymous_namespace_::CreateTemporaryFile @ 0x180148B44 (_anonymous_namespace_--CreateTemporaryFile.c)
 * Callees:
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180267B18 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

__int64 __fastcall std::operator+<unsigned short>(__int64 a1, __int64 a2, void *a3)
{
  __int64 v3; // r9
  __int64 v5; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  v5 = std::wstring::insert(a3);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v5;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v5 + 16);
  *(_QWORD *)(v5 + 16) = 0LL;
  *(_QWORD *)(v5 + 24) = 7LL;
  *(_WORD *)v5 = 0;
  return a1;
}
