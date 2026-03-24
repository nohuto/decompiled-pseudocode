/*
 * XREFs of SeReleaseSid @ 0x1405DE570
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14027CAB0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F2E8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406261B0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406823B8 (AlpcpPortQueryConnectedSidInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
