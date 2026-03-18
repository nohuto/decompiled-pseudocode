/*
 * XREFs of WMIInitialize @ 0x140AFFEF4
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140AFE7A0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     WmipInitializeRegistration @ 0x140B231D8 (WmipInitializeRegistration.c)
 *     WmipInitializeAllocs @ 0x140B30050 (WmipInitializeAllocs.c)
 *     WmipRegisterFirmwareProviders @ 0x140B30770 (WmipRegisterFirmwareProviders.c)
 *     WmipGetSMBiosFromLoaderBlock @ 0x140B30E74 (WmipGetSMBiosFromLoaderBlock.c)
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
  if ( IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(void **, _QWORD))WmipDriverEntry) >= 0 )
  {
    WmipGetSMBiosFromLoaderBlock(a2);
    WmipRegisterFirmwareProviders(v5, v4);
    return 1;
  }
  return v2;
}
