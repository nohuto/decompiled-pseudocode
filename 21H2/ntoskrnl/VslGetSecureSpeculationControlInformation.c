/*
 * XREFs of VslGetSecureSpeculationControlInformation @ 0x1403DF020
 * Callers:
 *     KeQuerySecureSpeculationInformation @ 0x1405711E4 (KeQuerySecureSpeculationInformation.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
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
