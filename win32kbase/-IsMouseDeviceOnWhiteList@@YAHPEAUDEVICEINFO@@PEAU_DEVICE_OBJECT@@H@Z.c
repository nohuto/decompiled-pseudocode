_BOOL8 __fastcall IsMouseDeviceOnWhiteList(struct DEVICEINFO *a1, struct _DEVICE_OBJECT *a2, int a3)
{
  int v5; // edx
  BOOL v6; // ebx
  int v7; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v11; // [rsp+60h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
  v10 = *(struct _UNICODE_STRING *)((char *)a1 + 888);
  v11 = DestinationString;
  v6 = IsDeviceOnRegistryList(&v11, &v10, a3);
  if ( !v6 )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        (_DWORD)gRimLog,
        3,
        1,
        18,
        (__int64)&WPP_3ba5ca1bd3d034373d45e0ad3df26bc4_Traceguids);
    }
  }
  return v6;
}
