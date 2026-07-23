/*
 * XREFs of SeReleaseSid @ 0x1406CDCD0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14026AA50 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405DD3F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406922C0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14069ED98 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 *     NtSecureConnectPort @ 0x1406CD3F0 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1406CED1C (AlpcpConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
