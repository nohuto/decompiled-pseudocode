/*
 * XREFs of KdCheckForDebugBreak @ 0x140383F80
 * Callers:
 *     KeAccumulateTicks @ 0x1402243D0 (KeAccumulateTicks.c)
 *     IoWriteCrashDump @ 0x140502950 (IoWriteCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x140537D28 (MiAddRangeToCrashDump.c)
 *     PopHiberCheckForDebugBreak @ 0x140994FFC (PopHiberCheckForDebugBreak.c)
 * Callees:
 *     DbgBreakPointWithStatus @ 0x140406F30 (DbgBreakPointWithStatus.c)
 *     KdPollBreakIn @ 0x140511A60 (KdPollBreakIn.c)
 */

void KdCheckForDebugBreak()
{
  if ( !KdPitchDebugger && (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    if ( (unsigned __int8)KdPollBreakIn() )
      DbgBreakPointWithStatus(1u);
  }
}
