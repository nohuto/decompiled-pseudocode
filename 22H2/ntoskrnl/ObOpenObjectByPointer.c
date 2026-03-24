/*
 * XREFs of ObOpenObjectByPointer @ 0x140653F10
 * Callers:
 *     VrpPostEnumerateKey @ 0x1405D37A4 (VrpPostEnumerateKey.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140607670 (PspOneDirectionSecurityDomainCombine.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     PsOpenThread @ 0x140626120 (PsOpenThread.c)
 *     ExGetNextProcess @ 0x14062BF4C (ExGetNextProcess.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     NtOpenThreadTokenEx @ 0x140653590 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x140653D50 (NtOpenProcessTokenEx.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140684420 (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x140685D04 (PspCombineSecurityDomains.c)
 *     WmipIoControl @ 0x14068B1D0 (WmipIoControl.c)
 *     EtwpOpenConsumer @ 0x14069BE14 (EtwpOpenConsumer.c)
 *     ObpSetDeviceMap @ 0x1406A04E4 (ObpSetDeviceMap.c)
 *     PiCMDuplicateRegistryHandle @ 0x1406A8C84 (PiCMDuplicateRegistryHandle.c)
 *     PspCreateObjectHandle @ 0x1406C3584 (PspCreateObjectHandle.c)
 *     PsOpenProcess @ 0x1406D34F0 (PsOpenProcess.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1406E8014 (CmConvertHandleToKernelHandle.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     NtOpenPrivateNamespace @ 0x140718550 (NtOpenPrivateNamespace.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407288C4 (SPCallServerHandleFileIntegrityUpdate.c)
 *     IopInvalidateVolumesForDevice @ 0x14077B720 (IopInvalidateVolumesForDevice.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140799280 (CmpInitializeRegistryProcess.c)
 *     ObInitServerSilo @ 0x1407C9000 (ObInitServerSilo.c)
 *     SmRegistrationInfoFill @ 0x1407CF218 (SmRegistrationInfoFill.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1407D1BBC (MmManagePartitionGetMemoryEvents.c)
 *     VrpPreLoadKey @ 0x1408833DC (VrpPreLoadKey.c)
 *     DbgkOpenProcessDebugPort @ 0x140884438 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x140884C84 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1408DCAE0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1408FD868 (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x14092B36C (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x14093B1D4 (EtwpCapturePreviousRegistryData.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1402062F8 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ObReferenceObjectByPointerWithTag @ 0x1402D6EC0 (ObReferenceObjectByPointerWithTag.c)
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x1403456F0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140345810 (SepCreateAccessStateFromSubjectContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall ObOpenObjectByPointer(
        PVOID Object,
        ULONG HandleAttributes,
        PACCESS_STATE PassedAccessState,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        PHANDLE Handle)
{
  void *v10; // r12
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rbx
  signed __int64 *p_Lock; // r13
  _QWORD *v15; // r12
  ULONG_PTR v16; // rbx
  NTSTATUS v17; // ebx
  NTSTATUS v18; // edi
  signed __int64 *v19; // r13
  signed __int64 *BugCheckParameter2; // [rsp+68h] [rbp-210h]
  struct _KTHREAD *v22; // [rsp+70h] [rbp-208h]
  struct _KTHREAD *v23; // [rsp+70h] [rbp-208h]
  __int128 v24; // [rsp+78h] [rbp-200h] BYREF
  ULONG_PTR v25; // [rsp+88h] [rbp-1F0h]
  signed __int64 v26; // [rsp+90h] [rbp-1E8h]
  _QWORD v27[20]; // [rsp+A0h] [rbp-1D8h] BYREF
  _QWORD v28[28]; // [rsp+140h] [rbp-138h] BYREF

  memset(v28, 0, sizeof(v28));
  memset(v27, 0, sizeof(v27));
  v10 = 0LL;
  v11 = ObjectType;
  *Handle = 0LL;
  result = ObReferenceObjectByPointerWithTag(Object, 0, ObjectType, AccessMode, 0x6E48624Fu);
  if ( result >= 0 )
  {
    if ( !ObjectType )
      v11 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( (HandleAttributes & v11->TypeInfo.InvalidAttributes) != 0
      || (*((char *)Object - 21) & 1) != 0 && *((_QWORD *)Object - 2) )
    {
      ++ObpInvalidOpenByPointer;
      ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      return -1073741811;
    }
    else
    {
      if ( !PassedAccessState )
      {
        CurrentThread = KeGetCurrentThread();
        *((_QWORD *)&v24 + 1) = 0LL;
        p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
        v26 = p_Lock[136];
        if ( CurrentThread && (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          BugCheckParameter2 = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v10 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v10);
            DWORD2(v24) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(BugCheckParameter2);
          KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)v22);
        }
        *(_QWORD *)&v24 = v10;
        v15 = p_Lock + 151;
        v16 = ObFastReferenceObject(p_Lock + 151);
        if ( !v16 )
        {
          v23 = KeGetCurrentThread();
          --v23->KernelApcDisable;
          v19 = p_Lock + 135;
          ExAcquirePushLockSharedEx((ULONG_PTR)v19, 0LL);
          v16 = ObFastReferenceObjectLocked(v15);
          if ( _InterlockedCompareExchange64(v19, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v19);
          KeAbPostRelease((ULONG_PTR)v19);
          KeLeaveCriticalRegionThread((__int64)v23);
        }
        v25 = v16;
        if ( SeTokenLeakTracking )
        {
          if ( v16 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 1144) + 284LL));
            if ( v16 == SepTokenLeakToken )
              __debugbreak();
          }
          if ( (_QWORD)v24 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v24 + 1144) + 284LL));
            if ( (_QWORD)v24 == SepTokenLeakToken )
              __debugbreak();
          }
        }
        v17 = SepCreateAccessStateFromSubjectContext(&v24, v27, v28, DesiredAccess, &v11->TypeInfo.GenericMapping);
        if ( v17 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v17;
        }
        PassedAccessState = (PACCESS_STATE)v27;
      }
      v18 = ObpCreateHandle(
              1u,
              (struct _DMA_ADAPTER *)Object,
              0,
              PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              (unsigned __int64 *)Handle);
      if ( v18 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v27 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v18;
    }
  }
  return result;
}
