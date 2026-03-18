/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x1406C38CC
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1406C2BB0 (ObpAdjustCreatorAccessState.c)
 *     SeCheckAuditPrivilege @ 0x1406C3678 (SeCheckAuditPrivilege.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheckEx @ 0x14070FCDC (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14072A470 (RtlpNewSecurityObject.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     PspSetQuotaLimits @ 0x1407E3E94 (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x14022A790 (RtlEqualSid.c)
 *     SepFilterPrivilegeAudits @ 0x1407C1558 (SepFilterPrivilegeAudits.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C8A64 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

BOOLEAN __fastcall SePrivilegedServiceAuditAlarm(int a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  BOOLEAN result; // al
  PSE_EXPORTS v12; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  result = RtlEqualSid(SeLocalSystemSid, v10);
  if ( !result )
  {
    v12 = SeExports;
    if ( !RtlEqualSid(SeExports->SeNetworkServiceSid, v10) && !RtlEqualSid(v12->SeLocalServiceSid, v10) )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
    result = SepFilterPrivilegeAudits(1LL, a3);
    if ( result )
      return SepAdtPrivilegedServiceAuditAlarm((_DWORD)a2, (unsigned int)&SeSubsystemName, a1, v4, a2[2], a3, a4);
  }
  return result;
}
