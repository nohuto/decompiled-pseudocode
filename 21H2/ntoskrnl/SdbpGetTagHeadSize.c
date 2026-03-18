/*
 * XREFs of SdbpGetTagHeadSize @ 0x140793480
 * Callers:
 *     SdbpGetMappedTagData @ 0x14075B988 (SdbpGetMappedTagData.c)
 *     SdbpReadTagData @ 0x140791084 (SdbpReadTagData.c)
 *     SdbpGetNextTagId @ 0x1407941A4 (SdbpGetNextTagId.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140797F3C (SdbpReadMappedData.c)
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
