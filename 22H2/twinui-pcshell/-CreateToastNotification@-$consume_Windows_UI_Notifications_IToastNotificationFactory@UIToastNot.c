/*
 * XREFs of ?CreateToastNotification@?$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotification@Notifications@UI@Windows@3@AEBUXmlDocument@Dom@Xml@Data@73@@Z @ 0x180149340
 * Callers:
 *     ??$call@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?AUToastNotification@Notifications@UI@Windows@2@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@Z @ 0x180146F68 (--$call@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@-$factory_cache_entry@UToastNotification.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  unsigned int v5; // eax
  _QWORD *result; // rax
  _QWORD *v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = a2;
  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  winrt::check_hresult(v5);
  result = a2;
  *a2 = v7;
  return result;
}
