/*
 * XREFs of CmpRecordParseFailure @ 0x140774724
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 258);
    if ( (unsigned __int8)v3 < 4u )
    {
      *(_DWORD *)(a1 + 8 * v3 + 260) = a3;
      *(_DWORD *)(a1 + 8LL * (unsigned __int8)(*(_BYTE *)(a1 + 258))++ + 264) = a2;
    }
  }
}
