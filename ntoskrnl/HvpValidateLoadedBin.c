/*
 * XREFs of HvpValidateLoadedBin @ 0x1407A4B30
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x1407A488C (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407FF548 (HvpBuildMapForMemoryBackedHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpValidateLoadedBin(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r10d

  v3 = a1[2];
  v4 = a1[1];
  return v4 + v3 <= a3 && v4 + v3 >= v3 && v3 >= 0x1000 && (v3 & 0xFFF) == 0 && *a1 == 1852400232 && v4 == a2;
}
