/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x1402D37D0
 * Callers:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402BBA40 (ExAllocatePoolMm.c)
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     RtlIsUntrustedObject @ 0x1402FA190 (RtlIsUntrustedObject.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402FFEE8 (RtlInsertDynamicFunctionTable.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14030F25C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     PiControlAllocateBufferForUserModeCaller @ 0x14031BAD0 (PiControlAllocateBufferForUserModeCaller.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140347F68 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     PopCaptureReasonContext @ 0x14034C910 (PopCaptureReasonContext.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x1403CA82C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     CmpAllocatePoolWithQuotaTag @ 0x1404ECD50 (CmpAllocatePoolWithQuotaTag.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1404EFDD0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1404EFE00 (FsRtlAllocatePoolWithQuotaTag.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x140506A4C (IopVerifierExAllocatePoolWithQuota_3.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405086DC (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14050889C (IopVerifierExAllocatePoolWithQuota_5.c)
 *     PsSetCpuQuotaInformation @ 0x140580F48 (PsSetCpuQuotaInformation.c)
 *     ExAllocatePoolWithQuota @ 0x1405B3520 (ExAllocatePoolWithQuota.c)
 *     ExGetWakeTimerList @ 0x1405B6088 (ExGetWakeTimerList.c)
 *     NtQueueApcThreadEx2 @ 0x1405CF9B0 (NtQueueApcThreadEx2.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     PspCaptureUserProcessParameters @ 0x140606D2C (PspCaptureUserProcessParameters.c)
 *     PspBuildCreateProcessContext @ 0x1406090A4 (PspBuildCreateProcessContext.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060D350 (FsRtlAllocateExtraCreateParameterList.c)
 *     ExpWnfCreateNameInstance @ 0x14060DE94 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140610198 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140610910 (ExpWnfWriteStateData.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140689294 (RtlpProcessIFEOKeyFilter.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14069061C (ExpGetSystemFirmwareTableInformation.c)
 *     PspReadIFEOPerfOptions @ 0x140691CC0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140691EB0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14069434C (RtlAcquirePrivilege.c)
 *     NtRegisterThreadTerminatePort @ 0x1406A1120 (NtRegisterThreadTerminatePort.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1406AE4B0 (PiControlMakeUserModeCallersCopy.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1406BD480 (FsRtlAllocateExtraCreateParameter.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     NtQueryDirectoryObject @ 0x1406DA180 (NtQueryDirectoryObject.c)
 *     CmpAllocatePostBlock @ 0x1406DC750 (CmpAllocatePostBlock.c)
 *     CmpNotifyChangeKey @ 0x1406DC890 (CmpNotifyChangeKey.c)
 *     CmpNameFromAttributes @ 0x1406E80BC (CmpNameFromAttributes.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070250C (IopAllocateMiniCompletionPacket.c)
 *     RtlQueryModuleInformation @ 0x140788090 (RtlQueryModuleInformation.c)
 *     PspIsDfssEnabled @ 0x1407A90D0 (PspIsDfssEnabled.c)
 *     CmpSaveKeyByFileCopy @ 0x14087D8F0 (CmpSaveKeyByFileCopy.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140882D90 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     DbgkpQueueMessage @ 0x140885568 (DbgkpQueueMessage.c)
 *     DbgkRegisterErrorPort @ 0x140886A94 (DbgkRegisterErrorPort.c)
 *     KeEnableProfiling @ 0x1408BC02C (KeEnableProfiling.c)
 *     PsCreateVsmEnclave @ 0x14090D938 (PsCreateVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14090DFA0 (PsInitializeVsmEnclave.c)
 *     PspPrepareEnclaveThreadWait @ 0x14090E460 (PspPrepareEnclaveThreadWait.c)
 *     PspVsmEnclaveHashAllocator @ 0x14090E790 (PspVsmEnclaveHashAllocator.c)
 *     RtlAddResourceAttributeAce @ 0x1409125C0 (RtlAddResourceAttributeAce.c)
 *     RtlAllocateAndInitializeSidEx @ 0x14091330C (RtlAllocateAndInitializeSidEx.c)
 *     RtlGetAppContainerParent @ 0x140913810 (RtlGetAppContainerParent.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1409143A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     NtQuerySecurityPolicy @ 0x14091BB90 (NtQuerySecurityPolicy.c)
 *     ExpGetDeviceDataInformation @ 0x14094A1C8 (ExpGetDeviceDataInformation.c)
 *     ExpQueryElamCertInfo @ 0x14094A928 (ExpQueryElamCertInfo.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14094B060 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x14094B6D0 (ExpStringCapture.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D4E80 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierPortExAllocatePoolWithQuotaTag @ 0x1409E4C40 (VerifierPortExAllocatePoolWithQuotaTag.c)
 * Callees:
 *     ExGetHeapFromVA @ 0x14027B2FC (ExGetHeapFromVA.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     PspExpandQuota @ 0x1403188B8 (PspExpandQuota.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD64C (ExpHpIsSpecialPoolHeap.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  unsigned __int32 v3; // r9d
  __int32 v4; // r13d
  PEPROCESS Process; // rdi
  POOL_TYPE v6; // ebp
  ULONG_PTR PoolWithTag; // rax
  char *v8; // r15
  __int16 v9; // cx
  char *v10; // rbx
  __int64 v11; // rdx
  char *v12; // r8
  __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rbp
  unsigned __int64 *v16; // r14
  char v17; // r8
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  bool v21; // zf
  signed __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  signed __int64 BugCheckParameter4; // rbx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int64 HeapFromVA; // rax
  NTSTATUS v33; // esi
  signed __int32 v34[8]; // [rsp+0h] [rbp-78h] BYREF
  unsigned __int64 v35; // [rsp+30h] [rbp-48h] BYREF
  __int64 v36; // [rsp+38h] [rbp-40h]
  char v37; // [rsp+80h] [rbp+8h]
  char *v39; // [rsp+98h] [rbp+20h]

  v3 = PoolType & 0xFFFFFFF7;
  v4 = PoolType & 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (PoolType & 8) == 0 )
    v3 = PoolType;
  v6 = v3 + 8;
  if ( Process == PsInitialSystemProcess )
    v6 = v3;
  PoolWithTag = (ULONG_PTR)ExAllocatePoolWithTag(v6, NumberOfBytes, Tag);
  v8 = (char *)PoolWithTag;
  if ( (PoolWithTag & 0xFFF) == 0 )
  {
    if ( !PoolWithTag && !v4 )
      RtlRaiseStatus(-1073741670);
    return v8;
  }
  if ( ExpSpecialAllocations )
  {
    HeapFromVA = ExGetHeapFromVA(PoolWithTag);
    if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
      return v8;
  }
  if ( (v6 & 8) == 0 )
    return v8;
  v9 = *((_WORD *)v8 - 7);
  v10 = v8 - 16;
  v11 = ExpPoolQuotaCookie;
  v12 = 0LL;
  v13 = (unsigned __int8)v9;
  v39 = 0LL;
  *((_QWORD *)v8 - 1) = (unsigned __int64)(v8 - 16) ^ ExpPoolQuotaCookie;
  if ( (v9 & 0x400) != 0 )
  {
    v12 = &v10[-16 * (unsigned __int8)*(_WORD *)v10];
    v39 = v12;
    v13 = (unsigned __int8)*((_WORD *)v12 + 1);
    *((_QWORD *)v12 + 1) = (unsigned __int64)v12 ^ v11;
  }
  v14 = 16 * v13;
  if ( Process == PsInitialSystemProcess )
  {
LABEL_21:
    v26 = ExpPoolQuotaCookie;
    *((_QWORD *)v10 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v10 ^ ExpPoolQuotaCookie;
    if ( v12 )
      *((_QWORD *)v12 + 1) = (unsigned __int64)Process ^ (unsigned __int64)v12 ^ v26;
    if ( ObpTraceFlags )
      ObpPushStackInfo((_DWORD)Process - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)&Process[-1].EndPadding[2]);
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Process, 0x10uLL, BugCheckParameter4);
    return v8;
  }
  v15 = v6 & 1;
  v16 = (unsigned __int64 *)(Process[1].AffinityPadding[7] + ((unsigned __int64)(unsigned int)v15 << 7));
  v17 = PspResourceFlags[8 * v15];
  v37 = v17;
  v36 = 8 * v15;
  _m_prefetchw(v16);
  v18 = *v16;
  _InterlockedOr(v34, 0);
LABEL_12:
  v19 = v16[8];
LABEL_13:
  v35 = v19;
  while ( 1 )
  {
    v20 = v18 + v14;
    if ( v18 + v14 < v18 )
      break;
    if ( v20 <= v19 )
    {
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v16, v20, v18);
      v21 = v18 == v22;
      v18 = v22;
      if ( !v21 )
        goto LABEL_12;
      _m_prefetchw(v16 + 1);
      v23 = v16[1];
      if ( v20 > v23 )
      {
        do
        {
          v30 = v23;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 1, v20, v23);
        }
        while ( v23 != v30 && v20 > v23 );
      }
      if ( (v17 & 4) != 0 )
      {
        v24 = v14 + _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].ThreadListHead.Blink + v15, v14);
        _m_prefetchw(&Process[1].DeepFreezeStartTime + v15);
        v25 = *(&Process[1].DeepFreezeStartTime + v15);
        if ( v24 > v25 )
        {
          do
          {
            v29 = v25;
            v25 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&Process[1].DeepFreezeStartTime + v15,
                    v24,
                    v25);
          }
          while ( v25 != v29 && v24 > v25 );
        }
      }
      goto LABEL_20;
    }
    if ( (v17 & 1) == 0 || !v16[10] )
      break;
    v31 = _InterlockedExchange64((volatile __int64 *)v16 + 9, 0LL);
    if ( v31 )
    {
      v19 = v31 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, v31);
      goto LABEL_13;
    }
    if ( !(unsigned __int8)PspExpandQuota(v15, (_DWORD)v16, v18, v14, (__int64)&v35) )
      break;
    v19 = v35;
    v17 = v37;
  }
  v33 = *(_DWORD *)&PspResourceFlags[v36 + 4];
  if ( v33 >= 0 )
  {
LABEL_20:
    v12 = v39;
    goto LABEL_21;
  }
  ExFreePoolWithTag(v8, Tag);
  if ( !v4 )
    RtlRaiseStatus(v33);
  return 0LL;
}
