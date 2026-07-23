/*
 * XREFs of TtmpCalloutCreateWatchdog @ 0x1408FCAE0
 * Callers:
 *     TtmpStartCallout @ 0x1408FD47C (TtmpStartCallout.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
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
