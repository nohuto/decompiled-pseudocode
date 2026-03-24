/*
 * XREFs of TtmpResetEvaluationTimer @ 0x1408FDFC4
 * Callers:
 *     TtmpSetTerminalPendingCleanup @ 0x1408FE0C0 (TtmpSetTerminalPendingCleanup.c)
 *     TtmpUpdateTerminalState @ 0x1408FE2DC (TtmpUpdateTerminalState.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
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
