/*
 * XREFs of SdbpGetTagHeadSize @ 0x14075A268
 * Callers:
 *     SdbpGetMappedTagData @ 0x140759E04 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x140759F40 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x14075A2B8 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14075A42C (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbpGetTagHeadSize(__int64 a1, __int64 a2)
{
  __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return (v3 & 0xF000u) < 0x7000 ? 2 : 6;
  AslLogCallPrintf(1LL);
  return 0LL;
}
