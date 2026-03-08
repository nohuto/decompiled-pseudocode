/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x140699B5C
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x140698E40 (ObpAdjustCreatorAccessState.c)
 *     SeCheckAuditPrivilege @ 0x140699908 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406BA46C (SeSinglePrivilegeCheckEx.c)
 *     PspSetQuotaLimits @ 0x140794940 (PspSetQuotaLimits.c)
 *     RtlpNewSecurityObject @ 0x1407BD790 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 * Callees:
 *     RtlEqualSid @ 0x140208A60 (RtlEqualSid.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepFilterPrivilegeAudits @ 0x14076FBA8 (SepFilterPrivilegeAudits.c)
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
