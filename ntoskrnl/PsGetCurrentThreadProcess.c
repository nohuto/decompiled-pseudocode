/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1402C0BB0
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x1406BA400 (SeCheckForCriticalAceRemoval.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     SepAdtTokenRightAdjusted @ 0x14070F51C (SepAdtTokenRightAdjusted.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckExeOwnerForPca @ 0x14074CBB4 (CmpCheckExeOwnerForPca.c)
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x14098D81C (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     PopDiagTracePowerSettingRegistration @ 0x14098DD00 (PopDiagTracePowerSettingRegistration.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7630 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C82C0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 *     CmpPublishEventForPcaResolver @ 0x140A0FE7C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A1628C (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
