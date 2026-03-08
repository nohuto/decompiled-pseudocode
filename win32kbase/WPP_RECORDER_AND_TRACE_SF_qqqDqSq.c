/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqqDqSq @ 0x1C01A0EA4
 * Callers:
 *     RIMWatchDog @ 0x1C0039810 (RIMWatchDog.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqqDqSq(
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
  const wchar_t *v9; // rbx
  __int64 v10; // rdi
  struct RECORDER_LOG__ *v11; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  bool v17; // zf
  int v18; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v20; // [rsp+118h] [rbp+77h] BYREF
  va_list va; // [rsp+118h] [rbp+77h]
  __int64 v22; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va1; // [rsp+120h] [rbp+7Fh]
  __int64 v24; // [rsp+128h] [rbp+87h] BYREF
  va_list va2; // [rsp+128h] [rbp+87h]
  __int64 v26; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va3; // [rsp+130h] [rbp+8Fh]
  __int64 v28; // [rsp+138h] [rbp+97h] BYREF
  va_list va4; // [rsp+138h] [rbp+97h]
  const wchar_t *v30; // [rsp+140h] [rbp+9Fh]
  va_list va5; // [rsp+148h] [rbp+A7h] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v24 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v26 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  v30 = va_arg(va5, const wchar_t *);
  result = &retaddr;
  v9 = v30;
  v10 = -1LL;
  v11 = gRimLog;
  if ( a2 )
  {
    if ( v30 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v30[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v30;
    if ( !v30 )
      v16 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids,
                            17LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            (__int64 *)va2,
                            8LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            8LL,
                            v16,
                            v15,
                            va5,
                            8LL,
                            0LL);
  }
  if ( a3 )
  {
    v17 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v17 = v9 == 0LL;
    }
    if ( v17 )
      v9 = L"NULL";
    LOWORD(v18) = 17;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v11,
                          4LL,
                          1LL,
                          &WPP_ac32a586e8cb36254fb1fb045aefff6a_Traceguids,
                          v18,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          (__int64 *)va2,
                          8LL,
                          (__int64 *)va3,
                          4LL,
                          (__int64 *)va4,
                          8LL,
                          v9);
  }
  return result;
}
