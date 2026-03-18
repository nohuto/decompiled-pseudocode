/*
 * XREFs of RtlWriteRegistryValue @ 0x1407D4860
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140582580 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405AA280 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x1405EC590 (DifRtlWriteRegistryValueWrapper.c)
 *     EtwpEnumerateKeyProviders @ 0x14080B5F4 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14080B754 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083DAD8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14083DD38 (EtwStartAutoLogger.c)
 *     RtlSetActiveTimeBias @ 0x140840F74 (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140841710 (RtlpUpdateDynamicTimeZones.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085FD20 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BD87C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DDA60 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExpSetTimeZoneInformation @ 0x1409F76DC (ExpSetTimeZoneInformation.c)
 *     WheapCommitPolicy @ 0x140A096F8 (WheapCommitPolicy.c)
 *     IopStoreBootDriveLetter @ 0x140B3CE40 (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x1406C6270 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, 1, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, ValueName);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
