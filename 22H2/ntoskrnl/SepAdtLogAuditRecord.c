/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403C20B4
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140252250 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtTokenRightAdjusted @ 0x140608AA0 (SepAdtTokenRightAdjusted.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140627C28 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140627D4C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC5A4 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407BC844 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D39C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091D950 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091DB1C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091DD10 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14091E294 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14091E414 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E5D0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E80C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EB48 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091ED74 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14091EFD0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091F0C4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091F2BC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F4E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14091FD70 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14091FFAC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920250 (SepAdtStagingEvent.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PsGetThreadServerSilo @ 0x140206500 (PsGetThreadServerSilo.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x14034D010 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 *     SepAdtMarshallAuditRecord @ 0x1403C2324 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2494 (KeIsExecutingInArbitraryThreadContext.c)
 *     SepAuditFailedRaisedIrql @ 0x140597BB8 (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091F0C4 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAdtLogAuditRecord(_DWORD *Src)
{
  unsigned __int8 CurrentIrql; // r15
  POOL_TYPE v3; // edi
  _QWORD *PoolWithTag; // rax
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
  v3 = NonPagedPoolNx;
  if ( CurrentIrql != 2 )
    v3 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v3, 0x40uLL, 0x69416553u);
  v5 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( Src[1] != 521 )
      SepAuditFailedRaisedIrql(3221225626LL);
    return;
  }
  PoolWithTag[5] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_DWORD *)PoolWithTag + 5) = 1;
  *((_DWORD *)PoolWithTag + 8) = 1;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    ThreadServerSilo = 0LL;
  else
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
      goto LABEL_33;
    v13 = (unsigned int)v8;
  }
  else
  {
    if ( !SepRmAuditingEnabled )
    {
      v10 = *v7;
      if ( (*((_DWORD *)*v7 + 5) & 2) != 0 )
      {
        if ( *(_QWORD *)(v5 + 56) )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
          v10 = *(PVOID *)(v5 + 24);
        }
        ExFreePoolWithTag(v10, 0);
        ExFreePoolWithTag((PVOID)v5, 0);
        return;
      }
    }
    v11 = *((_DWORD *)*v7 + 3);
    *(_DWORD *)(v5 + 36) = v11;
    if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
    {
      if ( v11 <= 0x1D0 )
      {
        memset(v16, 0, sizeof(v16));
        KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v16, v9);
        SepRmDispatchDataToLsa(v5);
        KiUnstackDetachProcess((__int64)v16, 0);
      }
      goto LABEL_33;
    }
    v15[0] = 0;
    if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v15) )
      goto LABEL_33;
    v12 = *(void **)(v5 + 56);
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    if ( v15[0] )
      goto LABEL_33;
    v13 = 3221225473LL;
  }
  SepAuditFailedRaisedIrql(v13);
LABEL_33:
  if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
    SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
}
