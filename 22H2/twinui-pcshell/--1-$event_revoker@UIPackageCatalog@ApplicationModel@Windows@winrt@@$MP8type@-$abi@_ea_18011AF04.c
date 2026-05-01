/*
 * XREFs of ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18011AF04
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$4 @ 0x18011A6DF (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_18011A6DF.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011B368 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124AB8 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA?AUIPackageCatalog@ApplicationModel@Windows@2@XZ @ 0x180128128 (-get@-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA-AUIPackageCatalog@.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x180128B9C (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 */

void __fastcall __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BGI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(a1, &v3);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      a1,
      v2);
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  }
}
