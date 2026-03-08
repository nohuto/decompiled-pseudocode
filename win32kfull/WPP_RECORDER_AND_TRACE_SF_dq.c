/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_Dq @ 0x1C01AF928
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z @ 0x1C0221E40 (-xxxWindowSizeStartingHandler@CallShell@@YAXPEAUtagWND@@H@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_Dq(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  struct RECORDER_LOG__ *v8; // rsi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  v8 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               4LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(v8, 4LL, a6, a8, v11, (__int64 *)va, 4LL, va1);
  }
  return result;
}
