/*
 * XREFs of ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800E84DC
 * Callers:
 *     ?FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800EA548 (-FindAllTileNotifications@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4RegistryChangeKind@wil@@PEAUHKEY__@@PEBGAEAV?$unique_any_t@V?$registry_watcher_t@V?$unique_storage@U?$resource_policy@PEAUregistry_watcher_state@details@wil@@P6AXPEAU123@@Z$1?delete_registry_watcher_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@8@@Z @ 0x180124FD4 (-RegistryWatcherCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXW4R.c)
 *     _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::operator() @ 0x180147DAC (_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_--operator().c)
 * Callees:
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x180256C24 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 */

char __fastcall winrt::operator==(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rbx
  __int64 v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  winrt::hstring::operator std::basic_string_view<unsigned short>(a1, v5);
  return std::_Traits_equal<std::char_traits<unsigned short>>(v5[0], v5[1], a2, v3);
}
