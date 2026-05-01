/*
 * XREFs of ?IsCortanaNotInstalledOrDisabledByPolicy@XamlLauncherState@@AEBA_NXZ @ 0x180014A20
 * Callers:
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18000EE20 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ @ 0x180011B20 (-BeginCortanaReadinessCutoff@XamlLauncherState@@AEAAXXZ.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180014B50 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?Hide@XamlLauncherState@@UEAAJXZ @ 0x1803A3230 (-Hide@XamlLauncherState@@UEAAJXZ.c)
 *     ?OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1803A4BF0 (-OnCortanaLaunchResult@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@In.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1803A5150 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A5B80 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x1803A6440 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?IsFullscreenCXHRunning@@YA_NXZ @ 0x180014AEC (-IsFullscreenCXHRunning@@YA_NXZ.c)
 */

char __fastcall XamlLauncherState::IsCortanaNotInstalledOrDisabledByPolicy(XamlLauncherState *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 969) || *((_BYTE *)this + 970) || IsFullscreenCXHRunning() )
    return 1;
  return v1;
}
