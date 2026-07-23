/*
 * XREFs of EtwpGetLoggerTimeStamp @ 0x14022C448
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x14032F3E4 (EtwpPrepareDirtyBuffer.c)
 *     EtwpLogContextSwapEvent @ 0x1403A9C30 (EtwpLogContextSwapEvent.c)
 *     EtwSendTraceBuffer @ 0x1405A5E70 (EtwSendTraceBuffer.c)
 *     EtwpRelinquishCompressionTarget @ 0x1405AD6B4 (EtwpRelinquishCompressionTarget.c)
 *     EtwpRotateCompressionTarget @ 0x1405AD704 (EtwpRotateCompressionTarget.c)
 *     EtwpInitializeTimeStamp @ 0x140711604 (EtwpInitializeTimeStamp.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x140341F30 (RtlGetSystemTimePrecise.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

LARGE_INTEGER __fastcall EtwpGetLoggerTimeStamp(__int64 a1)
{
  unsigned __int64 v1; // rax
  int v2; // eax
  int v4; // eax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 > 3 )
    goto LABEL_10;
  if ( !(_DWORD)v1 )
    return RtlGetSystemTimePrecise();
  v2 = v1 - 1;
  if ( !v2 )
    return KeQueryPerformanceCounter(0LL);
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      return (LARGE_INTEGER)__rdtsc();
LABEL_10:
    __fastfail(0x3Du);
  }
  v5 = 0LL;
  ((void (__fastcall *)(__int64 *))off_140C009E0[0])(&v5);
  return (LARGE_INTEGER)v5;
}
