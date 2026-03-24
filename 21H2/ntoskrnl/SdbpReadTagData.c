/*
 * XREFs of SdbpReadTagData @ 0x140759F40
 * Callers:
 *     SdbReadBinaryTag @ 0x1407563C8 (SdbReadBinaryTag.c)
 *     SdbpReadStringRef @ 0x140756728 (SdbpReadStringRef.c)
 *     SdbReadDWORDTag @ 0x140759D94 (SdbReadDWORDTag.c)
 *     SdbReadWORDTag @ 0x140759ECC (SdbReadWORDTag.c)
 *     SdbReadQWORDTag @ 0x1407B3A20 (SdbReadQWORDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14075A268 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14075A340 (SdbGetTagDataSize.c)
 *     SdbpReadMappedData @ 0x14075A42C (SdbpReadMappedData.c)
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
