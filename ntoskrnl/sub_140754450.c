/*
 * XREFs of sub_140754450 @ 0x140754450
 * Callers:
 *     WbInitializeEncryptionSegment @ 0x140752A00 (WbInitializeEncryptionSegment.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     WbHashData @ 0x1407544E8 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140754450(UCHAR *Source1, unsigned int a2)
{
  int v2; // ebx

  if ( !Source1 )
    return (unsigned int)-1073741811;
  if ( a2 <= 0x20 )
    return (unsigned int)-1073741811;
  v2 = WbHashData(Source1 + 32, a2 - 32);
  if ( v2 >= 0 )
    return (unsigned int)-1073741811;
  return (unsigned int)v2;
}
