/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x14098B6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
