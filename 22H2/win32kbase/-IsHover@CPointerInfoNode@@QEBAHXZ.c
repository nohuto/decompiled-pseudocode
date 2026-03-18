/*
 * XREFs of ?IsHover@CPointerInfoNode@@QEBAHXZ @ 0x1C01CCBB4
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C01C1508 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CPointerInfoNode::IsHover(CPointerInfoNode *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 218);
  LOBYTE(v2) = (*((_DWORD *)this + 45) & 0x40004) == 0;
  return v2;
}
