/*
 * XREFs of ?_Destroy@?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@AEAAXPEAU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@0@Z @ 0x180126308
 * Callers:
 *     ??1?$vector@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@V?$allocator@U?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@@std@@@std@@QEAA@XZ @ 0x18011B430 (--1-$vector@U-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@Start.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18011B4D8 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?get@?$weak_ref@UITile@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA?AUITile@StartScreen@UI@WindowsUdk@2@XZ @ 0x1801282E8 (-get@-$weak_ref@UITile@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEBA-AUITile@StartScreen@UI@Wind.c)
 *     ?revoke_impl@?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@Z1??_96785@$BOA@AA@impl@winrt@@AEAAXUITile@StartScreen@UI@WindowsUdk@3@@Z @ 0x180128D3C (-revoke_impl@-$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@-$abi@UITile@Start.c)
 */

void __fastcall __Destroy___vector_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BOA_AA_impl_winrt__V__allocator_U__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BOA_AA_impl_winrt___std___std__AEAAXPEAU__event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BOA_AA_impl_winrt__0_Z(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 != a3 )
  {
    v6 = a1;
    v4 = a2;
    do
    {
      if ( *v4 )
      {
        v5 = winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITile>::get(v4, &v6);
        _revoke_impl___event_revoker_UITile_StartScreen_UI_WindowsUdk_winrt___MP8type___abi_UITile_StartScreen_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5__Z1___96785__BOA_AA_impl_winrt__AEAAXUITile_StartScreen_UI_WindowsUdk_3__Z(
          v4,
          v5);
        if ( *v4 )
          winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v4);
      }
      v4 += 2;
    }
    while ( v4 != a3 );
  }
}
