/*
 * XREFs of SdbGetBinaryTagData @ 0x1409661DC
 * Callers:
 *     SdbpGetRegistryMatchingAttributes @ 0x140965BD4 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x140759E04 (SdbpGetMappedTagData.c)
 *     SdbGetTagFromTagID @ 0x14075A3F4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetBinaryTagData(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx

  v2 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x9000 )
    return SdbpGetMappedTagData(a1, v2);
  SdbGetTagFromTagID(a1, v2);
  AslLogCallPrintf(1LL);
  return 0LL;
}
