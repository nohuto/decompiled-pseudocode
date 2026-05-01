/*
 * XREFs of ?EscapeComponent@Uri@Foundation@Windows@winrt@@SA@AEBUhstring@param@4@@Z @ 0x1800B2AF8
 * Callers:
 *     ?NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B5FA0 (-NotifyNewLockscreenContent@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@?$factory_cache_entry@UUri@Foundation@Windows@winrt@@UIUriEscapeStatics@234@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@Z @ 0x1800B0D08 (--$call@AEAV_lambda_c87063b83fd259e9c3b4fbc6733d65f8_@@@-$factory_cache_entry@UUri@Foundation@Wi.c)
 */

const struct winrt::param::hstring *__fastcall winrt::Windows::Foundation::Uri::EscapeComponent(
        const struct winrt::param::hstring *a1,
        __int64 a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  winrt::impl::factory_cache_entry<winrt::Windows::Foundation::Uri,winrt::Windows::Foundation::IUriEscapeStatics>::call<_lambda_c87063b83fd259e9c3b4fbc6733d65f8_ &>(
    (__int64)a1,
    (__int64)a1,
    &v4);
  return a1;
}
