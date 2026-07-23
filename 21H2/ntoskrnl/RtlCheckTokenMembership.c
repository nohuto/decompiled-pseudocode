/*
 * XREFs of RtlCheckTokenMembership @ 0x14026D6E0
 * Callers:
 *     ExCheckFullProcessInformationAccess @ 0x140619F60 (ExCheckFullProcessInformationAccess.c)
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 *     ExpCheckIRTimerAccess @ 0x140772AA8 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x14077A5A8 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14078E3E0 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F218C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1409134B0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x140923F00 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093B2BC (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14026D700 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
