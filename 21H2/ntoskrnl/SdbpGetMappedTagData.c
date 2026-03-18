/*
 * XREFs of SdbpGetMappedTagData @ 0x14075B988
 * Callers:
 *     SdbpGetIndex @ 0x14075B638 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075B8A0 (SdbpGetFirstIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1408411FC (SdbQueryDataExTagID.c)
 *     SdbGetStringTagPtr @ 0x140842A24 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140842AA4 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetNextIndexedRecord @ 0x140842C30 (SdbpGetNextIndexedRecord.c)
 *     KsepDbReadKData @ 0x140963CD0 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x140A13228 (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140793480 (SdbpGetTagHeadSize.c)
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
