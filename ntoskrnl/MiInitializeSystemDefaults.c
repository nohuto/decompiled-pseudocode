/*
 * XREFs of MiInitializeSystemDefaults @ 0x140B6F454
 * Callers:
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     strstr @ 0x1403D3650 (strstr.c)
 */

int __fastcall MiInitializeSystemDefaults(__int64 a1)
{
  int v1; // edx
  int result; // eax
  unsigned int v3; // edx

  byte_140C69654 = 4;
  byte_140C65769 = KeGetCurrentPrcb()->CpuVendor == 1;
  LODWORD(MiFlags) = MiFlags ^ (MiFlags ^ (KiKvaShadowMode << 21)) & 0x600000;
  if ( (((unsigned int)MiFlags >> 21) & 3) == 0 )
  {
    word_140C6697C = 1;
    goto LABEL_6;
  }
  switch ( ((unsigned int)MiFlags >> 21) & 3 )
  {
    case 1u:
      word_140C6697C = 0;
      break;
    case 2u:
      word_140C6697C = 256;
      break;
    case 3u:
      word_140C6697C = 1;
      break;
    case 0u:
      goto LABEL_6;
  }
  if ( KiImplementedPhysicalBits > 0 )
  {
    byte_140C02463 = 4;
    qword_140C657C0 = 1LL << ((unsigned __int8)KiImplementedPhysicalBits - 1);
    byte_140C02462 = KiImplementedPhysicalBits - 1;
  }
LABEL_6:
  v1 = MiFlags & 0xFBFFFFFF;
  LODWORD(MiFlags) = MiFlags & 0xF3FFFFFF | 0x8000000;
  if ( KiAccessBitErrata == 1 )
  {
    v3 = v1 | 0xA000000;
  }
  else
  {
    if ( KiAccessBitErrata != 2 )
      goto LABEL_8;
    v3 = v1 & 0xF3FFFFFF;
  }
  LODWORD(MiFlags) = v3;
LABEL_8:
  if ( strstr(*(const char **)(a1 + 216), "NOACCESSBITREPLACEMENT") )
    LODWORD(MiFlags) = MiFlags & 0xF3FFFFFF;
  result = MiFlags;
  if ( (((unsigned int)MiFlags >> 26) & 3) != 0 )
  {
    if ( (((unsigned int)MiFlags >> 26) & 3) == 1 )
    {
      byte_140C6570F = 1;
      goto LABEL_14;
    }
    if ( (((unsigned int)MiFlags >> 26) & 3) == 2 )
    {
      byte_140C6570F = -1;
      goto LABEL_14;
    }
  }
  byte_140C6570F = 0;
LABEL_14:
  if ( (KeFeatureBits & 0x200000) != 0 )
  {
    result = MiFlags | 0x100;
  }
  else
  {
    if ( (KeFeatureBits & 0x1000000) == 0 )
      goto LABEL_18;
    result = MiFlags | 0x200;
  }
  LODWORD(MiFlags) = result;
LABEL_18:
  if ( (KeFeatureBits & 0x400000000000LL) != 0 )
  {
    result |= 0x1000000u;
    LODWORD(MiFlags) = result;
  }
  return result;
}
