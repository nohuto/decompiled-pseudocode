/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x140384704
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x140571664 (KeQuerySecureSpeculationInformation.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 VslGetSecureSpeculationControlInformation()
{
  int v0; // ecx
  _DWORD v2[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  if ( HvlQueryVsmConnection(0LL)
    && VslpSpeculationControlsFlags == v0
    && (int)VslpEnterIumSecureMode(2u, 256, 0, (__int64)v2) >= 0 )
  {
    VslpSpeculationControlsFlags = v2[4];
  }
  return (unsigned int)VslpSpeculationControlsFlags;
}
