/*
 * XREFs of NtSetIRTimer @ 0x14032BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140349154 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
