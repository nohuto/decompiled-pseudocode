/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qqi @ 0x1C01AD8C0
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0007B90 (EditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qqi(
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
  struct RECORDER_LOG__ *v8; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-48h]
  __int64 v12; // [rsp+B0h] [rbp+48h] BYREF
  va_list va; // [rsp+B0h] [rbp+48h]
  __int64 v14; // [rsp+B8h] [rbp+50h] BYREF
  va_list va1; // [rsp+B8h] [rbp+50h]
  va_list va2; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v8 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
               35LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               va2,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 35;
    return WppAutoLogTrace(
             v8,
             4LL,
             16LL,
             &WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
