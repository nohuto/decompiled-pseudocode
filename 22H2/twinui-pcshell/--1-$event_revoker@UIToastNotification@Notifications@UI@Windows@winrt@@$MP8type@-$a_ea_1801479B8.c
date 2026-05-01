/*
 * XREFs of ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1801479B8
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$2_::_1_::dtor$16 @ 0x18014CF6B (_RequestNotificationPinConsentAsync$_ResumeCoro$2_--_1_--dtor$16.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ?get@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEBA?AUIToastNotification@Notifications@UI@Windows@2@XZ @ 0x18014D4B4 (-get@-$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEBA-AUIToastNotific.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x180162440 (--_9ISwitchItemController@@$BHA@AA.c)
 */

void __fastcall __1__event_revoker_UIToastNotification_Notifications_UI_Windows_winrt___MP8type___abi_UIToastNotification_Notifications_UI_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 *v2; // rdi
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *a1 )
  {
    v2 = (__int64 *)winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::get(a1, v3);
    if ( *v2 )
       ISwitchItemController::`vcall'{112,{flat}}(*v2, a1[1]);
    winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v2);
    if ( *a1 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  }
}
