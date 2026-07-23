/*
 * XREFs of RtlEnterCriticalSection @ 0x18002FAA0
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180001BC0 (RtlGetUserInfoHeap.c)
 *     RtlSetUserValueHeap @ 0x180001F60 (RtlSetUserValueHeap.c)
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x18000E2A8 (RtlpMoveHeapBetweenLists.c)
 *     LdrpQueueWork @ 0x18000F420 (LdrpQueueWork.c)
 *     RtlQueryEnvironmentVariable @ 0x1800157E0 (RtlQueryEnvironmentVariable.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18001F3EC (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpFreeUserBlock @ 0x180020DDC (RtlpFreeUserBlock.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180023720 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpSetProcUserMachineLangList @ 0x180038514 (RtlpSetProcUserMachineLangList.c)
 *     LdrpDynamicShimModule @ 0x18003D9A4 (LdrpDynamicShimModule.c)
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpSendDllNotifications @ 0x18003DD70 (LdrpSendDllNotifications.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6C4 (LdrpAcquireLoaderLock.c)
 *     RtlpActivateLowFragmentationHeap @ 0x180044A7C (RtlpActivateLowFragmentationHeap.c)
 *     EtwpAllocateFreeBuffers @ 0x180048A90 (EtwpAllocateFreeBuffers.c)
 *     RtlCreateProcessParametersInternal @ 0x18004A9F0 (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x18004B220 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18004B430 (RtlSetEnvironmentVar.c)
 *     EtwpFlushActiveBuffers @ 0x18004C7E4 (EtwpFlushActiveBuffers.c)
 *     EtwpSwitchBuffer @ 0x180051284 (EtwpSwitchBuffer.c)
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     RtlSetCurrentDirectory_U @ 0x18005E530 (RtlSetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18005E870 (RtlpReferenceCurrentDirectory.c)
 *     LdrpDropLastInProgressCount @ 0x18005EE7C (LdrpDropLastInProgressCount.c)
 *     RtlExitUserProcess @ 0x18005EED0 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x18005F650 (RtlValidateHeap.c)
 *     RtlLockHeap @ 0x18005F960 (RtlLockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005FEC4 (LdrpDrainWorkQueue.c)
 *     LdrpWorkCallback @ 0x180060060 (LdrpWorkCallback.c)
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 *     LdrpCheckForRetryLoading @ 0x1800612A8 (LdrpCheckForRetryLoading.c)
 *     RtlSleepConditionVariableCS @ 0x180065760 (RtlSleepConditionVariableCS.c)
 *     LdrpUnloadNode @ 0x18006B4F8 (LdrpUnloadNode.c)
 *     LdrpLoadShimEngine @ 0x18006C8F4 (LdrpLoadShimEngine.c)
 *     RtlpComputePath @ 0x18006D7D0 (RtlpComputePath.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006FD10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlpSetProcMergedLangList @ 0x18007093C (RtlpSetProcMergedLangList.c)
 *     RtlpAffinitizeSegmentInfoForBucket @ 0x180072754 (RtlpAffinitizeSegmentInfoForBucket.c)
 *     LdrAddLoadAsDataTable @ 0x180074110 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800748D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlSetHeapInformation @ 0x180074DB0 (RtlSetHeapInformation.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x180074EC0 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x1800750CC (RtlpQueryExtendedHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007529C (RtlpEnumProcessHeaps.c)
 *     RtlAcquirePebLock @ 0x18007AA90 (RtlAcquirePebLock.c)
 *     RtlCreateTagHeap @ 0x18007DA40 (RtlCreateTagHeap.c)
 *     RtlSetEnvironmentStrings @ 0x1800831C0 (RtlSetEnvironmentStrings.c)
 *     LdrpCorInitialize @ 0x180083294 (LdrpCorInitialize.c)
 *     AVrfDllLoadNotification @ 0x180084CCC (AVrfDllLoadNotification.c)
 *     LdrRegisterDllNotification @ 0x180084F00 (LdrRegisterDllNotification.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008971C (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089D50 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008AB10 (RtlGetProcessPreferredUILanguages.c)
 *     RtlSetCurrentEnvironment @ 0x18008C1A0 (RtlSetCurrentEnvironment.c)
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CD18C (LdrpCreateSoftwareEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD27C (LdrpDeleteEnclave.c)
 *     LdrUnregisterDllNotification @ 0x1800CE570 (LdrUnregisterDllNotification.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C20 (RtlQueryProcessHeapInformation.c)
 *     AVrfDllUnloadNotification @ 0x1800D9714 (AVrfDllUnloadNotification.c)
 *     AVrfInternalHeapFreeNotification @ 0x1800DA240 (AVrfInternalHeapFreeNotification.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DF41C (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpEnsureLiveDeadListsInitialized @ 0x1800DF7B0 (RtlpEnsureLiveDeadListsInitialized.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800DF848 (RtlpMoveActCtxToFreeList.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DF974 (RtlpPlaceActivationContextOnLiveList.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFB00 (RtlpCleanupRegistryKeys.c)
 *     RtlCompactHeap @ 0x1800F2280 (RtlCompactHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F2724 (RtlLockHeapManagerForCloning.c)
 *     RtlQueryTagHeap @ 0x1800F2960 (RtlQueryTagHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800F2B38 (RtlSetHeapDebuggingInformation.c)
 *     RtlSetUserFlagsHeap @ 0x1800F2D00 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x1800F6390 (RtlZeroHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1800F6BD8 (RtlpSetupExtendedBlock.c)
 *     RtlDebugAllocateHeap @ 0x1800F8870 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x1800F8C2C (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x1800F9074 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F927C (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x1800F9570 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x1800F9714 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9860 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1800F9DE4 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1800F9FB0 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1800FA144 (RtlDebugSizeHeap.c)
 *     RtlDebugZeroHeap @ 0x1800FA358 (RtlDebugZeroHeap.c)
 *     RtlTraceDatabaseAdd @ 0x1801026D0 (RtlTraceDatabaseAdd.c)
 *     RtlTraceDatabaseEnumerate @ 0x180102910 (RtlTraceDatabaseEnumerate.c)
 *     RtlTraceDatabaseFind @ 0x1801029E0 (RtlTraceDatabaseFind.c)
 *     RtlTraceDatabaseLock @ 0x180102A60 (RtlTraceDatabaseLock.c)
 *     RtlTraceDatabaseValidate @ 0x180102AB0 (RtlTraceDatabaseValidate.c)
 *     EtwpBufferingModeFlush @ 0x180110AE0 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlpEnterCriticalSectionContended @ 0x18002FAF0 (RtlpEnterCriticalSectionContended.c)
 */

NTSTATUS __cdecl RtlEnterCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  void *UniqueThread; // rax
  NTSTATUS result; // eax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset(&CriticalSection->LockCount, 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    CriticalSection->OwningThread = UniqueThread;
    result = 0;
    CriticalSection->RecursionCount = 1;
  }
  else if ( CriticalSection->OwningThread == UniqueThread )
  {
    ++CriticalSection->RecursionCount;
    return 0;
  }
  else
  {
    return RtlpEnterCriticalSectionContended();
  }
  return result;
}
