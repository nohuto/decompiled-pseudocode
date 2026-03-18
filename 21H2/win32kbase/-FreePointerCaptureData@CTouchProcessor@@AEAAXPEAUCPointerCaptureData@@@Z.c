/*
 * XREFs of ?FreePointerCaptureData@CTouchProcessor@@AEAAXPEAUCPointerCaptureData@@@Z @ 0x1C01C6230
 * Callers:
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1C01C6030 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::FreePointerCaptureData(
        struct _KTHREAD **this,
        struct CPointerCaptureData *a2,
        __int64 a3)
{
  __int64 v4; // rax
  struct CPointerCaptureData **v5; // rcx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 10) && *((_DWORD *)a2 + 33) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 40) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 42) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 44) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( *((_DWORD *)a2 + 74) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *(_QWORD *)a2;
  if ( *(struct CPointerCaptureData **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct CPointerCaptureData **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct CPointerCaptureData *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)a2);
}
