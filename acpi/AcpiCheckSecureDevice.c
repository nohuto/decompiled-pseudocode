/*
 * XREFs of AcpiCheckSecureDevice @ 0x1C0094C08
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 *     AcpiSdevIdentifierInterface @ 0x1C0094D70 (AcpiSdevIdentifierInterface.c)
 * Callees:
 *     AcpiIsDeviceSecure @ 0x1C0094C68 (AcpiIsDeviceSecure.c)
 */

bool __fastcall AcpiCheckSecureDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1008);
  if ( (v1 & 0x80000000) == 0 )
  {
    if ( (unsigned __int8)AcpiIsDeviceSecure() )
      *(_QWORD *)(a1 + 1008) |= 0x2000000000uLL;
    *(_QWORD *)(a1 + 1008) |= 0x80000000uLL;
    v1 = *(_QWORD *)(a1 + 1008);
  }
  return (v1 & 0x2000000000LL) != 0;
}
