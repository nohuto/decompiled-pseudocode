/*
 * XREFs of sub_140762238 @ 0x140762238
 * Callers:
 *     sub_140762650 @ 0x140762650 (sub_140762650.c)
 *     WbInitializeEncryptionSegment @ 0x1407D2E78 (WbInitializeEncryptionSegment.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     WbHashData @ 0x1407622D0 (WbHashData.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140762238(UCHAR *Source1, unsigned int a2)
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
