/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x1C01F6D80
 * Callers:
 *     ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C00F7B94 (-xxxGetWorkAreasFromShell@@YA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
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
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-D9h]
  __int64 v12; // [rsp+158h] [rbp+57h] BYREF
  va_list va; // [rsp+158h] [rbp+57h]
  __int64 v14; // [rsp+160h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+160h] [rbp+5Fh]
  __int64 v16; // [rsp+168h] [rbp+67h] BYREF
  va_list va2; // [rsp+168h] [rbp+67h]
  __int64 v18; // [rsp+170h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+170h] [rbp+6Fh]
  __int64 v20; // [rsp+178h] [rbp+77h] BYREF
  va_list va4; // [rsp+178h] [rbp+77h]
  __int64 v22; // [rsp+180h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+180h] [rbp+7Fh]
  __int64 v24; // [rsp+188h] [rbp+87h] BYREF
  va_list va6; // [rsp+188h] [rbp+87h]
  __int64 v26; // [rsp+190h] [rbp+8Fh] BYREF
  va_list va7; // [rsp+190h] [rbp+8Fh]
  __int64 v28; // [rsp+198h] [rbp+97h] BYREF
  va_list va8; // [rsp+198h] [rbp+97h]
  __int64 v30; // [rsp+1A0h] [rbp+9Fh] BYREF
  va_list va9; // [rsp+1A0h] [rbp+9Fh]
  __int64 v32; // [rsp+1A8h] [rbp+A7h] BYREF
  va_list va10; // [rsp+1A8h] [rbp+A7h]
  __int64 v34; // [rsp+1B0h] [rbp+AFh] BYREF
  va_list va11; // [rsp+1B0h] [rbp+AFh]
  va_list va12; // [rsp+1B8h] [rbp+B7h] BYREF

  va_start(va12, a8);
  va_start(va11, a8);
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
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v18 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v20 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v22 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v24 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v26 = va_arg(va8, _QWORD);
  va_copy(va9, va8);
  v28 = va_arg(va9, _QWORD);
  va_copy(va10, va9);
  v30 = va_arg(va10, _QWORD);
  va_copy(va11, va10);
  v32 = va_arg(va11, _QWORD);
  va_copy(va12, va11);
  v34 = va_arg(va12, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
               24LL,
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
               (__int64 *)va11,
               4LL,
               va12,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 24;
    return WppAutoLogTrace(
             a4,
             4LL,
             23LL,
             &WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
