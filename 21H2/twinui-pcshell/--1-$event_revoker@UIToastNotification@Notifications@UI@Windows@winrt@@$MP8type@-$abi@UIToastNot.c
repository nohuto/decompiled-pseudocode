/*
 * XREFs of ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180147A70
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$13 @ 0x18014D07D (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--dtor$13.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?get@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEBA?AUIToastNotification@Notifications@UI@Windows@2@XZ @ 0x18014D624 (-get@-$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEBA-AUIToastNotific.c)
 *     ??_9ITabletModeController@@$BFA@AA @ 0x180164DD0 (--_9ITabletModeController@@$BFA@AA.c)
 */

void __fastcall __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BFA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // r8
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::get(a1, v4);
    if ( *v2 )
       ITabletModeController::`vcall'{80,{flat}}(*v2, a1[1], v3);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v2);
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  }
}
