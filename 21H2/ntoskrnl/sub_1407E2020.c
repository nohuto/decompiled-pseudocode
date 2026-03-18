/*
 * XREFs of sub_1407E2020 @ 0x1407E2020
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     WbHashData @ 0x1407E20B8 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E2020(UCHAR *Source1, unsigned int a2)
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
