/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1407E7618
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExpGetProcessInformation @ 0x1406A9140 (ExpGetProcessInformation.c)
 *     SeCheckForCriticalAceRemoval @ 0x1406BA400 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtTokenRightAdjusted @ 0x14070F51C (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x140744C84 (SepQueryNameString.c)
 *     SeLocateProcessImageName @ 0x1407E7600 (SeLocateProcessImageName.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7630 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409C7F74 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C82C0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 *     ExProcessCounterSetCallback @ 0x1409F2FF0 (ExProcessCounterSetCallback.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407E764C (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C37D60 )
    return ((__int64 (*)(void))xmmword_140C37D60)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
