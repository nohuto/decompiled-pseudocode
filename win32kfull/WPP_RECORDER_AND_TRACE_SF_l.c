/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01C58D4
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C4E48 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_L(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids,
               14LL,
               va,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 14;
    return WppAutoLogTrace(a4, 4LL, 19LL, &WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids, v11, va, 4LL, 0LL);
  }
  return result;
}
