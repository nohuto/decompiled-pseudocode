/*
 * XREFs of ObpPushStackInfo @ 0x140564C68
 * Callers:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC50 (PsImpersonateContainerOfThread.c)
 *     IopCallDriverReference @ 0x14022B670 (IopCallDriverReference.c)
 *     IoGetAttachedDeviceReference @ 0x14022C380 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140249AE0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402D26C0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402D6EC0 (ObReferenceObjectByPointerWithTag.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1402DCAE0 (ExpSetResourceOwnerPointerEx.c)
 *     PsGetThreadProperty @ 0x1402EFE20 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402F1100 (IopQueueIrpToFileObject.c)
 *     ObReferenceObjectSafe @ 0x1402F1E80 (ObReferenceObjectSafe.c)
 *     ObReferenceObjectExWithTag @ 0x1402F6460 (ObReferenceObjectExWithTag.c)
 *     ObReferenceObjectByPointer @ 0x14035F490 (ObReferenceObjectByPointer.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     PspReferenceCidTableEntry @ 0x140625E70 (PspReferenceCidTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x140650820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140665280 (ObpReferenceProcessObjectByHandle.c)
 *     ObReferenceFileObjectForWrite @ 0x1406C92D0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CDE0 (RtlCaptureStackBackTrace.c)
 *     MmCanThreadFault @ 0x14025ED70 (MmCanThreadFault.c)
 *     ObGetCurrentIrql @ 0x14025EDF0 (ObGetCurrentIrql.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpDeferPushRefDerefInfo @ 0x140564B68 (ObpDeferPushRefDerefInfo.c)
 *     EtwTraceObjectOperation @ 0x1405A78F0 (EtwTraceObjectOperation.c)
 *     ObpPushRefDerefInfo @ 0x1408DEBC0 (ObpPushRefDerefInfo.c)
 */

void __fastcall ObpPushStackInfo(__int64 a1, char a2, unsigned int a3, unsigned int a4)
{
  __int64 v8; // rcx
  USHORT v9; // ax
  signed __int32 v10; // ebx
  BOOL CanThreadFault; // eax
  int v12; // r9d
  int v13; // edx
  PVOID BackTrace[16]; // [rsp+30h] [rbp-88h] BYREF

  memset(BackTrace, 0, sizeof(BackTrace));
  if ( (xmmword_140CFC490 & 0x80u) != 0LL )
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
      CanThreadFault = MmCanThreadFault();
      v12 = v10 + 1;
      LOBYTE(v13) = a2;
      if ( CanThreadFault )
        ObpPushRefDerefInfo(a1, v13, (unsigned __int16)a3, v12, BackTrace, a4);
      else
        ObpDeferPushRefDerefInfo(a1, a2, a3, v12, (_SLIST_ENTRY *)BackTrace, a4);
    }
  }
}
