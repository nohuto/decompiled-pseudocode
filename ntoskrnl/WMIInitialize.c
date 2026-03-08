/*
 * XREFs of WMIInitialize @ 0x140B54790
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14081AF70 (IoCreateDriver.c)
 *     WmipInitializeAllocs @ 0x140B53B40 (WmipInitializeAllocs.c)
 *     WmipInitializeRegistration @ 0x140B544A8 (WmipInitializeRegistration.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B54540 (WmipGetSMBiosFromLoaderBlock.c)
 *     WmipRegisterFirmwareProviders @ 0x140B546C8 (WmipRegisterFirmwareProviders.c)
 */

char __fastcall WMIInitialize(int a1, __int64 a2)
{
  char v2; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( a1 )
  {
    WmipInitializeRegistration(a1);
    return 1;
  }
  WmipInitializeAllocs();
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders();
    return 1;
  }
  return v2;
}
