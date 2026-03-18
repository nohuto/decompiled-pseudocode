/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x140742C84
 * Callers:
 *     SepAdtTokenRightAdjusted @ 0x1406BB15C (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406C341C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x14070FC70 (SeCheckForCriticalAceRemoval.c)
 *     ExpGetProcessInformation @ 0x1407432D0 (ExpGetProcessInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407C8A64 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeLocateProcessImageName @ 0x1407D8D40 (SeLocateProcessImageName.c)
 *     SepQueryNameString @ 0x1407F555C (SepQueryNameString.c)
 *     SepAuditAssignPrimaryToken @ 0x140842830 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140842A54 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409CA0C4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409CA680 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409CAFC4 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409CB148 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409CB310 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409CB54C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409CB888 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409CBAB4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409CC218 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409CCCF0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CCF9C (SepAdtStagingEvent.c)
 *     ExProcessCounterSetCallback @ 0x1409F5E80 (ExProcessCounterSetCallback.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BAD4 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140742CB8 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 2240) && (_QWORD)xmmword_140C381A0 )
    return ((__int64 (*)(void))xmmword_140C381A0)();
  if ( *(_QWORD *)(a1 + 1472) )
    return PsGetAllocatedFullProcessImageName();
  return result;
}
