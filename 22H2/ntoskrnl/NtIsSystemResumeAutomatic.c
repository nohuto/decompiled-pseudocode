/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x14077A3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
