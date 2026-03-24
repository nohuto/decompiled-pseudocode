/*
 * XREFs of ?ForceResetMouseButtonInMakeAccumulator@CMouseProcessor@@QEAAXXZ @ 0x1C00B2284
 * Callers:
 *     ForceResetMouseButtonsDownState @ 0x1C00B2260 (ForceResetMouseButtonsDownState.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 */

void __fastcall CMouseProcessor::ForceResetMouseButtonInMakeAccumulator(CMouseProcessor *this)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      6,
      17,
      (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
  *((_DWORD *)this + 891) = 0;
}
