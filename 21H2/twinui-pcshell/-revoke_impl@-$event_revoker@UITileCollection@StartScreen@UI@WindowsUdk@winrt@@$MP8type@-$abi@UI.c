/*
 * XREFs of ?revoke_impl@?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BEI@AA@impl@winrt@@AEAAXUITileCollection@StartScreen@UI@WindowsUdk@3@@Z @ 0x180128CAC
 * Callers:
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@Z1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18011AFF4 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??1?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x18011B0B4 (--1-$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITileCollec.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011B4D8 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180129340 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     ??_9ITabletModeController@@$BEI@AA @ 0x180166940 (--_9ITabletModeController@@$BEI@AA.c)
 */

__int64 __fastcall _revoke_impl___event_revoker_UITileCollection_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITileCollection_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BEI_AA_impl_winrt__AEAAXUITileCollection_StartScreen_UI_WindowsUdk_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     ITabletModeController::`vcall'{72,{flat}}(*a2, *(_QWORD *)(a1 + 8));
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
}
