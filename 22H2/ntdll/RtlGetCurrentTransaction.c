/*
 * XREFs of RtlGetCurrentTransaction @ 0x18006EBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HANDLE RtlGetCurrentTransaction(void)
{
  return NtCurrentTeb()->CurrentTransactionHandle;
}
