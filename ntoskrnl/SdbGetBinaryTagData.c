/*
 * XREFs of SdbGetBinaryTagData @ 0x140A4F154
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x140A4E434 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, unsigned int a2)
{
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, a2);
  SdbGetTagFromTagID(a1, a2);
  AslLogCallPrintf(1LL);
  return 0LL;
}
