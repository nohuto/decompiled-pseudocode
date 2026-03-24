/*
 * XREFs of PsGetCurrentThreadProcess @ 0x140316F60
 * Callers:
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x140608AA0 (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140627C28 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140627D4C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpVEExecuteParseLogic @ 0x1406498B0 (CmpVEExecuteParseLogic.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140688794 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpIsSystemEntity @ 0x1406CF8B0 (CmpIsSystemEntity.c)
 *     SeCheckForCriticalAceRemoval @ 0x1406E7260 (SeCheckForCriticalAceRemoval.c)
 *     CmpCheckExeOwnerForPca @ 0x14076F828 (CmpCheckExeOwnerForPca.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140775950 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC5A4 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x14086AB7C (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE5C (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871DE8 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091D950 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14091E414 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E5D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E80C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EB48 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED74 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F4E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FFAC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920250 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
