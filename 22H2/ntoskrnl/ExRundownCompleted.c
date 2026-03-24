/*
 * XREFs of ExRundownCompleted @ 0x1402517A0
 * Callers:
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDevicePowerChange @ 0x1404D7D90 (IommuDevicePowerChange.c)
 *     BgkpDisableConsole @ 0x1404FF62C (BgkpDisableConsole.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     PspIoRateEntryInitialize @ 0x14071FC24 (PspIoRateEntryInitialize.c)
 *     CmpWaitForShutdownRundownRelease @ 0x140875C58 (CmpWaitForShutdownRundownRelease.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x14087DC84 (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 *     SmcStoreDelete @ 0x14092DE00 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409474A8 (EtwpCoverageSamplerStop.c)
 *     EtwpInitializeCoverageSampler @ 0x140A41F18 (EtwpInitializeCoverageSampler.c)
 *     PfInitializeSuperfetch @ 0x140A6A76C (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
