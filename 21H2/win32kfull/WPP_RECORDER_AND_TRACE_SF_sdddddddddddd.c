/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddddddddddd @ 0x1C023C64C
 * Callers:
 *     ?xxxRestore@CRecalcState@@QEAA?AW4ProcessRecalcResult@@PEAUtagWND@@@Z @ 0x1C023B694 (-xxxRestore@CRecalcState@@QEAA-AW4ProcessRecalcResult@@PEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sdddddddddddd(
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
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+28h] [rbp-D9h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+170h] [rbp+6Fh] BYREF
  va_list va; // [rsp+170h] [rbp+6Fh]
  __int64 v23; // [rsp+178h] [rbp+77h] BYREF
  va_list va1; // [rsp+178h] [rbp+77h]
  __int64 v25; // [rsp+180h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+180h] [rbp+7Fh]
  __int64 v27; // [rsp+188h] [rbp+87h] BYREF
  va_list va3; // [rsp+188h] [rbp+87h]
  __int64 v29; // [rsp+190h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+190h] [rbp+8Fh]
  __int64 v31; // [rsp+198h] [rbp+97h] BYREF
  va_list va5; // [rsp+198h] [rbp+97h]
  __int64 v33; // [rsp+1A0h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+1A0h] [rbp+9Fh]
  __int64 v35; // [rsp+1A8h] [rbp+A7h] BYREF
  va_list va7; // [rsp+1A8h] [rbp+A7h]
  __int64 v37; // [rsp+1B0h] [rbp+AFh] BYREF
  va_list va8; // [rsp+1B0h] [rbp+AFh]
  __int64 v39; // [rsp+1B8h] [rbp+B7h] BYREF
  va_list va9; // [rsp+1B8h] [rbp+B7h]
  __int64 v41; // [rsp+1C0h] [rbp+BFh] BYREF
  va_list va10; // [rsp+1C0h] [rbp+BFh]
  va_list va11; // [rsp+1C8h] [rbp+C7h] BYREF

  va_start(va11, a9);
  va_start(va10, a9);
  va_start(va9, a9);
  va_start(va8, a9);
  va_start(va7, a9);
  va_start(va6, a9);
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
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v33 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v35 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v37 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v39 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v41 = va_arg(va11, _QWORD);
  result = &retaddr;
  v10 = a9;
  v11 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
                            20LL,
                            v17,
                            v16,
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
                            (__int64 *)va10,
                            4LL,
                            va11,
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
      v18 = v11 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v19) = 20;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          5LL,
                          23LL,
                          &WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
                          v19,
                          v10,
                          v18,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1);
  }
  return result;
}
