/*
 * XREFs of UsbhGetUxdPortKey @ 0x1C005A540
 * Callers:
 *     UsbhUpdateUxdSettings @ 0x1C005ACF0 (UsbhUpdateUxdSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     RtlStringCbPrintfW @ 0x1C0044C1C (RtlStringCbPrintfW.c)
 *     UsbhGetUxdLoadKeySettings @ 0x1C005A460 (UsbhGetUxdLoadKeySettings.c)
 *     UsbhOpenUxdPortHandle @ 0x1C005A6D0 (UsbhOpenUxdPortHandle.c)
 *     WPP_RECORDER_SF_SS @ 0x1C005B2B4 (WPP_RECORDER_SF_SS.c)
 */

__int64 __fastcall UsbhGetUxdPortKey(__int64 a1, unsigned int a2, void *a3)
{
  PDEVICE_OBJECT v5; // rcx
  int UxdLoadKeySettings; // ebx
  int v7; // r8d
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  wchar_t pszDest[16]; // [rsp+48h] [rbp-40h] BYREF

  Handle = 0LL;
  wcscpy(pszDest, L"uxd_port_nnn");
  RtlStringCbPrintfW(pszDest, 0x1AuLL, L"uxd_port_%3.3d", a2);
  UxdLoadKeySettings = UsbhOpenUxdPortHandle(a1, &Handle);
  if ( UxdLoadKeySettings >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_SS(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          v7,
          10,
          (__int64)&WPP_4aa30c1ba02a3b8c2a9c4e9b57ebe163_Traceguids,
          (__int64)L"uxd",
          (__int64)pszDest);
    }
    UxdLoadKeySettings = UsbhGetUxdLoadKeySettings((__int64)v5, Handle, pszDest, a3);
    ZwClose(Handle);
  }
  return (unsigned int)UxdLoadKeySettings;
}
