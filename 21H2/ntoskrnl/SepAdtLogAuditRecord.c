/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403CD84C
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402EC620 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1407240A0 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1407241BC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14079D470 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x140847400 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1408476A0 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C6D8C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7340 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409C750C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C7700 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x1409C7C84 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409C7E08 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C7FD0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C820C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8548 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8774 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1409C89D0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409C8AC4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8CBC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C8EE8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1409C9784 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C99C0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409C9C64 (SepAdtStagingEvent.c)
 * Callees:
 *     SepRmDispatchDataToLsa @ 0x1402037E8 (SepRmDispatchDataToLsa.c)
 *     SepQueueWorkItem @ 0x140223644 (SepQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 *     SepAdtMarshallAuditRecord @ 0x1403CD9A0 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1405F5B3C (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409C8AC4 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *ThreadServerSilo; // rax
  PVOID *v7; // r14
  int v8; // ebp
  _DWORD *v9; // r9
  PVOID v10; // rcx
  unsigned int v11; // ecx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v16[3]; // [rsp+28h] [rbp-50h] BYREF

  if ( !SepRmAuditingEnabled && (Src[5] & 2) != 0 )
    return;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 64LL;
  if ( CurrentIrql != 2 )
    v3 = 256LL;
  Pool2 = ExAllocatePool2(v3, 64LL, 1765893459LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 40) = 0LL;
    *(_DWORD *)(Pool2 + 48) = 0;
    *(_DWORD *)(Pool2 + 20) = 1;
    *(_DWORD *)(Pool2 + 32) = 1;
    ThreadServerSilo = (void *)PsGetThreadServerSilo((__int64)KeGetCurrentThread());
    *(_QWORD *)(v5 + 56) = ThreadServerSilo;
    if ( ThreadServerSilo )
      ObfReferenceObjectWithTag(ThreadServerSilo, 0x69416553u);
    v7 = (PVOID *)(v5 + 24);
    v8 = SepAdtMarshallAuditRecord(Src);
    if ( v8 < 0 )
    {
      v14 = *(void **)(v5 + 56);
      if ( v14 )
        ObfDereferenceObjectWithTag(v14, 0x69416553u);
      ExFreePoolWithTag((PVOID)v5, 0);
      SepAdtLastAuditFailStatus = v8;
      _InterlockedIncrement(&SepAdtAuditFailureCount);
      if ( Src[1] == 521 )
        goto LABEL_13;
      v13 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (v10 = *v7, (*((_DWORD *)*v7 + 5) & 2) == 0) )
    {
      v11 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v11;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v11 <= 0x1D0 )
        {
          memset(v16, 0, sizeof(v16));
          KiStackAttachProcess(SepRmLsaCallProcess, 0LL, (__int64)v16, v9);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess((__int64)v16, 0LL);
        }
        goto LABEL_13;
      }
      v15[0] = 0;
      if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v15) )
        goto LABEL_13;
      v12 = *(void **)(v5 + 56);
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x69416553u);
      ExFreePoolWithTag(*v7, 0);
      ExFreePoolWithTag((PVOID)v5, 0);
      if ( v15[0] )
        goto LABEL_13;
      v13 = 3221225473LL;
LABEL_31:
      SepAuditFailedRaisedIrql(v13);
LABEL_13:
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    if ( *(_QWORD *)(v5 + 56) )
    {
      ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
      v10 = *(PVOID *)(v5 + 24);
    }
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
