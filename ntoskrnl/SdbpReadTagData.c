/*
 * XREFs of SdbpReadTagData @ 0x1407A21B8
 * Callers:
 *     SdbReadBinaryTag @ 0x14079D160 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x14079FC18 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x1407A029C (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x1407A2AA4 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x140800D70 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1407A227C (SdbpGetTagHeadSize.c)
 *     SdbpReadMappedData @ 0x1407A22CC (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // esi
  unsigned int TagDataSize; // ebx
  int TagHeadSize; // eax

  v6 = a2;
  TagDataSize = SdbGetTagDataSize(a1, a2);
  if ( TagDataSize <= a4 )
  {
    TagHeadSize = SdbpGetTagHeadSize(a1, v6);
    if ( (unsigned int)SdbpReadMappedData(a1, v6 + TagHeadSize, a3, TagDataSize) )
      return 1LL;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
