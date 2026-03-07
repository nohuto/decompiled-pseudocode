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
