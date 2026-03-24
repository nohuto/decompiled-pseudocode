/*
 * XREFs of SdbpGetNextTagId @ 0x140759AA8
 * Callers:
 *     SdbGetNextChild @ 0x1407599E8 (SdbGetNextChild.c)
 *     SdbGetFirstChild @ 0x140759C60 (SdbGetFirstChild.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C15CC (SdbpGetNextIndexedRecord.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetTagHeadSize @ 0x140759A58 (SdbpGetTagHeadSize.c)
 *     SdbGetTagDataSize @ 0x140759B30 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetNextTagId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int TagHeadSize; // esi
  unsigned int TagDataSize; // eax

  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3, a4) & 0xF000) == 0x7000 && (unsigned int)SdbGetTagDataSize(a1, v4) == -1 )
  {
    AslLogCallPrintf(1LL);
    return *(unsigned int *)(a1 + 20);
  }
  TagHeadSize = SdbpGetTagHeadSize(a1, v4);
  if ( !TagHeadSize )
    return *(unsigned int *)(a1 + 20);
  TagDataSize = SdbGetTagDataSize(a1, v4);
  if ( (*(_DWORD *)(a1 + 2608) & 1) == 0 )
    TagDataSize = (TagDataSize + 1) & 0xFFFFFFFE;
  return v4 + TagHeadSize + TagDataSize;
}
