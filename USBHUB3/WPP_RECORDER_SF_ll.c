/*
 * XREFs of WPP_RECORDER_SF_ll @ 0x1C003FB88
 * Callers:
 *     HUBHSM_LoggingLastOpcode @ 0x1C000A1C0 (HUBHSM_LoggingLastOpcode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_ll(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids,
      58LL,
      (__int64 *)va,
      4LL,
      va1,
      4LL,
      0LL);
  LOWORD(v7) = 58;
  return WppAutoLogTrace(a1, 2LL, 3LL, &WPP_2fd11ae104fa34a9334eddada324a17a_Traceguids, v7, (__int64 *)va);
}
