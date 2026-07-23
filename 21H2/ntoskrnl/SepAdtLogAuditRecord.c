/*
 * XREFs of SepAdtLogAuditRecord @ 0x1403C2884
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x1402858A0 (SeReportSecurityEventWithSubCategory.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140693918 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140693A3C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x1406980F4 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x1407BC574 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407BC814 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14091D4AC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14091DA60 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14091DC2C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14091DE20 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditProcessExit @ 0x14091E3A4 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14091E524 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14091E6E0 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14091E91C (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14091EC58 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14091EE84 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14091F0E0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091F1D4 (SepAdtLogAuditFailureEvent.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14091F3CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14091F5F8 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtOpenObjectForDeleteAuditAlarm @ 0x14091FE80 (SepAdtOpenObjectForDeleteAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1409200BC (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140920360 (SepAdtStagingEvent.c)
 * Callees:
 *     SepQueueWorkItem @ 0x14023C470 (SepQueueWorkItem.c)
 *     SepRmDispatchDataToLsa @ 0x1402400A8 (SepRmDispatchDataToLsa.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     SepAdtMarshallAuditRecord @ 0x1403C2AF4 (SepAdtMarshallAuditRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
 *     SepAuditFailedRaisedIrql @ 0x140597EA8 (SepAuditFailedRaisedIrql.c)
 *     SepAdtLogAuditFailureEvent @ 0x14091F1D4 (SepAdtLogAuditFailureEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  PVOID v9; // rcx
  unsigned int v10; // ecx
  void *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v15[3]; // [rsp+28h] [rbp-50h] BYREF

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
    v13 = *(void **)(v5 + 56);
    if ( v13 )
      ObfDereferenceObjectWithTag(v13, 0x69416553u);
    ExFreePoolWithTag((PVOID)v5, 0);
    SepAdtLastAuditFailStatus = v8;
    _InterlockedIncrement(&SepAdtAuditFailureCount);
    if ( Src[1] == 521 )
      goto LABEL_33;
    v12 = (unsigned int)v8;
  }
  else
  {
    if ( !SepRmAuditingEnabled )
    {
      v9 = *v7;
      if ( (*((_DWORD *)*v7 + 5) & 2) != 0 )
      {
        if ( *(_QWORD *)(v5 + 56) )
        {
          ObfDereferenceObjectWithTag(*(PVOID *)(v5 + 56), 0x69416553u);
          v9 = *(PVOID *)(v5 + 24);
        }
        ExFreePoolWithTag(v9, 0);
        ExFreePoolWithTag((PVOID)v5, 0);
        return;
      }
    }
    v10 = *((_DWORD *)*v7 + 3);
    *(_DWORD *)(v5 + 36) = v10;
    if ( Src[1] == 521 && (Src[5] & 0x10) != 0 )
    {
      if ( v10 <= 0x1D0 )
      {
        memset(v15, 0, sizeof(v15));
        KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0, (__int64)v15);
        SepRmDispatchDataToLsa(v5);
        KiUnstackDetachProcess((__int64)v15, 0LL);
      }
      goto LABEL_33;
    }
    v14[0] = 0;
    if ( SepQueueWorkItem((__int64)&SepLsaAuditQueueInfo, v5, v14) )
      goto LABEL_33;
    v11 = *(void **)(v5 + 56);
    if ( v11 )
      ObfDereferenceObjectWithTag(v11, 0x69416553u);
    ExFreePoolWithTag(*v7, 0);
    ExFreePoolWithTag((PVOID)v5, 0);
    if ( v14[0] )
      goto LABEL_33;
    v12 = 3221225473LL;
  }
  SepAuditFailedRaisedIrql(v12);
LABEL_33:
  if ( SepAdtAuditFailureCount && CurrentIrql < 2u && Src[1] != 521 )
    SepAdtLogAuditFailureEvent((unsigned int)SepAdtLastAuditFailStatus, 0LL);
}
