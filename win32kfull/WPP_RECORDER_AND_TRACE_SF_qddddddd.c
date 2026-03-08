/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddddddd @ 0x1C022A190
 * Callers:
 *     ?xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z @ 0x1C0229878 (-xxxImmersiveZBandDpiChange@CRecalcState@@QEAAXPEAUtagWND@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qddddddd(
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
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-89h]
  __int64 v12; // [rsp+108h] [rbp+57h] BYREF
  va_list va; // [rsp+108h] [rbp+57h]
  __int64 v14; // [rsp+110h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+5Fh]
  __int64 v16; // [rsp+118h] [rbp+67h] BYREF
  va_list va2; // [rsp+118h] [rbp+67h]
  __int64 v18; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+120h] [rbp+6Fh]
  __int64 v20; // [rsp+128h] [rbp+77h] BYREF
  va_list va4; // [rsp+128h] [rbp+77h]
  __int64 v22; // [rsp+130h] [rbp+7Fh] BYREF
  va_list va5; // [rsp+130h] [rbp+7Fh]
  __int64 v24; // [rsp+138h] [rbp+87h] BYREF
  va_list va6; // [rsp+138h] [rbp+87h]
  va_list va7; // [rsp+140h] [rbp+8Fh] BYREF

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
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
               34LL,
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
               va7,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 34;
    return WppAutoLogTrace(
             a4,
             5LL,
             23LL,
             &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
