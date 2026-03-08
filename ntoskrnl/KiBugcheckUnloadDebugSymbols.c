/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x140567758
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x140577F2C (KeRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x140420430 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
    return DebugService2();
  return result;
}
