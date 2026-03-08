/*
 * XREFs of SdbpGetTagHeadSize @ 0x1407A227C
 * Callers:
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x1407A22CC (SdbpReadMappedData.c)
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
