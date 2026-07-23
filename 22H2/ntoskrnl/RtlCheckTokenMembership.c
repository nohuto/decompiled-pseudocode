/*
 * XREFs of RtlCheckTokenMembership @ 0x140348440
 * Callers:
 *     ExCheckFullProcessInformationAccess @ 0x14069DFCC (ExCheckFullProcessInformationAccess.c)
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 *     ExpCheckIRTimerAccess @ 0x1407725A8 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x14077A2E8 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14078E120 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F207C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1409133A0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x140923DF0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093B13C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140348460 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
