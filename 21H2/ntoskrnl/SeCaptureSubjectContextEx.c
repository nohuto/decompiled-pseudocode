/*
 * XREFs of SeCaptureSubjectContextEx @ 0x140657C60
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x1402BD264 (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 *     CmpIsSystemEntity @ 0x140656AF0 (CmpIsSystemEntity.c)
 *     PsOpenProcess @ 0x14065A730 (PsOpenProcess.c)
 *     SeCreateAccessStateEx @ 0x1406618D0 (SeCreateAccessStateEx.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1406E3FF0 (EtwpCheckProviderLoggingAccess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406E50F0 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406E52CC (ObpCaptureBoundaryDescriptor.c)
 *     CmpVEExecuteParseLogic @ 0x1406FC190 (CmpVEExecuteParseLogic.c)
 *     IopXxxControlFile @ 0x1406FE010 (IopXxxControlFile.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     NtDuplicateToken @ 0x140705150 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     ExpCheckWakeTimerAccess @ 0x14078E5D8 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409C67E4 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x140206338 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x14027C6E0 (ObFastReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfReferenceObject @ 0x14034B230 (ObfReferenceObject.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // r14
  unsigned __int64 *v7; // r14
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v10; // r15
  signed __int64 *p_Lock; // rsi

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
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v10);
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
