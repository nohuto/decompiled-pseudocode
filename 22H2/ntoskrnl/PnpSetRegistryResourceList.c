/*
 * XREFs of PnpSetRegistryResourceList @ 0x1409585AC
 * Callers:
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14041B2A0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x14041C240 (ZwDeleteValueKey.c)
 *     PnpDetermineResourceListSize @ 0x1407906DC (PnpDetermineResourceListSize.c)
 */

NTSTATUS __fastcall PnpSetRegistryResourceList(HANDLE KeyHandle, __int64 a2, _DWORD *a3)
{
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"BootConfig");
  if ( !a3 )
    return ZwDeleteValueKey(KeyHandle, &DestinationString);
  DataSize = PnpDetermineResourceListSize(a3);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 8u, a3, DataSize);
}
