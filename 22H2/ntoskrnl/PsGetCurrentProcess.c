/*
 * XREFs of PsGetCurrentProcess @ 0x140317590
 * Callers:
 *     KiLockExtendedServiceTable @ 0x1403E3218 (KiLockExtendedServiceTable.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A8268 (PopPowerRequestStatsGetIdForRequest.c)
 *     PopPowerRequestStatsIsDetailedRequestReason @ 0x1407A84C0 (PopPowerRequestStatsIsDetailedRequestReason.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
