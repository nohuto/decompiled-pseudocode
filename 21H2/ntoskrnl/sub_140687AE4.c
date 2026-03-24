/*
 * XREFs of sub_140687AE4 @ 0x140687AE4
 * Callers:
 *     sub_1405D7C64 @ 0x1405D7C64 (sub_1405D7C64.c)
 *     sub_140686D40 @ 0x140686D40 (sub_140686D40.c)
 * Callees:
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 *     WbHashData @ 0x140687B80 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140687AE4(UCHAR *Source1, unsigned int a2)
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
