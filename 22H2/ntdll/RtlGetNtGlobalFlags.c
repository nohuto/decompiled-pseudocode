/*
 * XREFs of RtlGetNtGlobalFlags @ 0x18009CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtCurrentPeb()->NtGlobalFlag;
}
