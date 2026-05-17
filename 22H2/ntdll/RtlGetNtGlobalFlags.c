/*
 * XREFs of RtlGetNtGlobalFlags @ 0x18009CD20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtCurrentPeb()->NtGlobalFlag;
}
