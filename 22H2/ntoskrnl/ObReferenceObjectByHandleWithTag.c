/*
 * XREFs of ObReferenceObjectByHandleWithTag @ 0x14063E2A0
 * Callers:
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     PopCreatePowerThread @ 0x1403A4B38 (PopCreatePowerThread.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404EE598 (DbgkCaptureLiveKernelDump.c)
 *     MiReferenceAweHandle @ 0x14054DB8C (MiReferenceAweHandle.c)
 *     NtSignalAndWaitForSingleObject @ 0x1405648B0 (NtSignalAndWaitForSingleObject.c)
 *     PspTimerDelayProcess @ 0x1405826B0 (PspTimerDelayProcess.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1405D268C (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405D29EC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x1405F8E40 (NtProtectVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtSetInformationJobObject @ 0x140614660 (NtSetInformationJobObject.c)
 *     NtUnmapViewOfSectionEx @ 0x14061E440 (NtUnmapViewOfSectionEx.c)
 *     MmQueryVirtualMemory @ 0x14061ED50 (MmQueryVirtualMemory.c)
 *     PspQueryQuotaLimits @ 0x14062069C (PspQueryQuotaLimits.c)
 *     NtQueryInformationProcess @ 0x1406216C0 (NtQueryInformationProcess.c)
 *     MiMapViewOfSectionCommon @ 0x140638690 (MiMapViewOfSectionCommon.c)
 *     NtResetWriteWatch @ 0x14063A770 (NtResetWriteWatch.c)
 *     ObWaitForSingleObject @ 0x14063DFD0 (ObWaitForSingleObject.c)
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 *     NtFlushVirtualMemory @ 0x140668E50 (NtFlushVirtualMemory.c)
 *     PopEtEnergyTrackerQuery @ 0x1406732D8 (PopEtEnergyTrackerQuery.c)
 *     MiLockUnlockCommon @ 0x14067DB7C (MiLockUnlockCommon.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     NtSuspendThread @ 0x14069ECF0 (NtSuspendThread.c)
 *     NtResumeThread @ 0x1406C59E0 (NtResumeThread.c)
 *     PopPowerRequestActionInfo @ 0x1406F4F38 (PopPowerRequestActionInfo.c)
 *     NtSetInformationVirtualMemory @ 0x1406FA310 (NtSetInformationVirtualMemory.c)
 *     NtCreateWorkerFactory @ 0x140701710 (NtCreateWorkerFactory.c)
 *     NtDuplicateObject @ 0x1407025F0 (NtDuplicateObject.c)
 *     NtTerminateProcess @ 0x140707430 (NtTerminateProcess.c)
 *     NtTerminateThread @ 0x140707A50 (NtTerminateThread.c)
 *     NtIsProcessInJob @ 0x14071C500 (NtIsProcessInJob.c)
 *     NtAssignProcessToJobObject @ 0x14071E680 (NtAssignProcessToJobObject.c)
 *     NtAcquireProcessActivityReference @ 0x1407316E0 (NtAcquireProcessActivityReference.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     PspAssignPrimaryToken @ 0x1407BC200 (PspAssignPrimaryToken.c)
 *     PopGetPolicyDeviceObject @ 0x1407C4CB4 (PopGetPolicyDeviceObject.c)
 *     PspCreateProcess @ 0x1407CE380 (PspCreateProcess.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408828EC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140882F9C (VrpHandleIoctlModifyFlags.c)
 *     NtDebugActiveProcess @ 0x140885DD0 (NtDebugActiveProcess.c)
 *     NtInitializeEnclave @ 0x1408D41C0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 *     PfpDeprioritizeOldPagesInWs @ 0x1408DF730 (PfpDeprioritizeOldPagesInWs.c)
 *     PfSnAppLaunchScenarioControl @ 0x1408E0910 (PfSnAppLaunchScenarioControl.c)
 *     PspQueryPooledQuotaLimits @ 0x1409080F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409082A0 (PspQueryWorkingSetWatch.c)
 *     PspCreatePicoProcess @ 0x14090BD50 (PspCreatePicoProcess.c)
 *     PspCreatePicoThread @ 0x14090BFA0 (PspCreatePicoThread.c)
 *     NtAlertResumeThread @ 0x14090C5D0 (NtAlertResumeThread.c)
 *     NtResumeProcess @ 0x14090C770 (NtResumeProcess.c)
 *     NtSuspendProcess @ 0x14090C7F0 (NtSuspendProcess.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090C9D4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CA68 (PsIumGetOnDemandDebugChallenge.c)
 *     ExpProfileCreate @ 0x14095A5AC (ExpProfileCreate.c)
 *     NtPssCaptureVaSpaceBulk @ 0x14095BF90 (NtPssCaptureVaSpaceBulk.c)
 *     PopDirectedDripsInitializePhase3 @ 0x140A6DC48 (PopDirectedDripsInitializePhase3.c)
 * Callees:
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall ObReferenceObjectByHandleWithTag(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag,
        PVOID *Object,
        POBJECT_HANDLE_INFORMATION HandleInformation)
{
  return ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, Tag, (__int64)Object, (__int64)HandleInformation, 0LL);
}
