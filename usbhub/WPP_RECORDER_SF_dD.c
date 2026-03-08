/*
 * XREFs of WPP_RECORDER_SF_DD @ 0x1C0050FD4
 * Callers:
 *     UsbhBuildDeviceID @ 0x1C004F9EC (UsbhBuildDeviceID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_DD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids,
      12LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 12;
  return WppAutoLogTrace(a1, 0LL, 1LL, &WPP_5cd0da2cec2b3eb8ebf4a0e8204ce7df_Traceguids, v7, (__int64 *)va);
}
