/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140988600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
