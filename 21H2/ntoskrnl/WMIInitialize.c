/*
 * XREFs of WMIInitialize @ 0x140A3DB54
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140A3FB60 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x1407A5100 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140A6B038 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140A74064 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140A74644 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140A74D6C (WmipGetSMBiosFromLoaderBlock.c)
 */

char __fastcall WMIInitialize(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  if ( (_DWORD)a1 )
  {
    WmipInitializeRegistration(a1, a2);
    return 1;
  }
  WmipInitializeAllocs(a1, a2);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\WMIxWDM");
  if ( IoCreateDriver(&DestinationString, (_DMA_OPERATIONS *)WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
