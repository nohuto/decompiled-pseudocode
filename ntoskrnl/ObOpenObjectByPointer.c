/*
 * XREFs of ObOpenObjectByPointer @ 0x1407C93D0
 * Callers:
 *     NtCreateWorkerFactory @ 0x14068A160 (NtCreateWorkerFactory.c)
 *     ExGetNextProcess @ 0x1406A8CF4 (ExGetNextProcess.c)
 *     PsOpenProcess @ 0x1406ABCC0 (PsOpenProcess.c)
 *     PspCreateObjectHandle @ 0x1406B1864 (PspCreateObjectHandle.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     CmConvertHandleToKernelHandle @ 0x1406BD0E0 (CmConvertHandleToKernelHandle.c)
 *     NtOpenThreadTokenEx @ 0x1406D2730 (NtOpenThreadTokenEx.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14070C414 (PspOneDirectionSecurityDomainCombine.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     VrpPreLoadKey @ 0x140735EB4 (VrpPreLoadKey.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     NtOpenPrivateNamespace @ 0x140741560 (NtOpenPrivateNamespace.c)
 *     EtwpOpenConsumer @ 0x14074902C (EtwpOpenConsumer.c)
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     PiCMDuplicateRegistryHandle @ 0x14076CC0C (PiCMDuplicateRegistryHandle.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140777B1C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     PspCombineSecurityDomains @ 0x140778A04 (PspCombineSecurityDomains.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     WmipIoControl @ 0x140787290 (WmipIoControl.c)
 *     ObpSetDeviceMap @ 0x14078990C (ObpSetDeviceMap.c)
 *     NtGetNextThread @ 0x140790200 (NtGetNextThread.c)
 *     MmManagePartitionGetMemoryEvents @ 0x14079B930 (MmManagePartitionGetMemoryEvents.c)
 *     SPCallServerHandleFileIntegrityUpdate @ 0x1407FA154 (SPCallServerHandleFileIntegrityUpdate.c)
 *     CmpInitializeRegistryProcess @ 0x140817300 (CmpInitializeRegistryProcess.c)
 *     SmRegistrationInfoFill @ 0x140840B78 (SmRegistrationInfoFill.c)
 *     ObInitServerSilo @ 0x14085264C (ObInitServerSilo.c)
 *     IopInvalidateVolumesForDevice @ 0x14087D588 (IopInvalidateVolumesForDevice.c)
 *     DbgkOpenProcessDebugPort @ 0x140933D80 (DbgkOpenProcessDebugPort.c)
 *     DbgkpOpenHandles @ 0x1409345C0 (DbgkpOpenHandles.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     ObOpenObjectByPointerWithTag @ 0x1409790E0 (ObOpenObjectByPointerWithTag.c)
 *     TtmiOpenDefaultTerminal @ 0x1409A80CC (TtmiOpenDefaultTerminal.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5C34 (SmKmFileInfoDuplicate.c)
 *     EtwpCapturePreviousRegistryData @ 0x1409F1544 (EtwpCapturePreviousRegistryData.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A44A2C (MiOpenSpecialPurposeMemory.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140266820 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14033E060 (ObReferenceObjectByPointerWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
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
  POBJECT_TYPE v11; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rcx
  NTSTATUS v14; // ebx
  NTSTATUS v15; // edi
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-1E8h] BYREF
  _QWORD v17[20]; // [rsp+80h] [rbp-1C8h] BYREF
  _QWORD v18[28]; // [rsp+120h] [rbp-128h] BYREF

  memset(v18, 0, sizeof(v18));
  memset(v17, 0, sizeof(v17));
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
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
        v14 = SepCreateAccessStateFromSubjectContext(
                &SubjectContext,
                v17,
                v18,
                DesiredAccess,
                &v11->TypeInfo.GenericMapping.GenericRead);
        if ( v14 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          return v14;
        }
        PassedAccessState = (PACCESS_STATE)v17;
      }
      v15 = ObpCreateHandle(
              1,
              (char *)Object,
              0,
              (__int64)PassedAccessState,
              0,
              HandleAttributes,
              AccessMode,
              0LL,
              0,
              0LL,
              Handle);
      if ( v15 < 0 )
        ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
      if ( PassedAccessState == (PACCESS_STATE)v17 )
      {
        SepDeleteAccessState((__int64)PassedAccessState);
        SeReleaseSubjectContext(&PassedAccessState->SubjectSecurityContext);
      }
      return v15;
    }
  }
  return result;
}
