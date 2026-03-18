/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1409AB9E4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1409ABAE0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1409ABD48 (TtmpUpdateTerminalState.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
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
