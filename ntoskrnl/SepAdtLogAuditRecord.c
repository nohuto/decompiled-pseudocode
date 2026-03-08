/*
 * XREFs of SepAdtLogAuditRecord @ 0x140397890
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140299040 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406996AC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14069D1D4 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14070F51C (SepAdtTokenRightAdjusted.c)
 *     SeAuditBootConfiguration @ 0x14083FCC8 (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x1408401DC (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x140840400 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1409C7074 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1409C7630 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1409C77FC (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C79F0 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x1409C7F74 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1409C80F8 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1409C82C0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1409C84FC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1409C8838 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1409C8A64 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1409C8CB0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409C8DA4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1409C8F9C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409C930C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x1409C9C0C (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409C9E48 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1409CA0F4 (SepAdtStagingEvent.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     SepRmDispatchDataToLsa @ 0x1402E88D8 (SepRmDispatchDataToLsa.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x140355178 (SepQueueWorkItem.c)
 *     SepAdtMarshallAuditRecord @ 0x1403979E4 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     SepAuditFailedRaisedIrql @ 0x1405B72BC (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x1409C8DA4 (SepAdtLogAuditFailureEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v3; // rcx
  __int64 Pool2; // rax
  __int64 v5; // rbx
  void *CurrentServerSilo; // rax
  PVOID *v7; // r14
  int v8; // r15d
  _DWORD *v9; // rbp
  unsigned int v10; // ecx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  _BYTE v15[8]; // [rsp+20h] [rbp-68h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v16; // [rsp+28h] [rbp-60h] BYREF

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
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    *(_QWORD *)(v5 + 56) = CurrentServerSilo;
    if ( CurrentServerSilo )
      ObfReferenceObjectWithTag(CurrentServerSilo, 0x69416553u);
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
      v9 = Src + 1;
      if ( Src[1] == 521 )
        goto LABEL_13;
      v13 = (unsigned int)v8;
      goto LABEL_31;
    }
    if ( SepRmAuditingEnabled || (*((_DWORD *)*v7 + 5) & 2) == 0 )
    {
      v9 = Src + 1;
      v10 = *((_DWORD *)*v7 + 3);
      *(_DWORD *)(v5 + 36) = v10;
      if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
      {
        if ( v10 <= 0x1D0 )
        {
          memset(&v16, 0, sizeof(v16));
          KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)&v16);
          SepRmDispatchDataToLsa(v5);
          KiUnstackDetachProcess(&v16);
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
      if ( SepAdtAuditFailureCount && CurrentIrql < 2u && *v9 != 521 )
        SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
      return;
    }
    v11 = *(void **)(v5 + 56);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
  }
  else if ( Src[1] != 521 )
  {
    SepAuditFailedRaisedIrql(3221225626LL);
  }
}
