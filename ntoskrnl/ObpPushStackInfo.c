/*
 * XREFs of ObpPushStackInfo @ 0x140580738
 * Callers:
 *     ObReferenceObjectByPointer @ 0x140208C70 (ObReferenceObjectByPointer.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ObFastDereferenceObject @ 0x140245F50 (ObFastDereferenceObject.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     ExpApplyPriorityBoost @ 0x140282C50 (ExpApplyPriorityBoost.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiEmptyPageAccessLog @ 0x14028C160 (MiEmptyPageAccessLog.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402911D0 (ExpSetResourceOwnerPointerEx.c)
 *     ObReferenceObjectExWithTag @ 0x1402CBB20 (ObReferenceObjectExWithTag.c)
 *     ObReferenceObjectSafe @ 0x1402CBCB0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     ExReturnPoolQuota @ 0x1403144E0 (ExReturnPoolQuota.c)
 *     IopQueueIrpToFileObject @ 0x140315880 (IopQueueIrpToFileObject.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     IoGetAttachedDeviceReference @ 0x140337BB0 (IoGetAttachedDeviceReference.c)
 *     ExpFreeOwnerEntry @ 0x14033B150 (ExpFreeOwnerEntry.c)
 *     ObpTraceObjectReferenceIfActive @ 0x14033BB14 (ObpTraceObjectReferenceIfActive.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14033E060 (ObReferenceObjectByPointerWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     IopQueueWorkItemProlog @ 0x140341380 (IopQueueWorkItemProlog.c)
 *     ObFastReferenceObject @ 0x1403434A0 (ObFastReferenceObject.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 *     ObFastDereferenceObjectDeferDelete @ 0x1403441C0 (ObFastDereferenceObjectDeferDelete.c)
 *     ObDereferenceObjectExWithTag @ 0x140344234 (ObDereferenceObjectExWithTag.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     NtWriteFile @ 0x1406B3A60 (NtWriteFile.c)
 *     SepCreateClientSecurityEx @ 0x1406D5F10 (SepCreateClientSecurityEx.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1406D6370 (EtwpGetSidExtendedHeaderItem.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     NtDuplicateToken @ 0x1406DAB50 (NtDuplicateToken.c)
 *     PspReferenceCidTableEntry @ 0x1406DC0A0 (PspReferenceCidTableEntry.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     ObRetagReferences @ 0x14070A380 (ObRetagReferences.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407118C4 (ObpReferenceProcessObjectByHandle.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407B8FB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     RtlpSetSecurityObject @ 0x1407BF100 (RtlpSetSecurityObject.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObWaitForMultipleObjects @ 0x1407D79B0 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x1407DF2CC (ObReferenceFileObjectForWrite.c)
 *     SepUpdateSiloInClientSecurity @ 0x1409CC168 (SepUpdateSiloInClientSecurity.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x140205D8C (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x140205E10 (ObGetCurrentIrql.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140580638 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405FAC04 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x14097A13C (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140D1EAD0 & 0x80u) != 0LL )
  {
    LOWORD(v8) = 4403 - (a2 != 0);
    EtwTraceObjectOperation(v8, a1, a3, a4);
  }
  if ( (ObpTraceFlags & 0x73) != 0 && (*(_BYTE *)(a1 + 25) & 1) != 0 && ObGetCurrentIrql() <= 2u )
  {
    v9 = RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, 0LL);
    if ( v9 )
    {
      if ( v9 < 0x10u )
        memset(&BackTrace[v9], 0, 8LL * (16 - (unsigned int)v9));
      v10 = _InterlockedExchangeAdd(&ObpStackSequence, 1u);
      LOBYTE(v11) = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( v11 )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (struct _SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
