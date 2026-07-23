/*
 * XREFs of RtlWriteRegistryValue @ 0x140613DB0
 * Callers:
 *     KseKPSOHookDriverTargeted @ 0x1403F3810 (KseKPSOHookDriverTargeted.c)
 *     RtlSetPortableOperatingSystem @ 0x140588BE0 (RtlSetPortableOperatingSystem.c)
 *     ExpWriteSiloTimeZoneMarker @ 0x1405D1C84 (ExpWriteSiloTimeZoneMarker.c)
 *     EtwpEnumerateKeyProviders @ 0x1407946F0 (EtwpEnumerateKeyProviders.c)
 *     EtwpEnableAutoLoggerProvider @ 0x14079484C (EtwpEnableAutoLoggerProvider.c)
 *     EtwpEnumerateAutologgerPath @ 0x14079B524 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x14079B794 (EtwStartAutoLogger.c)
 *     RtlpUpdateDynamicTimeZones @ 0x1407AA35C (RtlpUpdateDynamicTimeZones.c)
 *     RtlSetActiveTimeBias @ 0x1407AA5F4 (RtlSetActiveTimeBias.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407D31C4 (WmipSaveGuidSecurityDescriptor.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x14091526C (RtlpSetTimeZoneInformationWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14092FD28 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WheapCommitPolicy @ 0x14095DF30 (WheapCommitPolicy.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetValueKey @ 0x1403FB180 (ZwSetValueKey.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlWriteRegistryValue(
        ULONG RelativeTo,
        PCWSTR Path,
        PCWSTR ValueName,
        ULONG ValueType,
        PVOID ValueData,
        ULONG ValueLength)
{
  const WCHAR *v7; // rsi
  NTSTATUS result; // eax
  NTSTATUS v10; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  KeyHandle = 0LL;
  v7 = ValueName;
  LOBYTE(ValueName) = 1;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v7);
    v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, ValueType & 0xFFFFFF, ValueData, ValueLength);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v10;
  }
  return result;
}
