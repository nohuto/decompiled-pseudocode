/*
 * XREFs of IsLegacyTouchPadDevice @ 0x1C0121020
 * Callers:
 *     <none>
 * Callees:
 *     ?IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0121178 (-IsHIDMouseDeviceRelative@@YAHPEAUDEVICEINFO@@PEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetContainerId @ 0x1C01213E0 (GetContainerId.c)
 *     ?IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0121828 (-IsHIDMouse@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     GetDeviceObjectPointer @ 0x1C0121A2C (GetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0220430 (-CheckLegacyPadControlledStatus@@YAXPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     ?IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z @ 0x1C0220690 (-IsMouseDeviceOnWhiteList@@YAHPEAUDEVICEINFO@@PEAU_DEVICE_OBJECT@@H@Z.c)
 */

__int64 __fastcall IsLegacyTouchPadDevice(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  int v5; // r15d
  BOOL v6; // r14d
  struct _DEVICE_OBJECT *v7; // rsi
  struct DEVICEINFO *v8; // rcx
  int v9; // eax
  int v11; // [rsp+30h] [rbp-40h] BYREF
  PVOID v12; // [rsp+38h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v3 = 0;
  Object = 0LL;
  v11 = 0;
  v12 = 0LL;
  v5 = 0;
  Handle = 0LL;
  v15 = 0LL;
  v6 = gPlatformRole == 2 || gPlatformRole == 8;
  if ( (int)GetDeviceObjectPointer((int)a1 + 208, 0, a3, (unsigned int)&Handle, (__int64)&v12, (__int64)&Object) >= 0 )
  {
    v7 = (struct _DEVICE_OBJECT *)Object;
    ObfReferenceObject(Object);
    if ( (int)GetContainerId(v7, &v15, &v11) >= 0 )
    {
      v5 = IsHIDMouse(v8, v7);
      v9 = 0;
      if ( v5 )
        v9 = IsHIDMouseDeviceRelative(a1, (struct _FILE_OBJECT *)v12, v7);
      if ( !v11 )
      {
        if ( !v6 )
          goto LABEL_11;
        if ( !v5 || v9 )
        {
          EtwTraceLegacyTouchPadDetected();
          *((_WORD *)a1 + 444) |= 1u;
          v3 = 1;
        }
      }
    }
    if ( v6 )
    {
      if ( v3 )
        goto LABEL_21;
      v3 = IsMouseDeviceOnWhiteList(a1, v7, v5);
      if ( !v3 )
        goto LABEL_11;
      EtwTraceTouchPadWhiteListDeviceDetected();
      *((_WORD *)a1 + 444) |= 1u;
    }
    if ( !v3 )
    {
LABEL_11:
      ZwClose(Handle);
      ObfDereferenceObject(v12);
      ObfDereferenceObject(v7);
      return v3;
    }
LABEL_21:
    if ( gPlatformRole != 8 )
      CheckLegacyPadControlledStatus(a1, v7);
    goto LABEL_11;
  }
  return 0LL;
}
