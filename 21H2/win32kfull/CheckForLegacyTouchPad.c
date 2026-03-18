/*
 * XREFs of CheckForLegacyTouchPad @ 0x1C011A940
 * Callers:
 *     <none>
 * Callees:
 *     GetContainerId @ 0x1C011AA14 (GetContainerId.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01CFC14 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01CFE2C (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C01CFFA0 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 */

void __fastcall CheckForLegacyTouchPad(
        struct DEVICEINFO *a1,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        int a4)
{
  BOOL v8; // esi
  struct _DEVICE_OBJECT *v9; // rdx
  struct _DEVICE_OBJECT *v10; // rdx
  int v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+28h] [rbp-40h] BYREF

  v11 = 0;
  v12 = 0LL;
  v8 = gPlatformRole == 2 || gPlatformRole == 8;
  EtwTraceLegacyTouchPadDetectionStart();
  if ( (int)GetContainerId(a3, &v12, &v11) < 0 || v11 )
  {
    if ( !v8 )
    {
LABEL_7:
      EtwTraceLegacyTouchPadDetectionStop();
      return;
    }
  }
  else
  {
    if ( !v8 )
      goto LABEL_7;
    if ( !a4 || (unsigned int)IsHIDMouseDeviceRelative(a2, a3) )
    {
      EtwTraceLegacyTouchPadDetected();
      goto LABEL_16;
    }
  }
  if ( !IsMouseDeviceOnWhiteList(a1, v9, a4) )
    goto LABEL_7;
  EtwTraceTouchPadWhiteListDeviceDetected();
LABEL_16:
  *((_WORD *)a1 + 440) |= 1u;
  EtwTraceLegacyTouchPadDetectionStop();
  if ( gPlatformRole != 8 )
    CheckLegacyPadControlledStatus(a1, v10);
}
