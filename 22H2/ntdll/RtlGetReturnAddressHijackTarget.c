/*
 * XREFs of RtlGetReturnAddressHijackTarget @ 0x1800FD790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (*RtlGetReturnAddressHijackTarget())()
{
  return RtlRaiseExceptionForReturnAddressHijack;
}
