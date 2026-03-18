/*
 * XREFs of SdbpGetIndex @ 0x14075B638
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14075B48C (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x140A146FC (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14075B988 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x14079422C (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x14079499C (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, unsigned int a2, unsigned int *a3)
{
  if ( (unsigned __int16)SdbGetTagFromTagID() == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, a2) / 0xC;
    return SdbpGetMappedTagData(a1, a2);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
