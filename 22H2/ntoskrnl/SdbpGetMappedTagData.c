/*
 * XREFs of SdbpGetMappedTagData @ 0x140740E9C
 * Callers:
 *     SdbpGetIndex @ 0x140757728 (SdbpGetIndex.c)
 *     SdbGetStringTagPtr @ 0x140757878 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1407578F8 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetFirstIndexedRecord @ 0x1407CBAE8 (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x14084B234 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140976F88 (KsepDbReadKData.c)
 *     SdbQueryDataExTagID @ 0x140A4EFF8 (SdbQueryDataExTagID.c)
 *     SdbGetBinaryTagData @ 0x140A51E24 (SdbGetBinaryTagData.c)
 *     SdbMergeIsEntryUpdated @ 0x140A5374C (SdbMergeIsEntryUpdated.c)
 *     SdbpMergeAreTagValuesEqual @ 0x140A53B34 (SdbpMergeAreTagValuesEqual.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406956FC (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140742488 (SdbpGetTagHeadSize.c)
 */

__int64 __fastcall SdbpGetMappedTagData(__int64 a1, int a2)
{
  unsigned int v3; // eax
  __int64 v4; // rbx

  v3 = a2 + SdbpGetTagHeadSize();
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
