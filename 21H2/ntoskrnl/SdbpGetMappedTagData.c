/*
 * XREFs of SdbpGetMappedTagData @ 0x140759E04
 * Callers:
 *     SdbGetStringTagPtr @ 0x140756580 (SdbGetStringTagPtr.c)
 *     SdbpGetMappedStringFromTable @ 0x140756600 (SdbpGetMappedStringFromTable.c)
 *     SdbpGetIndex @ 0x140759B94 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140759CAC (SdbpGetFirstIndexedRecord.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C0E0C (SdbpGetNextIndexedRecord.c)
 *     SdbQueryDataExTagID @ 0x1407C1768 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BFC50 (KsepDbReadKData.c)
 *     SdbGetBinaryTagData @ 0x1409661DC (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x14075A268 (SdbpGetTagHeadSize.c)
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
