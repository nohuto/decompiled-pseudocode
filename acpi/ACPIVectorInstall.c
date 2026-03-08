/*
 * XREFs of ACPIVectorInstall @ 0x1C00442B8
 * Callers:
 *     ACPIVectorConnect @ 0x1C0043E40 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x1C0003564 (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorGetEntry @ 0x1C004419C (ACPIVectorGetEntry.c)
 */

char __fastcall ACPIVectorInstall(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  unsigned int v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  if ( !ACPIVectorGetEntry(&v6) )
    return 0;
  v3 = ACPIGpeIndexToByteIndex();
  v4 = v6;
  *(_BYTE *)(v3 + GpeMap) = v6;
  *((_QWORD *)GpeVectorTable + 2 * v4 + 1) = a2;
  return 1;
}
