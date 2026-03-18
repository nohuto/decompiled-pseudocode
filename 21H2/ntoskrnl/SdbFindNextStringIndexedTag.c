/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x140842820
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x140842978 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x140842C30 (SdbpGetNextIndexedRecord.c)
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
