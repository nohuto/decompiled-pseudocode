/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x1C00E0B3A
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C000465C (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 *     RIMGetLastInvertedPenTime @ 0x1C01787C0 (RIMGetLastInvertedPenTime.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C0197794 (RIMIDEValidateMouseInputStruct.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_i(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rsi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  v8 = gRimLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               a8,
               a7,
               va,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(v8, a5, 1LL, a8, v11, va, 8LL, 0LL);
  }
  return result;
}
