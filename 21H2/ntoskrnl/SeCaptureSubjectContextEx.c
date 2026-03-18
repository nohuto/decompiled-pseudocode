/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14072A390
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140258040 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     AlpcpCheckConnectionSecurity @ 0x140668294 (AlpcpCheckConnectionSecurity.c)
 *     NtSetInformationJobObject @ 0x140685A20 (NtSetInformationJobObject.c)
 *     CmpIsSystemEntity @ 0x1406B67A0 (CmpIsSystemEntity.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406C0B60 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406C0D00 (ObpCaptureBoundaryDescriptor.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406D75F4 (ExCheckFullProcessInformationAccess.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     PsOpenProcess @ 0x1407292A0 (PsOpenProcess.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     IopXxxControlFile @ 0x1407308F0 (IopXxxControlFile.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140790C44 (EtwpCheckProviderLoggingAccess.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     ExpCheckWakeTimerAccess @ 0x1407F4160 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140A81DB4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rbx
  _QWORD *v7; // rax
  struct _KTHREAD *CurrentThread; // r12
  void *v9; // r14

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v9 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v9, 0x75536553u);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v9 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      v6 = v9;
    }
    else
    {
      v6 = 0LL;
    }
  }
  else
  {
    v6 = 0LL;
  }
  SubjectContext->ClientToken = v6;
  v7 = (_QWORD *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
  SubjectContext->PrimaryToken = v7;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
