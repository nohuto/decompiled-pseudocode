/*
 * XREFs of WPP_RECORDER_SF_iiid @ 0x1C0038510
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C008B804 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_iiid(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  __int64 v11; // [rsp+B0h] [rbp+38h] BYREF
  va_list va1; // [rsp+B0h] [rbp+38h]
  __int64 v13; // [rsp+B8h] [rbp+40h] BYREF
  va_list va2; // [rsp+B8h] [rbp+40h]
  va_list va3; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v9 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v11 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v13 = va_arg(va3, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      va3,
      4LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           21LL,
           &WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
           v8,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           (__int64 *)va2,
           8LL,
           va3,
           4LL,
           0LL);
}
