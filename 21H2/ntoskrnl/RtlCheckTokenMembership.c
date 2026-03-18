/*
 * XREFs of RtlCheckTokenMembership @ 0x1402E0C80
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     PopValidateContextMembership @ 0x1406EB3FC (PopValidateContextMembership.c)
 *     PopIsRunningAsLocalSystem @ 0x1406EBAD8 (PopIsRunningAsLocalSystem.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     ExpCheckIRTimerAccess @ 0x1407F40A8 (ExpCheckIRTimerAccess.c)
 *     PopNetUpdateStandbyRequest @ 0x1409988BC (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x1409CD880 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E1E64 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
