/*
 * XREFs of RtlWriteRegistryValue @ 0x14069EDB0
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x140580050 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x1405A7DD0 (RtlSetPortableOperatingSystem.c)
 *     DifRtlWriteRegistryValueWrapper @ 0x1405EA0E0 (DifRtlWriteRegistryValueWrapper.c)
 *     EtwpEnumerateKeyProviders @ 0x1407FD288 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407FD3E8 (EtwpEnableAutoLoggerProvider.c)
 *     RtlSetActiveTimeBias @ 0x140811B4C (RtlSetActiveTimeBias.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1408122E8 (RtlpUpdateDynamicTimeZones.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14083CA48 (EtwStartAutoLogger.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x14085BE20 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1409BA84C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1409DABC0 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     ExpSetTimeZoneInformation @ 0x1409F484C (ExpSetTimeZoneInformation.c)
 *     WheapCommitPolicy @ 0x140A06A08 (WheapCommitPolicy.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
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
