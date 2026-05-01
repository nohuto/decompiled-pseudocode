/*
 * XREFs of ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x180128B9C
 * Callers:
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18011AF04 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18011AF04.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801291D0 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     ??_9IPropertyValue@Foundation@Windows@@$BGI@AA @ 0x180164C80 (--_9IPropertyValue@Foundation@Windows@@$BGI@AA.c)
 */

__int64 __fastcall _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4__Z1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     Windows::Foundation::IPropertyValue::`vcall'{104,{flat}}(*a2, *(_QWORD *)(a1 + 8));
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
}
