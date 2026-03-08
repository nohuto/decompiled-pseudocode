/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1C01A81EC
 * Callers:
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qqSd(
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
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  const wchar_t *v17; // rcx
  bool v18; // zf
  int v19; // [rsp+20h] [rbp-68h]
  __int64 v20; // [rsp+70h] [rbp-18h]
  __int64 v21; // [rsp+78h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  __int64 v23; // [rsp+D0h] [rbp+48h] BYREF
  va_list va; // [rsp+D0h] [rbp+48h]
  __int64 v25; // [rsp+D8h] [rbp+50h] BYREF
  va_list va1; // [rsp+D8h] [rbp+50h]
  const wchar_t *v27; // [rsp+E0h] [rbp+58h]
  va_list va2; // [rsp+E8h] [rbp+60h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  v27 = va_arg(va2, const wchar_t *);
  result = &retaddr;
  v9 = v27;
  v10 = -1LL;
  v14 = 10LL;
  if ( a2 )
  {
    if ( v27 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v27[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = v27;
    if ( !v27 )
      v17 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                            67LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            8LL,
                            v17,
                            v16,
                            va2,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v18 = v9 == 0LL;
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
      v14 = 2 * v10 + 2;
      v18 = v9 == 0LL;
    }
    if ( v18 )
      v9 = L"NULL";
    LOWORD(v19) = 67;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          1LL,
                          &WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                          v19,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          8LL,
                          v9,
                          v14,
                          va2,
                          4LL,
                          0LL,
                          v20,
                          v21);
  }
  return result;
}
