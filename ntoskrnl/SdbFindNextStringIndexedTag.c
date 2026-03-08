/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140848AD4
 * Callers:
 *     SdbpSearchDB @ 0x14079F878 (SdbpSearchDB.c)
 *     SdbGetDatabaseMatchEx @ 0x1407A1A40 (SdbGetDatabaseMatchEx.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140848B18 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140848BC4 (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  unsigned int NextIndexedRecord; // eax

  NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( NextIndexedRecord )
    return SdbpFindMatchingName(a1, NextIndexedRecord, a2);
  else
    return 0LL;
}
