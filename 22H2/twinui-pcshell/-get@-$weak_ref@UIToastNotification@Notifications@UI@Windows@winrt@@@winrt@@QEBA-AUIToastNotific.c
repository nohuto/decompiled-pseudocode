/*
 * XREFs of ?get@?$weak_ref@UIToastNotification@Notifications@UI@Windows@winrt@@@winrt@@QEBA?AUIToastNotification@Notifications@UI@Windows@2@XZ @ 0x18014D4B4
 * Callers:
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180147900 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$abi@UIToastNot.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BGA@AA@impl@winrt@@QEAA@XZ @ 0x18014795C (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_18014795C.c)
 *     ??1?$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@?$abi@UIToastNotification@Notifications@UI@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x1801479B8 (--1-$event_revoker@UIToastNotification@Notifications@UI@Windows@winrt@@$MP8type@-$a_ea_1801479B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Notifications::IToastNotification>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_storage<winrt::Windows::UI::Notifications::IToastNotification>::value,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
