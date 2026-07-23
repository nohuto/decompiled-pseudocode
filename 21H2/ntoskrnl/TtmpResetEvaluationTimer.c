/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1408FE124
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE220 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1408FE43C (TtmpUpdateTerminalState.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 */

void __fastcall TtmpResetEvaluationTimer(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  char v4; // al

  if ( a2 )
  {
    ObfReferenceObject(DmaAdapter);
    v4 = KiSetTimerEx((__int64)&DmaAdapter[5].DmaOperations, -a2, 0, 0, (__int64)&DmaAdapter[9].DmaOperations);
  }
  else
  {
    v4 = KeCancelTimer((PKTIMER)&DmaAdapter[5].DmaOperations);
  }
  if ( v4 )
    HalPutDmaAdapter(DmaAdapter);
}
