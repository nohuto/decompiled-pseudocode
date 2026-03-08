/*
 * XREFs of SeReleaseSid @ 0x140710A34
 * Callers:
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x140712F5C (AlpcpConnectPort.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x14071A2DC (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407569CC (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x140774850 (NtSecureConnectPort.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
