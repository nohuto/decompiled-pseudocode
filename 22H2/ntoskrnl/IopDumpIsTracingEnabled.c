/*
 * XREFs of IopDumpIsTracingEnabled @ 0x1405528E8
 * Callers:
 *     IopDumpTraceCrashDumpDisabled @ 0x14055290C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x1405529E8 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140552AF8 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140552C08 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140552D18 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140552E28 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140552F38 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140553048 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitializeDumpPolicySettings @ 0x140861414 (IopInitializeDumpPolicySettings.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140943B50 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140943E4C (IopDumpTraceForceDumpDisabled.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x140943F4C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
