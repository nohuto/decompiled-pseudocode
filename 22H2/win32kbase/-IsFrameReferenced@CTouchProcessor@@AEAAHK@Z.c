/*
 * XREFs of ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01CCA94
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4F38 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D0C24 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C2630 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D86C8 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsFrameReferenced(struct _KTHREAD **this, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax

  v2 = 0;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8063);
  result = CTouchProcessor::FindAndReferenceFrameById((__int64)this, a2, 4u);
  if ( result )
  {
    LOBYTE(v2) = (unsigned int)CTouchProcessor::UnreferenceFrameInt(this, result) != 0;
    return v2;
  }
  return result;
}
