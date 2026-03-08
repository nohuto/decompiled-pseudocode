/*
 * XREFs of SdbpGetMappedTagData @ 0x1407A2238
 * Callers:
 *     SdbpGetFirstIndexedRecord @ 0x14079F5A8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetIndex @ 0x1407A1F98 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1407A2168 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x140848BC4 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140973EE8 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4C328 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140A4F154 (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A50E64 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x1407A227C (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize(a1, a2);
  if ( v3 >= *(_DWORD *)(a1 + 20) )
  {
    AslLogCallPrintf(1LL);
    v4 = 0LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(a1 + 8) + v3;
  if ( !v4 )
LABEL_5:
    AslLogCallPrintf(1LL);
  return v4;
}
