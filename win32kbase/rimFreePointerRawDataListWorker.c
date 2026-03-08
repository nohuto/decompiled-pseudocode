/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C01CE29C
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00361E4 (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C01CF270 (rimReclaimHoldingFrame.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi
  char *v3; // rdx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      if ( !*((_QWORD *)v2 + 1) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 442);
      v3 = (char *)*((_QWORD *)v2 + 1);
      if ( v3 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v2);
    }
    while ( v1 );
  }
}
