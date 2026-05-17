/*
 * XREFs of RtlGetCurrentPeb @ 0x1800FCE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_PEB *RtlGetCurrentPeb()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock;
}
