/*
 * XREFs of ExRundownCompleted @ 0x140294280
 * Callers:
 *     PfFileInfoNotify @ 0x14028C770 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDeleteAtsDevice @ 0x14051FA30 (IommuDeleteAtsDevice.c)
 *     IommuDevicePowerChange @ 0x14051FAB0 (IommuDevicePowerChange.c)
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140521AB8 (IommupUnmapDeviceInternal.c)
 *     BgkpDisableConsole @ 0x14054CBAC (BgkpDisableConsole.c)
 *     PspIoRateEntryInitialize @ 0x1406F80C8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     PsUnregisterSyscallProvider @ 0x1409B18B0 (PsUnregisterSyscallProvider.c)
 *     SmcStoreDelete @ 0x1409D86C8 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x140B619EC (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x140B70C24 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
