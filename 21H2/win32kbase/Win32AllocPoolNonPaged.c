/*
 * XREFs of Win32AllocPoolNonPaged @ 0x1C005B490
 * Callers:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 *     CreateKernelEvent @ 0x1C0057E20 (CreateKernelEvent.c)
 *     RIMHidGetCaps @ 0x1C0057E7C (RIMHidGetCaps.c)
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0058088 (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z.c)
 *     ?vInit@W32PIDLOCK@@QEAAXXZ @ 0x1C005A66C (-vInit@W32PIDLOCK@@QEAAXXZ.c)
 *     ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C005AF70 (-Initialize@CChannel@DirectComposition@@MEAAJXZ.c)
 *     ?OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005B100 (-OnProcessCreation@CConnection@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C005B188 (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     GreCreateSemaphoreInternal @ 0x1C005B364 (GreCreateSemaphoreInternal.c)
 *     HmgCreate @ 0x1C006B24C (HmgCreate.c)
 *     GreCreateFastMutex @ 0x1C006BDDC (GreCreateFastMutex.c)
 *     QueuePowerRequest @ 0x1C0076700 (QueuePowerRequest.c)
 *     EngAllocMem @ 0x1C007A3E0 (EngAllocMem.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C0088530 (RIMRegisterForInputWithCallbacks.c)
 *     RIMGetKbdExId @ 0x1C00A6194 (RIMGetKbdExId.c)
 *     ?Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ @ 0x1C00AD368 (-Initialize@CMaterialPropertiesTable@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1C00AD428 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C00AD500 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C00AD5F8 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     ?Initialize@CChannelGroup@DirectComposition@@QEAAJXZ @ 0x1C00AD7C4 (-Initialize@CChannelGroup@DirectComposition@@QEAAJXZ.c)
 *     CreateKernelSemaphore @ 0x1C00AFB90 (CreateKernelSemaphore.c)
 *     ?Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z @ 0x1C00B0320 (-Initialize@LegacyInputDispatcher@@QEAAJD_NIIPEAULegacyDispatcherObject@@@Z.c)
 *     UserPostNKAPC @ 0x1C00BF970 (UserPostNKAPC.c)
 *     ?vTryDeleteSurface@SURFREF@@QEAAXXZ @ 0x1C00C9770 (-vTryDeleteSurface@SURFREF@@QEAAXXZ.c)
 *     UserPostNKAPCBuffer @ 0x1C01151B0 (UserPostNKAPCBuffer.c)
 *     CreateKernelTimer @ 0x1C01175D0 (CreateKernelTimer.c)
 *     xxxRemoteConnect @ 0x1C01177E0 (xxxRemoteConnect.c)
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015DE78 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetProductString @ 0x1C015E6A4 (RIMGetProductString.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0161020 (RIMAllocateHidConfigDesc.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0162284 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMSetDeviceIdleTimeout @ 0x1C01625E0 (RIMSetDeviceIdleTimeout.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162D0C (RIMVirtCreateHidDesc.c)
 *     ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A4610 (-PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z.c)
 *     InitializePowerRequestList @ 0x1C0298790 (InitializePowerRequestList.c)
 * Callees:
 *     IsWin32AllocPoolImplSupported @ 0x1C002AED4 (IsWin32AllocPoolImplSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocPoolNonPaged(__int64 a1, unsigned int a2)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = IsWin32AllocPoolImplSupported();
  v5 = 0LL;
  if ( v4 < 0 )
    return 0LL;
  if ( qword_1C0257D18 )
    return qword_1C0257D18(544LL, a1, a2);
  return v5;
}
