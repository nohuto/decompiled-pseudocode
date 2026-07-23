/*
 * XREFs of SdbpReadMappedData @ 0x14075A5EC
 * Callers:
 *     SdbpOpenDatabaseInMemory @ 0x140756414 (SdbpOpenDatabaseInMemory.c)
 *     SdbpReadTagData @ 0x14075A100 (SdbpReadTagData.c)
 *     SdbpGetTagHeadSize @ 0x14075A428 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 *     SdbOpenDatabaseEx @ 0x14096426C (SdbOpenDatabaseEx.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
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
