/*
 * XREFs of rimFreePointerRawDataListWorker @ 0x1C0172148
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005287C (RawInputManagerObjectDelete.c)
 *     rimReclaimHoldingFrame @ 0x1C0172980 (rimReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall rimFreePointerRawDataListWorker(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      v1 = *(_QWORD *)(v1 + 16);
      v3 = *(_QWORD *)(v2 + 8);
      if ( !v3 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 448);
        v3 = *(_QWORD *)(v2 + 8);
      }
      Win32FreePool(v3);
      Win32FreePool(v2);
    }
    while ( v1 );
  }
}
