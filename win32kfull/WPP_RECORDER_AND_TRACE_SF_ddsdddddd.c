/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_ddsdddddd @ 0x1C023E0D0
 * Callers:
 *     ?SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@@Z @ 0x1C023D2A4 (-SHData_NeedsArrangementCallout@MOVESIZEDATA@@QEBA_NW4THRESHOLD_MARGIN_DIRECTION@@AEBUtagPOINT@@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_ddsdddddd(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rdi
  __int64 v10; // rbx
  struct RECORDER_LOG__ *v11; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  int v17; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  __int64 v21; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+6Fh]
  const char *v23; // [rsp+138h] [rbp+77h]
  __int64 v24; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v26; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v28; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  __int64 v30; // [rsp+158h] [rbp+97h] BYREF
  va_list va5; // [rsp+158h] [rbp+97h]
  __int64 v32; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+9Fh]
  va_list va7; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  v23 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v30 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v32 = va_arg(va7, _QWORD);
  result = &retaddr;
  v9 = v23;
  v10 = -1LL;
  v11 = gFullLog;
  if ( a2 )
  {
    if ( v23 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v23[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v23;
    if ( !v23 )
      v16 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
                            13LL,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            v16,
                            v15,
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
                            va7,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
    }
    LOWORD(v17) = 13;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v11,
                          4LL,
                          1LL,
                          &WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
                          v17,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1);
  }
  return result;
}
