/*
 * XREFs of WMIInitialize @ 0x140B3CDD0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x140812780 (IoCreateDriver.c)
 *     WmipInitializeAllocs @ 0x140B3C184 (WmipInitializeAllocs.c)
 *     WmipInitializeRegistration @ 0x140B3CAE8 (WmipInitializeRegistration.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B3CB80 (WmipGetSMBiosFromLoaderBlock.c)
 *     WmipRegisterFirmwareProviders @ 0x140B3CD08 (WmipRegisterFirmwareProviders.c)
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
