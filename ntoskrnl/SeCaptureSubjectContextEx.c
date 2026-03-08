/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1407C9AF0
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1403AB15C (ExCpuSetResourceManagerAccessCheck.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140690144 (EtwpCheckProviderLoggingAccess.c)
 *     SeCreateAccessStateEx @ 0x1406991E0 (SeCreateAccessStateEx.c)
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     NtSetInformationJobObject @ 0x1406FC3C0 (NtSetInformationJobObject.c)
 *     AlpcpCheckConnectionSecurity @ 0x1407125C8 (AlpcpCheckConnectionSecurity.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140741CB8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140743538 (ObpCaptureBoundaryDescriptor.c)
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 *     ExCheckFullProcessInformationAccess @ 0x140791A18 (ExCheckFullProcessInformationAccess.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x1407C9AC0 (SeCaptureSubjectContext.c)
 *     ExpCheckWakeTimerAccess @ 0x1407F8F28 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140ABF724 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rbp
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
