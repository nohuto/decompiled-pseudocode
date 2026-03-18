/*
 * XREFs of ExRundownCompleted @ 0x140208880
 * Callers:
 *     PfFileInfoNotify @ 0x1402DF520 (PfFileInfoNotify.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     IommuDeleteAtsDevice @ 0x140521F60 (IommuDeleteAtsDevice.c)
 *     IommuDevicePowerChange @ 0x140521FE0 (IommuDevicePowerChange.c)
 *     IommupMapDeviceInternal @ 0x140523C28 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140523FE8 (IommupUnmapDeviceInternal.c)
 *     BgkpDisableConsole @ 0x14054F04C (BgkpDisableConsole.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x14068AD74 (PspRundownSingleProcess.c)
 *     HalpIommuCreateDevice @ 0x14082AB98 (HalpIommuCreateDevice.c)
 *     PsUnregisterSyscallProvider @ 0x1409B4900 (PsUnregisterSyscallProvider.c)
 *     SmcStoreDelete @ 0x1409DB568 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1409F3774 (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x140B65330 (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74D28 (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
