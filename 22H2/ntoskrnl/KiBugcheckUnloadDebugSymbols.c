/*
 * XREFs of KiBugcheckUnloadDebugSymbols @ 0x140569BF8
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     KeRebootSystemForRecovery @ 0x14057A43C (KeRebootSystemForRecovery.c)
 * Callees:
 *     DebugService2 @ 0x1404287C0 (DebugService2.c)
 */

__int64 KiBugcheckUnloadDebugSymbols()
{
  __int64 result; // rax

  result = 0LL;
  if ( !KiHypervisorInitiatedCrashDump )
    return DebugService2();
  return result;
}
