/*
 * XREFs of WPP_RECORDER_SF_Dddd @ 0x1C003E990
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E4C0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Dddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-68h]
  _DWORD v8[4]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v9; // [rsp+B8h] [rbp+30h] BYREF
  va_list va; // [rsp+B8h] [rbp+30h]
  __int64 v11; // [rsp+C0h] [rbp+38h] BYREF
  va_list va1; // [rsp+C0h] [rbp+38h]
  va_list va2; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  v8[0] = -1073741789;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _DWORD *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
      16LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      v8,
      4LL,
      0LL);
  LOWORD(v7) = 16;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, void *, int, __int64 *, __int64, __int64 *, __int64, char *, __int64, _DWORD *, __int64, _QWORD))WppAutoLogTrace)(
           a1,
           2LL,
           5LL,
           &WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids,
           v7,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           v8,
           4LL,
           0LL);
}
