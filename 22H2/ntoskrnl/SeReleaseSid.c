/*
 * XREFs of SeReleaseSid @ 0x1405DE570
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140345AC0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcpConnectPort @ 0x1405DF5BC (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14060F748 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1406265D0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406616E8 (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
