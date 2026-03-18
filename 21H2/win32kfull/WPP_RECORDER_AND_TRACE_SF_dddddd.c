/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dddddd @ 0x1C00B2180
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00B1A70 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z @ 0x1C00BA5DC (-xxxProcessPreemptiveDpiChange@@YAXPEAUtagWND@@PEAUtagCVR@@@Z.c)
 *     _lambda_b6666937a6a6c2ac0b10e616cd7412b3_::operator() @ 0x1C015AA08 (_lambda_b6666937a6a6c2ac0b10e616cd7412b3_--operator().c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_dddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  int v11; // [rsp+28h] [rbp-69h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v15; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v17; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v19; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v21; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            a8,
                            a7,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            va5,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 4LL, (__int64 *)va1, 4LL, (__int64 *)va2);
  }
  return result;
}
