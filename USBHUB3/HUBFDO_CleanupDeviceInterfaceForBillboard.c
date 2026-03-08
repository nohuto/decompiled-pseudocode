/*
 * XREFs of HUBFDO_CleanupDeviceInterfaceForBillboard @ 0x1C000F7E4
 * Callers:
 *     HUBPDO_BillboardCleanup @ 0x1C007E300 (HUBPDO_BillboardCleanup.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBFDO_CleanupDeviceInterfaceForBillboard(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  ULONG v5; // ebp
  NTSTATUS v8; // ebx
  char v10; // [rsp+20h] [rbp-B8h]
  NTSTATUS v11; // [rsp+28h] [rbp-B0h]
  __int64 v12; // [rsp+28h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-98h] BYREF
  __int128 v14; // [rsp+50h] [rbp-88h] BYREF
  WCHAR SourceString[32]; // [rsp+60h] [rbp-78h] BYREF

  v5 = a2;
  DestinationString = 0LL;
  v14 = 0LL;
  memset(SourceString, 0, sizeof(SourceString));
  if ( !a4 )
  {
    v8 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 4u, 3u, 0x61u, (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids);
    goto LABEL_7;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  DestinationString.MaximumLength = 64;
  v8 = RtlIntegerToUnicodeString(v5, 0xAu, &DestinationString);
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x62u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v11);
    }
LABEL_7:
    if ( a3 )
    {
LABEL_13:
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a3);
      return (unsigned int)v8;
    }
    return (unsigned int)v8;
  }
  v10 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, GUID *, struct _UNICODE_STRING *, char))(WdfFunctions_01015 + 624))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 16),
    &GUID_DEVINTERFACE_USB_BILLBOARD,
    &DestinationString,
    v10);
  if ( a3 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int128 *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      a3,
      &v14);
    v8 = IoSetDeviceInterfacePropertyData(&v14, &DEVPKEY_Device_UsbBillboardInfo, 0LL, 0LL, 4099, 0, 0LL);
    if ( v8 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v12) = v8;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x63u,
        (__int64)&WPP_440221f57c503424f19abf9386554ba7_Traceguids,
        v12);
    }
    goto LABEL_13;
  }
  return (unsigned int)v8;
}
