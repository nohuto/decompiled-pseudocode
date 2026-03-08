/*
 * XREFs of WPP_RECORDER_SF_II @ 0x1C0014C9C
 * Callers:
 *     HUBPDO_EvtWorkItemDripsWatchDogCallback @ 0x1C00803E0 (HUBPDO_EvtWorkItemDripsWatchDogCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_II(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  int v7; // [rsp+20h] [rbp-48h]
  __int64 v8[3]; // [rsp+50h] [rbp-18h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  v8[0] = 300000000LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
      175LL,
      va,
      8LL,
      v8,
      8LL,
      0LL);
  LOWORD(v7) = 175;
  return WppAutoLogTrace(a1, 3LL, 2LL, &WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids, v7, va);
}
