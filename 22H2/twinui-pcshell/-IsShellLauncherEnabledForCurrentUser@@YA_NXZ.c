/*
 * XREFs of ?IsShellLauncherEnabledForCurrentUser@@YA_NXZ @ 0x18021EE2C
 * Callers:
 *     ?LoadShellLauncherConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800D6BDC (-LoadShellLauncherConfiguration@KioskPositioner@@AEBA-AV-$optional@UKioskPositionerConfiguration.c)
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180107128 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18021FD50 (-RuntimeClassInitialize@CActionCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1802352F8 (-RuntimeClassInitialize@CToastCenterExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18039D110 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ??R_lambda_207a026ba8118c883d6600b16ffd0ef5_@@QEBAJAEA_N@Z @ 0x18009A204 (--R_lambda_207a026ba8118c883d6600b16ffd0ef5_@@QEBAJAEA_N@Z.c)
 */

char __fastcall IsShellLauncherEnabledForCurrentUser(__int64 a1)
{
  char v1; // bl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0;
  if ( (int)_lambda_207a026ba8118c883d6600b16ffd0ef5_::operator()(a1, &v3) >= 0 )
    return v3 != 0;
  return v1;
}
