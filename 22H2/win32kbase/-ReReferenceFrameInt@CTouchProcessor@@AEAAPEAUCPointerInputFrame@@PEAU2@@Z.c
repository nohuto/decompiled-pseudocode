/*
 * XREFs of ?ReReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@@Z @ 0x1C01D1C44
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CE8B0 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C2630 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCB18 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D86C8 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::ReReferenceFrameInt(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2)
{
  unsigned int v4; // ebx

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8120);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8121);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced((__int64)this, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8122);
  v4 = *((_DWORD *)a2 + 10);
  CTouchProcessor::UnreferenceFrameInt(this, a2);
  return (struct CPointerInputFrame *)CTouchProcessor::FindAndReferenceFrameById((__int64)this, v4, 4u);
}
