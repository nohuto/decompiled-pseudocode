/*
 * XREFs of ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C0200F3C
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::ReferenceFrameInt(__int64 a1, __int64 a2)
{
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8232);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 44));
  return a2;
}
