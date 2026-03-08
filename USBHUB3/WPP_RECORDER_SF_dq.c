/*
 * XREFs of WPP_RECORDER_SF_Dq @ 0x1C002DE78
 * Callers:
 *     HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration @ 0x1C002EBC0 (HUBMISC_PrepareEndpointAndInterfaceListsForConfiguringDeviceOnSelectConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_Dq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  __int64 v8; // [rsp+88h] [rbp+30h] BYREF
  va_list va; // [rsp+88h] [rbp+30h]
  va_list va1; // [rsp+90h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v8 = va_arg(va1, _QWORD);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids,
      21LL,
      (__int64 *)va,
      4LL,
      va1,
      8LL,
      0LL);
  LOWORD(v7) = 21;
  return WppAutoLogTrace(a1, 2LL, 5LL, &WPP_f96a94952a6932bc87af489d3d93d325_Traceguids, v7, (__int64 *)va);
}
