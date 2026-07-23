/*
 * XREFs of SdbReadBinaryTag @ 0x140756588
 * Callers:
 *     SdbGetDatabaseID @ 0x140758620 (SdbGetDatabaseID.c)
 *     SdbReadEntryInformation @ 0x1407C1F5C (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2080 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x140965B88 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x140966430 (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x14075A100 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v6; // ebx
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = a4;
  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, v4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6, v8, v9);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
