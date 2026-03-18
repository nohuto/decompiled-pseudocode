/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x14075B7F4
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x14075B6A4 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14075BB10 (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x1409638AC (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075B8A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x14075B9CC (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x14075BCC0 (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x140842978 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, __int64 a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
