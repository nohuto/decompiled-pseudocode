/*
 * XREFs of TtmpCalloutCreateWatchdog @ 0x1409A030C
 * Callers:
 *     TtmpStartCallout @ 0x1409A0CA0 (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 */

NTSTATUS __fastcall TtmpCalloutCreateWatchdog(__int64 a1)
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1 )
    return -1073741670;
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  return NtPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, (PVOID)(a1 + 24), 8u);
}
