/*
 * XREFs of sub_1405E6C44 @ 0x1405E6C44
 * Callers:
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 * Callees:
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     WbHashData @ 0x1405E6CE0 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1405E6C44(UCHAR *Source1, unsigned int a2)
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
