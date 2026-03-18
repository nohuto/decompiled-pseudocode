/*
 * XREFs of SeReleaseSid @ 0x140668444
 * Callers:
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     NtSecureConnectPort @ 0x140664220 (NtSecureConnectPort.c)
 *     NtCreateTokenEx @ 0x1406647E0 (NtCreateTokenEx.c)
 *     AlpcpConnectPort @ 0x140666D1C (AlpcpConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14069B030 (AlpcpPortQueryConnectedSidInfo.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140722B40 (SepAccessCheckAndAuditAlarm.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407946F8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSid(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
    ExFreePoolWithTag(a1, 0);
}
