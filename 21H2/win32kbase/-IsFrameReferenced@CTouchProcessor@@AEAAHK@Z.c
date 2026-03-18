/*
 * XREFs of ?IsFrameReferenced@CTouchProcessor@@AEAAHK@Z @ 0x1C01CE0AC
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C7310 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z @ 0x1C01D2144 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z @ 0x1C01C562C (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::IsFrameReferenced(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v3; // edi
  struct CPointerInputFrame *result; // rax
  __int64 v6; // r8
  unsigned int v7; // edi

  v3 = a2;
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  result = CTouchProcessor::FindAndReferenceFrameById(this, v3, a3);
  v7 = 0;
  if ( result )
  {
    LOBYTE(v7) = (unsigned int)CTouchProcessor::UnreferenceFrameInt((CTouchProcessor *)this, (__int64)result, v6) != 0;
    return (struct CPointerInputFrame *)v7;
  }
  return result;
}
