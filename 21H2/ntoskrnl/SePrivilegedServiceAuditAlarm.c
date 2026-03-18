/*
 * XREFs of SePrivilegedServiceAuditAlarm @ 0x140726520
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1407227B0 (ObpAdjustCreatorAccessState.c)
 *     SeCheckAuditPrivilege @ 0x140724008 (SeCheckAuditPrivilege.c)
 *     SeSinglePrivilegeCheckEx @ 0x140724418 (SeSinglePrivilegeCheckEx.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     RtlpNewSecurityObject @ 0x1407CE760 (RtlpNewSecurityObject.c)
 *     PspSetQuotaLimits @ 0x1407F2DBC (PspSetQuotaLimits.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     SepFilterPrivilegeAudits @ 0x1406BC1E4 (SepFilterPrivilegeAudits.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407240A0 (SepAdtPrivilegedServiceAuditAlarm.c)
 */

void __fastcall SePrivilegedServiceAuditAlarm(unsigned __int16 *a1, __int64 *a2, int *a3, char a4)
{
  __int64 v4; // rdi
  __int64 v9; // rax
  void *v10; // rsi
  PSE_EXPORTS v11; // rbp

  v4 = *a2;
  v9 = *a2;
  if ( !*a2 )
    v9 = a2[2];
  v10 = **(void ***)(v9 + 152);
  if ( !RtlEqualSid(SeLocalSystemSid, v10) )
  {
    if ( (v11 = SeExports, !RtlEqualSid(SeExports->SeNetworkServiceSid, v10))
      && !RtlEqualSid(v11->SeLocalServiceSid, v10)
      || SepFilterPrivilegeAudits(1, (unsigned int *)a3) )
    {
      SepAdtPrivilegedServiceAuditAlarm((int)a2, &SeSubsystemName, a1, v4, a2[2], a3, a4);
    }
  }
}
