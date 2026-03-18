/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1409A3B04
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1409A3BE0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1409A3E48 (TtmpUpdateTerminalState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

char __fastcall TtmpResetEvaluationTimer(char *Object, __int64 a2)
{
  char result; // al

  if ( a2 )
  {
    ObfReferenceObject(Object);
    result = KiSetTimerEx((unsigned __int64)(Object + 88), -a2, 0, 0, (__int64)(Object + 152));
  }
  else
  {
    result = KeCancelTimer((PKTIMER)(Object + 88));
  }
  if ( result )
    return ObfDereferenceObject(Object);
  return result;
}
