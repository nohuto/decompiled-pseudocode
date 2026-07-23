/*
 * XREFs of RtlGetFrame @ 0x1800CDA80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PTEB_ACTIVE_FRAME RtlGetFrame(void)
{
  return NtCurrentTeb()->ActiveFrame;
}
