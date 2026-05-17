/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x180079590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsStateSeparationEnabled()
{
  return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
