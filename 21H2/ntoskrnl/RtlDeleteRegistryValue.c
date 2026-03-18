/*
 * XREFs of RtlDeleteRegistryValue @ 0x1406E8410
 * Callers:
 *     DifRtlDeleteRegistryValueWrapper @ 0x14061B190 (DifRtlDeleteRegistryValueWrapper.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140807EA4 (PerfDiagpSaveActiveDCLLogFileName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __stdcall RtlDeleteRegistryValue(ULONG RelativeTo, PCWSTR Path, PCWSTR ValueName)
{
  const WCHAR *v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+20h] BYREF

  KeyHandle = 0LL;
  v3 = ValueName;
  LOBYTE(ValueName) = 1;
  DestinationString = 0LL;
  result = RtlpGetRegistryHandle(RelativeTo, Path, ValueName, &KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, v3);
    v6 = ZwDeleteValueKey(KeyHandle, &DestinationString);
    if ( (RelativeTo & 0x40000000) == 0 )
      ZwClose(KeyHandle);
    return v6;
  }
  return result;
}
