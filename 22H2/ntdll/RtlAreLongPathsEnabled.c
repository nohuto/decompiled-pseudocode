/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800762B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlAreLongPathsEnabled(void)
{
  return NtCurrentPeb()->BitField >> 7;
}
