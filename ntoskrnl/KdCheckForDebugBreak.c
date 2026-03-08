/*
 * XREFs of KdCheckForDebugBreak @ 0x1402C7D64
 * Callers:
 *     KeAccumulateTicks @ 0x14022F310 (KeAccumulateTicks.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x140389AFC (MiWalkPageTablesRecursivelyNoSynch.c)
 *     IoWriteCrashDump @ 0x14054EF00 (IoWriteCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140A9FCE4 (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     KdPollBreakIn @ 0x1402C7DA0 (KdPollBreakIn.c)
 *     DbgBreakPointWithStatus @ 0x1404203E0 (DbgBreakPointWithStatus.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
