/*
 * XREFs of ?SetPointerRawDataListFrameId@CTouchProcessor@@AEAAXKPEAUCPointerRawData@@@Z @ 0x1C0205894
 * Callers:
 *     ?CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z @ 0x1C00F22F0 (-CommitInputFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CTouchProcessor::SetPointerRawDataListFrameId(
        struct _KTHREAD **this,
        int a2,
        struct CPointerRawData *a3)
{
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7901);
  while ( a3 )
  {
    if ( *(_DWORD *)a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7906);
    *(_DWORD *)a3 = a2;
    a3 = (struct CPointerRawData *)*((_QWORD *)a3 + 3);
  }
}
