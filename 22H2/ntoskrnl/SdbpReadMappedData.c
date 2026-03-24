/*
 * XREFs of SdbpReadMappedData @ 0x140759C1C
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140755A44 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x140759730 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x140759A58 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140759B30 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x1409640DC (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140413540 (memmove.c)
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
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
