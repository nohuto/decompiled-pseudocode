/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x18010B0D4
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4004 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x18009E0B0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
