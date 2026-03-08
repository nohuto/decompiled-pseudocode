/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1409A8964
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1409A8A60 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1409A8CC8 (TtmpUpdateTerminalState.c)
 * Callees:
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    ObfReferenceObject(Object);
    result = KiSetTimerEx((__int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
