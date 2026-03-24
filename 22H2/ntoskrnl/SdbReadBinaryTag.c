/*
 * XREFs of SdbReadBinaryTag @ 0x140755BB8
 * Callers:
 *     SdbGetDatabaseID @ 0x140757C50 (SdbGetDatabaseID.c)
 *     SdbReadEntryInformation @ 0x1407C21FC (SdbReadEntryInformation.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2320 (SdbpGetExeEntryFlags.c)
 *     SdbpGetMatchingTextAttributes @ 0x1409659F8 (SdbpGetMatchingTextAttributes.c)
 *     SdbReadGUIDTag @ 0x1409662A0 (SdbReadGUIDTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140759730 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
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
