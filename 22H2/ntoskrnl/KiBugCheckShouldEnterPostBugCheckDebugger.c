/*
 * XREFs of KiBugCheckShouldEnterPostBugCheckDebugger @ 0x140569AE4
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x14057A4BC (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     KdRefreshDebuggerNotPresent @ 0x1403B1840 (KdRefreshDebuggerNotPresent.c)
 */

char __fastcall KiBugCheckShouldEnterPostBugCheckDebugger(int a1, __int64 a2)
{
  char result; // al

  if ( !(_BYTE)KdDebuggerEnabled && !KdEventLoggingEnabled
    || KiHypervisorInitiatedCrashDump
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    return 0;
  }
  result = a1 != 226;
  if ( a2 )
    return *(_BYTE *)a2;
  return result;
}
