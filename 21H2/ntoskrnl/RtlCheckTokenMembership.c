/*
 * XREFs of RtlCheckTokenMembership @ 0x14027F430
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406BAC8C (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x1407728E8 (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x14077A3E8 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14078E220 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408F202C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140913350 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x140923DA0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x14093B0EC (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x14027F450 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
