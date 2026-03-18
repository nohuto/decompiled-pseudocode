/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C01A6F7C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C004926C (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C01A7B2C (rimReclaimHoldingFrame.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  void *v4; // rdi
  char *v5; // rdx

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = v3;
      v3 = (_QWORD *)v3[2];
      v5 = (char *)*((_QWORD *)v4 + 1);
      if ( v5 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, 0LL, a3), (v5 = (char *)*((_QWORD *)v4 + 1)) != 0LL) )
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v5);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v4);
    }
    while ( v3 );
  }
}
