__int64 __fastcall UsbhGetUxdDeviceKey(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  __int64 (__fastcall *SystemRoutineAddress)(__int64, const WCHAR *, void **); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-69h] BYREF
  void *v9; // [rsp+58h] [rbp-59h] BYREF
  int v10; // [rsp+60h] [rbp-51h]
  __int128 *v11; // [rsp+68h] [rbp-49h]
  __int64 v12; // [rsp+70h] [rbp-41h]
  int v13; // [rsp+78h] [rbp-39h]
  __int64 v14; // [rsp+80h] [rbp-31h]
  int v15; // [rsp+88h] [rbp-29h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  int v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  __int64 v19; // [rsp+A8h] [rbp-9h]
  int v20; // [rsp+B0h] [rbp-1h]
  __int64 v21; // [rsp+B8h] [rbp+7h]
  int v22; // [rsp+C0h] [rbp+Fh]
  __int128 v23; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+27h]
  wchar_t v25; // [rsp+E0h] [rbp+2Fh]

  v23 = *(_OWORD *)L"VVVVPPPPRRRR";
  v25 = aVvvvpppprrrr[12];
  v24 = *(_QWORD *)L"RRRR";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x12u,
        (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids);
  }
  UsbhBuildUxdDeviceKey((__int64)a1, a2, (wchar_t *)&v23);
  v10 = 4;
  v9 = &UsbhQueryUxdDevice;
  v11 = &v23;
  v12 = a3;
  v13 = 0;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_SS(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      v5,
      19,
      (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
      (__int64)L"usbhub\\uxd_control\\devices",
      (__int64)&v23);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
  SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))MmGetSystemRoutineAddress(&DestinationString);
  if ( !SystemRoutineAddress )
    SystemRoutineAddress = (__int64 (__fastcall *)(__int64, const WCHAR *, void **))RtlQueryRegistryValues;
  return SystemRoutineAddress(1LL, L"usbhub\\uxd_control\\devices", &v9);
}
