/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C005C490
 * Callers:
 *     RIMGetKbdExId @ 0x1C0005D3C (RIMGetKbdExId.c)
 *     RIMCreateDev @ 0x1C0055530 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0057F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 *     CreateKernelEvent @ 0x1C0058E20 (CreateKernelEvent.c)
 *     RIMHidGetCaps @ 0x1C0058E7C (RIMHidGetCaps.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0059088 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C005B66C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005BF70 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005C100 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005C188 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C005C364 (GreCreateSemaphoreInternal.c)
 *     HmgCreate @ 0x1C006BCFC (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C006C88C (GreCreateFastMutex.c)
 *     QueuePowerRequest @ 0x1C0077DE0 (QueuePowerRequest.c)
 *     EngAllocMem @ 0x1C007BAC0 (EngAllocMem.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00AD868 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00AD928 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00ADA00 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00ADAF8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00ADCC4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     CreateKernelSemaphore @ 0x1C00AFED0 (CreateKernelSemaphore.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00B0660 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     UserPostNKAPC @ 0x1C00BFCC0 (UserPostNKAPC.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00C9A60 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     UserPostNKAPCBuffer @ 0x1C0115480 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C01178A0 (CreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C0117AB0 (xxxRemoteConnect.c)
 *     RIMVirtCreateDev @ 0x1C014FC98 (RIMVirtCreateDev.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DDA8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E5D4 (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0160F50 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01621B4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C0162510 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162838 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162C3C (RIMVirtCreateHidDesc.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A4540 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C0297790 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C002C344 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = IsWin32AllocPoolImplSupported();
  v5 = 0LL;
  if ( v4 < 0 )
    return 0LL;
  if ( qword_1C0256D18 )
    return qword_1C0256D18(544LL, a1, a2);
  return v5;
}
