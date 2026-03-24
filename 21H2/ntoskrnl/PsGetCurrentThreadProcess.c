/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1402BDFE0
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x140608640 (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140627808 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062792C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
 *     SeCheckForCriticalAceRemoval @ 0x14066E470 (SeCheckForCriticalAceRemoval.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406A5CB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpVEExecuteParseLogic @ 0x1406FC190 (CmpVEExecuteParseLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FB68 (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140774EF0 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BBDE4 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB2C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE0C (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871D98 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D34C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091D900 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14091E3C4 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E580 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E7BC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EAF8 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED24 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F498 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FF5C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920200 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
