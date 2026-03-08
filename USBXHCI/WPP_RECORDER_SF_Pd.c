/*
 * XREFs of WPP_RECORDER_SF_Pd @ 0x1C003EB7C
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E4C0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Pd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, int a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-48h]
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va, a6);
  v9[0] = 16LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, _QWORD *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
      13LL,
      v9,
      8LL,
      va,
      4LL,
      0LL);
  LOWORD(v8) = 13;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, void *, int, _QWORD *, __int64, char *, __int64, _QWORD))WppAutoLogTrace)(
           a1,
           3LL,
           5LL,
           &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
           v8,
           v9,
           8LL,
           va,
           4LL,
           0LL);
}
