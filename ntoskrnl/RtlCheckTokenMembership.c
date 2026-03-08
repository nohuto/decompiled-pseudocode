/*
 * XREFs of RtlCheckTokenMembership @ 0x1402BDFD0
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     RtlCapabilityCheck @ 0x140741730 (RtlCapabilityCheck.c)
 *     PopValidateContextMembership @ 0x14079BF0C (PopValidateContextMembership.c)
 *     PopIsRunningAsLocalSystem @ 0x14079C550 (PopIsRunningAsLocalSystem.c)
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     ExpCheckIRTimerAccess @ 0x1407F8E70 (ExpCheckIRTimerAccess.c)
 *     PopNetUpdateStandbyRequest @ 0x1409939AC (PopNetUpdateStandbyRequest.c)
 *     NtFilterBootOption @ 0x1409CD700 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E218C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x140204B90 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2, _BYTE *a3)
{
  return RtlCheckTokenMembershipEx(a1, a2, 0, a3);
}
