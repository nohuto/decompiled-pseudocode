/*
 * XREFs of SdbpGetMappedTagData @ 0x1407595F4
 * Callers:
 *     SdbGetStringTagPtr @ 0x140755D70 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140755DF0 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140759384 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075949C (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C15CC (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407C1F28 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFCA0 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x14096622C (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140759A58 (SdbpGetTagHeadSize.c)
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
