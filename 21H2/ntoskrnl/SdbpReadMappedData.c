/*
 * XREFs of SdbpReadMappedData @ 0x140797F3C
 * Callers:
 *     SdbpReadTagData @ 0x140791084 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x140793480 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 *     SdbpOpenDatabaseInMemory @ 0x1407ED0C8 (SdbpOpenDatabaseInMemory.c)
 *     SdbOpenDatabaseEx @ 0x140A108BC (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A14498 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpReadMappedData(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  if ( a2 + a4 < a4 || *(_DWORD *)(a1 + 20) < a2 + a4 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  else
  {
    memmove(a3, (const void *)(*(_QWORD *)(a1 + 8) + a2), a4);
    return 1LL;
  }
}
