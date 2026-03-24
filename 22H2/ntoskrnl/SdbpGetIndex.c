/*
 * XREFs of SdbpGetIndex @ 0x140759384
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x140752DDC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140758F78 (SdbpFindFirstIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407595F4 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x140759B30 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140759BE4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  unsigned int v5; // ebx

  v5 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3, a4) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v5) / 0xC;
    return SdbpGetMappedTagData(a1, v5);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
