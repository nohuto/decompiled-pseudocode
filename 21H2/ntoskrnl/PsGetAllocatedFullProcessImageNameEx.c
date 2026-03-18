/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1407B66E0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1406785F0 (SeCheckForCriticalAceRemoval.c)
 *     SepQueryNameString @ 0x140696CCC (SepQueryNameString.c)
 *     SeLocateProcessImageName @ 0x1406D0AC0 (SeLocateProcessImageName.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407240A0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1407241BC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14079D470 (SepAdtTokenRightAdjusted.c)
 *     ExpGetProcessInformation @ 0x1407B6CA0 (ExpGetProcessInformation.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1409C7C84 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409C7E08 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C820C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8548 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8774 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C8EE8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C99C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409C9C64 (SepAdtStagingEvent.c)
 *     ExProcessCounterSetCallback @ 0x1409F5F90 (ExProcessCounterSetCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx

  if ( *(_QWORD *)(a1 + 2240) && xmmword_140C1BE40 )
    return xmmword_140C1BE40();
  v3 = *(_QWORD *)(a1 + 1472);
  if ( !v3 )
    return 3221226021LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned __int16 *)(v3 + 2) + 16LL, 0x6E497350u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  *(_OWORD *)PoolWithTag = *(_OWORD *)v3;
  if ( PoolWithTag[1] )
  {
    PoolWithTag[1] = PoolWithTag + 2;
    memmove(PoolWithTag + 2, *(const void **)(v3 + 8), *(unsigned __int16 *)(v3 + 2));
  }
  *a2 = v5;
  return 0LL;
}
