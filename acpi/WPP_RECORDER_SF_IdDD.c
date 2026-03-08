/*
 * XREFs of WPP_RECORDER_SF_IdDD @ 0x1C00472D8
 * Callers:
 *     ACPIWmiEnableLog @ 0x1C00470A0 (ACPIWmiEnableLog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_IdDD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, __int64 a6, ...)
{
  int v8; // [rsp+20h] [rbp-68h]
  _QWORD v9[2]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v10; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v12; // [rsp+C8h] [rbp+40h] BYREF
  va_list va1; // [rsp+C8h] [rbp+40h]
  va_list va2; // [rsp+D0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  v9[0] = ACPIWmiLoggerHandle;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, _QWORD *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids,
      12LL,
      v9,
      8LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      va2,
      4LL,
      0LL);
  LOWORD(v8) = 12;
  return WppAutoLogTrace(
           a1,
           4LL,
           1LL,
           &WPP_3ad0379a4aff33c3a6e5470e3717ea43_Traceguids,
           v8,
           v9,
           8LL,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           va2,
           4LL,
           0LL);
}
