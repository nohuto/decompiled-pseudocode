/*
 * XREFs of ?revoke_impl@?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@AEAAXUITile@StartScreen@UI@WindowsUdk@3@@Z @ 0x180128D3C
 * Callers:
 *     ?_Destroy@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@AEAAXPEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@0@Z @ 0x180126308 (-_Destroy@-$vector@U-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITil.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180129340 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 * Callees:
 *     ??_9type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BOA@AA @ 0x18017181C (--_9type@-$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@winrt@@$BOA@AA.c)
 */

__int64 __fastcall _revoke_impl___event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BOA_AA_impl_winrt__AEAAXUITile_StartScreen_UI_WindowsUdk_3__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *a2 )
     winrt::impl::abi<winrt::WindowsUdk::UI::StartScreen::ITile,void>::type::`vcall'{224,{flat}}(
      *a2,
      *(_QWORD *)(a1 + 8));
  return winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
}
