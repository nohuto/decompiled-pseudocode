/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C000961C
 * Callers:
 *     DisplayKernelIdleStates @ 0x1C0008290 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x1C000840C (DisplayKernelPerfStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  int v8; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v8) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_4aa995de970d3daca8f220cb4e8727bd_Traceguids, v8, va);
}
