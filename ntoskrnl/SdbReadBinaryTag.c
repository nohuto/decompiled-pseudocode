/*
 * XREFs of SdbReadBinaryTag @ 0x14079D160
 * Callers:
 *     SdbGetDatabaseID @ 0x14079F0D0 (SdbGetDatabaseID.c)
 *     SdbReadGUIDTag @ 0x1408006BC (SdbReadGUIDTag.c)
 *     SdbpGetExeEntryFlags @ 0x14084BD1C (SdbpGetExeEntryFlags.c)
 *     SdbReadEntryInformation @ 0x140A4C714 (SdbReadEntryInformation.c)
 *     SdbpGetMatchingTextAttributes @ 0x140A4E208 (SdbpGetMatchingTextAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadBinaryTag(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // r8

  v6 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x9000 )
  {
    if ( (unsigned int)SdbpReadTagData(a1, v6, a3, a4) )
      return 1LL;
    AslLogCallPrintf(1LL);
  }
  else
  {
    SdbGetTagFromTagID(a1, v6, v8);
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
