/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14064CA80
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x14023B914 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     CmpIsSystemEntity @ 0x14064B910 (CmpIsSystemEntity.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     SeCreateAccessStateEx @ 0x1406566F0 (SeCreateAccessStateEx.c)
 *     NtSetInformationJobObject @ 0x14067DE60 (NtSetInformationJobObject.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1406BB2D0 (EtwpCheckProviderLoggingAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406BC3D0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406BC5AC (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x1406CE284 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 *     CmpVEExecuteParseLogic @ 0x140713570 (CmpVEExecuteParseLogic.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     NtDuplicateToken @ 0x14071C530 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E798 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C77E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14026A680 (ObFastReferenceObject.c)
 *     ObFastReferenceObjectLocked @ 0x1402AAC68 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // r14
  unsigned __int64 *v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *v13; // r15
  signed __int64 *p_Lock; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9

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
        v6 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
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
  v7 = &Process[1].Affinity.Bitmap[5];
  v8 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v8 )
  {
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v13, v15, v16, v17);
  }
  SubjectContext->PrimaryToken = v8;
  if ( SeTokenLeakTracking )
  {
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
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
