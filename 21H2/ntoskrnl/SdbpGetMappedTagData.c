/*
 * XREFs of SdbpGetMappedTagData @ 0x140759FC4
 * Callers:
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x1407567C0 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140759D54 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140759E6C (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C132C (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407C1C88 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFDB0 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x1409663BC (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14075A428 (SdbpGetTagHeadSize.c)
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
