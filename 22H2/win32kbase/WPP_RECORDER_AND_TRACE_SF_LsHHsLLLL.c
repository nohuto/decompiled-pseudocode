/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL @ 0x1C01DAD90
 * Callers:
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C01CED30 (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_LsHHsLLLL(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v9; // rsi
  __int64 v10; // rbx
  const char *v11; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rcx
  __int64 v21; // rax
  int v22; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v24; // [rsp+128h] [rbp+67h] BYREF
  va_list va; // [rsp+128h] [rbp+67h]
  const char *v26; // [rsp+130h] [rbp+6Fh]
  __int64 v27; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v29; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  const char *v31; // [rsp+148h] [rbp+87h]
  __int64 v32; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va3; // [rsp+150h] [rbp+8Fh]
  __int64 v34; // [rsp+158h] [rbp+97h] BYREF
  va_list va4; // [rsp+158h] [rbp+97h]
  __int64 v36; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va5; // [rsp+160h] [rbp+9Fh]
  va_list va6; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v24 = va_arg(va1, _QWORD);
  v26 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v27 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v29 = va_arg(va3, _QWORD);
  v31 = va_arg(va3, const char *);
  va_copy(va4, va3);
  v32 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v34 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v36 = va_arg(va6, _QWORD);
  result = &retaddr;
  v9 = v26;
  v10 = -1LL;
  v11 = v31;
  if ( a2 )
  {
    if ( v31 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v31[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = v31;
    if ( !v31 )
      v17 = "NULL";
    if ( v26 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( v26[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = v26;
    if ( !v26 )
      v20 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
                            276LL,
                            (__int64 *)va,
                            4LL,
                            v20,
                            v19,
                            (__int64 *)va1,
                            2LL,
                            (__int64 *)va2,
                            2LL,
                            v17,
                            v16,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            va6,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( v11[v21] );
    }
    if ( v9 )
    {
      do
        ++v10;
      while ( v9[v10] );
    }
    if ( !v9 )
      v9 = "NULL";
    LOWORD(v22) = 276;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          4LL,
                          &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids,
                          v22,
                          (__int64 *)va,
                          4LL,
                          v9);
  }
  return result;
}
