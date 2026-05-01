/*
 * XREFs of ??0ToastNotification@Notifications@UI@Windows@winrt@@QEAA@AEBUXmlDocument@Dom@Xml@Data@34@@Z @ 0x1801479E4
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A800 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??$call@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?AUToastNotification@Notifications@UI@Windows@2@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@Z @ 0x1801470D8 (--$call@AEAV_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_@@@-$factory_cache_entry@UToastNotification.c)
 */

winrt::Windows::UI::Notifications::ToastNotification *__fastcall winrt::Windows::UI::Notifications::ToastNotification::ToastNotification(
        winrt::Windows::UI::Notifications::ToastNotification *this,
        const struct winrt::Windows::Data::Xml::Dom::XmlDocument *a2)
{
  const struct winrt::Windows::Data::Xml::Dom::XmlDocument *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>::call<_lambda_ae3e3329e4ccaf11d4fe1392d287dc16_ &>(
    (__int64)this,
    (__int64)this,
    &v4);
  return this;
}
