/*
 * XREFs of HsaGetDeviceAperture @ 0x14052DBF0
 * Callers:
 *     HsaAllocateRemappingTableEntry @ 0x14052C890 (HsaAllocateRemappingTableEntry.c)
 *     HsaFreeRemappingTableEntry @ 0x14052D9F0 (HsaFreeRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x14052EC90 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableEntry @ 0x14052EE50 (HsaUpdateRemappingTableEntry.c)
 * Callees:
 *     ExtEnvCriticalFailure @ 0x14051D068 (ExtEnvCriticalFailure.c)
 */

unsigned __int64 __fastcall HsaGetDeviceAperture(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  v1 = WORD1(a1);
  if ( (unsigned int)v1 >= 0x20 )
    ExtEnvCriticalFailure(a1, 0LL, 0LL, 0LL, 0LL);
  v2 = HsaDeviceApertureRanges[v1];
  result = 0LL;
  if ( v2 )
    return v2 + ((unsigned __int64)((unsigned __int16)a1 >> 9) << 6);
  return result;
}
