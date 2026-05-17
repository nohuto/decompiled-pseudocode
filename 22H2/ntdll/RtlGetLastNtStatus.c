/*
 * XREFs of RtlGetLastNtStatus @ 0x18007CFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlGetLastNtStatus()
{
  return NtCurrentTeb()->LastStatusValue;
}
