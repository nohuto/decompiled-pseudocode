/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dqddddddddd @ 0x1C00E2C90
 * Callers:
 *     ?CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ @ 0x1C00E2DF4 (-CreateTopologySnapshot@CMonitorTopology@@SAPEAV1@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_dqddddddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  struct RECORDER_LOG__ *v9; // rdi
  int v11; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+138h] [rbp+57h] BYREF
  va_list va; // [rsp+138h] [rbp+57h]
  __int64 v15; // [rsp+140h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+140h] [rbp+5Fh]
  __int64 v17; // [rsp+148h] [rbp+67h] BYREF
  va_list va2; // [rsp+148h] [rbp+67h]
  __int64 v19; // [rsp+150h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+150h] [rbp+6Fh]
  __int64 v21; // [rsp+158h] [rbp+77h] BYREF
  va_list va4; // [rsp+158h] [rbp+77h]
  __int64 v23; // [rsp+160h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+160h] [rbp+7Fh]
  __int64 v25; // [rsp+168h] [rbp+87h] BYREF
  va_list va6; // [rsp+168h] [rbp+87h]
  __int64 v27; // [rsp+170h] [rbp+8Fh] BYREF
  va_list va7; // [rsp+170h] [rbp+8Fh]
  __int64 v29; // [rsp+178h] [rbp+97h] BYREF
  va_list va8; // [rsp+178h] [rbp+97h]
  __int64 v31; // [rsp+180h] [rbp+9Fh] BYREF
  va_list va9; // [rsp+180h] [rbp+9Fh]
  va_list va10; // [rsp+188h] [rbp+A7h] BYREF

  va_start(va10, a8);
  va_start(va9, a8);
  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
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
  va_copy(va6, va5);
  v23 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v25 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v27 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v29 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v31 = va_arg(va10, _QWORD);
  result = &retaddr;
  v9 = gFullLog;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
                            17LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            8LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            (__int64 *)va8,
                            4LL,
                            (__int64 *)va9,
                            4LL,
                            va10,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 17;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v9,
                          4LL,
                          23LL,
                          &WPP_aeca42301358371308ca40d05b2a9235_Traceguids,
                          v11,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1);
  }
  return result;
}
