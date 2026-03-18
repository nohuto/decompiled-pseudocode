/*
 * XREFs of HvpValidateLoadedBin @ 0x14074FF40
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408272D8 (HvpBuildMapForMemoryBackedHive.c)
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
