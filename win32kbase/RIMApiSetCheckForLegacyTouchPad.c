/*
 * XREFs of RIMApiSetCheckForLegacyTouchPad @ 0x1C003017C
 * Callers:
 *     RIMLoadDeviceLegacyInfo @ 0x1C00305E4 (RIMLoadDeviceLegacyInfo.c)
 * Callees:
 *     EtwTraceLegacyTouchPadDetectionStart @ 0x1C002EF60 (EtwTraceLegacyTouchPadDetectionStart.c)
 *     EtwTraceLegacyTouchPadDetectionStop @ 0x1C002EF80 (EtwTraceLegacyTouchPadDetectionStop.c)
 *     RIMGetContainerId @ 0x1C0030264 (RIMGetContainerId.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMIsRunningOnDesktop @ 0x1C007B004 (RIMIsRunningOnDesktop.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     EtwTraceLegacyTouchPadDetected @ 0x1C0163AE0 (EtwTraceLegacyTouchPadDetected.c)
 *     EtwTraceTouchPadWhiteListDeviceDetected @ 0x1C0164520 (EtwTraceTouchPadWhiteListDeviceDetected.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01BFCD4 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C01C00C4 (-IsHIDMouseDeviceRelative@@YAHPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C01C0568 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 */

void __fastcall RIMApiSetCheckForLegacyTouchPad(
        struct DEVICEINFO *a1,
        struct _FILE_OBJECT *a2,
        struct _DEVICE_OBJECT *a3,
        int a4)
{
  BOOL v7; // esi
  __int64 v8; // rcx
  struct _DEVICE_OBJECT *v9; // rdx
  PDEVICE_OBJECT v10; // rcx
  int v11; // r8d
  int v12; // edx
  int v13; // r8d
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  struct _DEVICE_OBJECT *v16; // rdx
  int v17; // [rsp+40h] [rbp-68h] BYREF
  struct _FILE_OBJECT *v18; // [rsp+48h] [rbp-60h]
  __int128 v19; // [rsp+50h] [rbp-58h] BYREF

  v17 = 0;
  v18 = a2;
  v19 = 0LL;
  v7 = gPlatformRole == 2 || gPlatformRole == 8;
  if ( (unsigned int)RIMIsRunningOnDesktop(a1, a2) )
  {
    EtwTraceLegacyTouchPadDetectionStart(v8);
    if ( (int)RIMGetContainerId(a3, &v19, &v17) < 0 )
    {
      v10 = WPP_GLOBAL_Control;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v9,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          19,
          (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
      }
    }
    else if ( !v17 )
    {
      if ( !v7 )
        goto LABEL_8;
      if ( !a4 || (unsigned int)IsHIDMouseDeviceRelative(v18, a3) )
      {
        EtwTraceLegacyTouchPadDetected();
        *((_WORD *)a1 + 440) |= 1u;
        v14 = WPP_GLOBAL_Control;
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v15 = 20;
LABEL_39:
        WPP_RECORDER_AND_TRACE_SF_(
          v14->AttachedDevice,
          v12,
          v13,
          (_DWORD)gRimLog,
          4,
          1,
          v15,
          (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
LABEL_40:
        EtwTraceLegacyTouchPadDetectionStop((__int64)v14);
        if ( gPlatformRole != 8 )
          CheckLegacyPadControlledStatus(a1, v16);
        return;
      }
LABEL_30:
      if ( !IsMouseDeviceOnWhiteList(a1, v9, a4) )
        goto LABEL_8;
      EtwTraceTouchPadWhiteListDeviceDetected();
      *((_WORD *)a1 + 440) |= 1u;
      v14 = WPP_GLOBAL_Control;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_40;
      v15 = 21;
      goto LABEL_39;
    }
    if ( !v7 )
    {
LABEL_8:
      EtwTraceLegacyTouchPadDetectionStop((__int64)v10);
      return;
    }
    goto LABEL_30;
  }
}
