/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14023C620
 * Callers:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 *     SeCheckForCriticalAceRemoval @ 0x140663290 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140693918 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1406980F4 (SepAdtTokenRightAdjusted.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1406DBF40 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmpVEExecuteParseLogic @ 0x140713570 (CmpVEExecuteParseLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FD28 (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1407750B0 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AC8C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091DA60 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14091E524 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E6E0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EC58 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091EE84 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
