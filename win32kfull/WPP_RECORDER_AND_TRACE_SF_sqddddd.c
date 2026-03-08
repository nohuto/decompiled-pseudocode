/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sqddddd @ 0x1C003FBA0
 * Callers:
 *     ?CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA?AUFRAME_MARGIN@@PEBUtagWND@@IW4MarginsFor@?A0x67ef0edd@2@@Z @ 0x1C0042CB8 (-CalculateWindowMargins@CWindowMarginProp@WindowMargins@@QEAA-AUFRAME_MARGIN@@PEBUtagWND@@IW4Mar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sqddddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rdi
  __int64 v11; // rbx
  struct RECORDER_LOG__ *v12; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+28h] [rbp-79h]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va; // [rsp+110h] [rbp+6Fh]
  __int64 v23; // [rsp+118h] [rbp+77h] BYREF
  va_list va1; // [rsp+118h] [rbp+77h]
  __int64 v25; // [rsp+120h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+7Fh]
  __int64 v27; // [rsp+128h] [rbp+87h] BYREF
  va_list va3; // [rsp+128h] [rbp+87h]
  __int64 v29; // [rsp+130h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+130h] [rbp+8Fh]
  va_list va5; // [rsp+138h] [rbp+97h] BYREF

  va_start(va5, a9);
  va_start(va4, a9);
  va_start(va3, a9);
  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  v12 = gFullLog;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
                            21LL,
                            v18,
                            v17,
                            (__int64 *)va,
                            8LL,
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
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v15 = v11 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v19) = 21;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v12,
                          4LL,
                          26LL,
                          &WPP_fec10b4efb753a3a4f7ec6de1c5c9c7a_Traceguids,
                          v19,
                          v10,
                          v15,
                          (__int64 *)va);
  }
  return result;
}
