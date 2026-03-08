/*
 * XREFs of HUBMISC_ConvertUsbDeviceIdsToString @ 0x1C0033EEC
 * Callers:
 *     HUBFDO_QueryHubErrataFlags @ 0x1C007C7B4 (HUBFDO_QueryHubErrataFlags.c)
 *     HUBMISC_QueryAndCacheRegistryValuesForDevice @ 0x1C0083100 (HUBMISC_QueryAndCacheRegistryValuesForDevice.c)
 *     HUBREG_AssignUsbflagsValueForDevice @ 0x1C00842FC (HUBREG_AssignUsbflagsValueForDevice.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00014E0 (RtlStringCchPrintfA.c)
 */

NTSTATUS __fastcall HUBMISC_ConvertUsbDeviceIdsToString(unsigned __int16 *a1, char *a2, char *a3, char *a4)
{
  RtlStringCchPrintfA(a2, 5uLL, "%04X", a1[4]);
  RtlStringCchPrintfA(a3, 5uLL, "%04X", a1[5]);
  return RtlStringCchPrintfA(a4, 5uLL, "%04X", a1[6]);
}
