/*
 * XREFs of sub_1406677A4 @ 0x1406677A4
 * Callers:
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_140666A00 @ 0x140666A00 (sub_140666A00.c)
 * Callees:
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     WbHashData @ 0x140667840 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406677A4(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( Source1 && a2 > 0x20 )
  {
    v2 = WbHashData(Source1 + 32, a2 - 32);
    if ( v2 >= 0 )
      return (unsigned int)-1073741811;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
