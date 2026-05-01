/*
 * XREFs of ??0?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x18011A40C
 * Callers:
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180124AB8 (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?Activated@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UIInspectable@Foundation@45@@Foundation@Windows@3@@Z @ 0x180147F94 (-Activated@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     ?Dismissed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastDismissedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1801494F8 (-Dismissed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notificatio.c)
 *     ?Failed@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UToastFailedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180149558 (-Failed@-$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004D4F4 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIWeakReferenceSource@impl@winrt@@@3@XZ @ 0x18021CF44 (--$as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIW.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rax
  unsigned int v4; // eax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  if ( *a2 )
  {
    v3 = (_QWORD *)winrt::Windows::Foundation::IUnknown::as<winrt::impl::IWeakReferenceSource>(a2, &v6);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v3 + 24LL))(*v3, a1);
    winrt::check_hresult(v4);
    if ( v6 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v6);
  }
  return a1;
}
