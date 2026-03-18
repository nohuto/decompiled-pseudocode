/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C000785C
 * Callers:
 *     DeferSysPeekMsg @ 0x1C00072F0 (DeferSysPeekMsg.c)
 *     HandleDeferredInput @ 0x1C00074D0 (HandleDeferredInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qiqdd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  int v11; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v15; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  __int64 v17; // [rsp+E0h] [rbp+58h] BYREF
  va_list va2; // [rsp+E0h] [rbp+58h]
  __int64 v19; // [rsp+E8h] [rbp+60h] BYREF
  va_list va3; // [rsp+E8h] [rbp+60h]
  va_list va4; // [rsp+F0h] [rbp+68h] BYREF

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
  result = &retaddr;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_9aa367dbf6743197e78245d66571217e_Traceguids,
                            a7,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            (__int64 *)va2,
                            8LL,
                            (__int64 *)va3,
                            4LL,
                            va4,
                            4LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          19LL,
                          &WPP_9aa367dbf6743197e78245d66571217e_Traceguids,
                          v11,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          (__int64 *)va2);
  }
  return result;
}
