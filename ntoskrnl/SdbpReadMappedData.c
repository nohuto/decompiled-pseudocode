/*
 * XREFs of SdbpReadMappedData @ 0x1407A22CC
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x14079D050 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x1407A227C (SdbpGetTagHeadSize.c)
 *     SdbOpenDatabaseEx @ 0x140A4B8F0 (SdbOpenDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x140A505A8 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
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
