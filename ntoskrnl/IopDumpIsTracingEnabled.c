/*
 * XREFs of IopDumpIsTracingEnabled @ 0x140550448
 * Callers:
 *     IopDumpTraceCrashDumpDisabled @ 0x14055046C (IopDumpTraceCrashDumpDisabled.c)
 *     IopDumpTraceCrashDumpReconfiguration @ 0x140550548 (IopDumpTraceCrashDumpReconfiguration.c)
 *     IopDumpTraceDisableCrashDumpFailure @ 0x140550658 (IopDumpTraceDisableCrashDumpFailure.c)
 *     IopDumpTraceFreeDumpStackFailure @ 0x140550768 (IopDumpTraceFreeDumpStackFailure.c)
 *     IopDumpTraceInitializeCrashDumpFailure @ 0x140550878 (IopDumpTraceInitializeCrashDumpFailure.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140550988 (IopDumpTraceInitializeDumpStackFailure.c)
 *     IopDumpTraceLoadCrashDumpDriverFailure @ 0x140550A98 (IopDumpTraceLoadCrashDumpDriverFailure.c)
 *     IopDumpTraceLoadDumpStackFailure @ 0x140550BA8 (IopDumpTraceLoadDumpStackFailure.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140940B30 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopDumpTraceForceDumpDisabled @ 0x140940E2C (IopDumpTraceForceDumpDisabled.c)
 *     IopTraceCrashDumpDisabledOnBoot @ 0x140940F2C (IopTraceCrashDumpDisabledOnBoot.c)
 * Callees:
 *     <none>
 */

bool IopDumpIsTracingEnabled()
{
  return IopDumpEtwRegHandle && IopDumpEtwEnabled != 0;
}
