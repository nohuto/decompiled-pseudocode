/*
 * XREFs of MiInitializeColors @ 0x140A44524
 * Callers:
 *     MiCreatePfnDatabase @ 0x140A42AEC (MiCreatePfnDatabase.c)
 * Callees:
 *     MiInitializeCacheSizes @ 0x140A445AC (MiInitializeCacheSizes.c)
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  unsigned int v1; // eax
  unsigned __int8 v2; // cl
  unsigned int v3; // eax
  __int64 result; // rax

  MiInitializeCacheSizes();
  _BitScanReverse(&v0, dword_140C4DEFC);
  LOBYTE(v1) = 1;
  byte_140C4DE8D = v0;
  v2 = 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
    {
      v1 = (unsigned __int8)(2 * v1);
      MiChannelMaximumPowerOf2 = v1;
      v2 = v1;
    }
    while ( v1 < MmNumberOfChannels );
  }
  MiChannelMaximumPowerOf2Mask = v2 - 1;
  _BitScanReverse(&v3, v2);
  byte_140C4DE8C = v3 + byte_140C4DE8D;
  dword_140C4DE80 = (1 << (v3 + byte_140C4DE8D)) - 1;
  result = (unsigned int)dword_140C4DEF8;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140C4DEF8;
  return result;
}
