/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14023A1C0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 *     CmpCheckExeOwnerForPca @ 0x1406B4F98 (CmpCheckExeOwnerForPca.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406B5158 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407240A0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1407241BC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     SepAdtTokenRightAdjusted @ 0x14079D470 (SepAdtTokenRightAdjusted.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     PopDiagTracePowerSettingRegistration @ 0x1407F77B8 (PopDiagTracePowerSettingRegistration.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1407FE9A0 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x140910BCC (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1409C7E08 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C820C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8548 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8774 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C8EE8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C99C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409C9C64 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
