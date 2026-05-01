/*
 * XREFs of ?Activated@?$consume_Windows_UI_Notifications_IToastNotification@UIToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UToastNotification@Notifications@UI@Windows@winrt@@UIInspectable@Foundation@45@@Foundation@Windows@3@@Z @ 0x180147F94
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??0?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotification@Notifications@UI@Windows@1@@Z @ 0x18011A40C (--0-$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEAA@AEBUIToastNotific.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotification<winrt::Windows::UI::Notifications::IToastNotification>::Activated(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  _QWORD *result; // rax
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[0] = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 88LL))(*a1, *a4, v9);
  winrt::check_hresult(v6);
  v7 = v9[0];
  winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>(
    a2,
    a1);
  result = a2;
  a2[1] = v7;
  return result;
}
