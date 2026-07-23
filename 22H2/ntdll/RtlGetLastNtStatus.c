/*
 * XREFs of RtlGetLastNtStatus @ 0x18007CFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlGetLastNtStatus(void)
{
  return NtCurrentTeb()->LastStatusValue;
}
