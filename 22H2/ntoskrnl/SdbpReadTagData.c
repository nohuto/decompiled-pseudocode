/*
 * XREFs of SdbpReadTagData @ 0x1407579AC
 * Callers:
 *     SdbReadBinaryTag @ 0x140695430 (SdbReadBinaryTag.c)
 *     SdbReadDWORDTag @ 0x140755968 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x14075617C (SdbReadWORDTag.c)
 *     SdbpReadStringRef @ 0x140757948 (SdbpReadStringRef.c)
 *     SdbReadQWORDTag @ 0x14080B234 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140742488 (SdbpGetTagHeadSize.c)
 *     SdbpReadMappedData @ 0x140742D9C (SdbpReadMappedData.c)
 *     SdbGetTagDataSize @ 0x1407580A0 (SdbGetTagDataSize.c)
 */

__int64 __fastcall SdbpReadTagData(__int64 a1, __int64 a2, void *a3, unsigned int a4)
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
