/*
 * XREFs of ACPIVectorInstall @ 0x1C0061154
 * Callers:
 *     ACPIVectorConnect @ 0x1C0060B20 (ACPIVectorConnect.c)
 * Callees:
 *     ACPIGpeIndexToByteIndex @ 0x1C002697C (ACPIGpeIndexToByteIndex.c)
 *     ACPIVectorGetEntry @ 0x1C006101C (ACPIVectorGetEntry.c)
 */

char __fastcall ACPIVectorInstall(unsigned int a1, __int64 a2)
{
  unsigned int v4; // eax
  unsigned int v5; // edx
  unsigned int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( !ACPIVectorGetEntry(&v7) )
    return 0;
  v4 = ACPIGpeIndexToByteIndex(a1);
  v5 = v7;
  *(_BYTE *)(v4 + GpeMap) = v7;
  *((_QWORD *)GpeVectorTable + 2 * v5 + 1) = a2;
  return 1;
}
