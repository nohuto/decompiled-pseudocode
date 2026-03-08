/*
 * XREFs of SdbpGetIndex @ 0x1407A1F98
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbGetTagDataSize @ 0x1407A2980 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetIndex(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // ebx

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2, a3) == 0x9801 )
  {
    *a3 = (unsigned int)SdbGetTagDataSize(a1, v4) / 0xC;
    return SdbpGetMappedTagData(a1, v4);
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
