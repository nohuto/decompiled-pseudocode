/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x14067B228
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x140663290 (SeCheckForCriticalAceRemoval.c)
 *     SeLocateProcessImageName @ 0x14067B210 (SeLocateProcessImageName.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140693918 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1406980F4 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x1406C6CEC (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091DA60 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14091E3A4 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14091E524 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E6E0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EC58 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091EE84 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14067B25C (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C1E080 )
    return ((__int64 (*)(void))xmmword_140C1E080)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
