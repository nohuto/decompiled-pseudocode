/*
 * XREFs of ?FreePointerRawDataList@CTouchProcessor@@AEAAXPEAUCPointerRawData@@@Z @ 0x1C01C63B8
 * Callers:
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C01C32A4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C01C5D18 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerRawDataList(struct _KTHREAD **this, struct CPointerRawData *a2, __int64 a3)
{
  struct CPointerRawData *v3; // rbx
  struct CPointerRawData *v4; // rdi
  char *v5; // rdx

  v3 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  while ( v3 )
  {
    v4 = v3;
    v3 = (struct CPointerRawData *)*((_QWORD *)v3 + 3);
    v5 = (char *)*((_QWORD *)v4 + 2);
    if ( v5 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(this, 0LL, a3), (v5 = (char *)*((_QWORD *)v4 + 2)) != 0LL) )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v5);
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)v4);
  }
}
