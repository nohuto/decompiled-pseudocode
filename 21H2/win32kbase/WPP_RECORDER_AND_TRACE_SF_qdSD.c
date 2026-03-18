/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdSD @ 0x1C01B851C
 * Callers:
 *     RIMHandleTTMDeviceArrival @ 0x1C01B7F9C (RIMHandleTTMDeviceArrival.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qdSD(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  struct RECORDER_LOG__ *v9; // r14
  __int64 v10; // rdi
  const wchar_t *v11; // rbx
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v21; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v23; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  const wchar_t *v25; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v25 = va_arg(va2, const wchar_t *);
  result = &retaddr;
  v9 = gRimLog;
  v10 = -1LL;
  v11 = v25;
  v14 = 10LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v25[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = v25;
    if ( !v25 )
      v17 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_e19c1f9dc6ba3a4e002eb4dd1e679f56_Traceguids,
                            11LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            v17,
                            v16,
                            va2,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v18 = v11 == 0LL;
    if ( v11 )
    {
      do
        ++v10;
      while ( v11[v10] );
      v14 = 2 * v10 + 2;
      v18 = v11 == 0LL;
    }
    if ( v18 )
      v11 = L"NULL";
    LOWORD(v19) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v9,
                          4LL,
                          1LL,
                          &WPP_e19c1f9dc6ba3a4e002eb4dd1e679f56_Traceguids,
                          v19,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          v11,
                          v14,
                          va2,
                          4LL,
                          0LL);
  }
  return result;
}
