/*
 * XREFs of SdbReadWORDTag @ 0x1407A029C
 * Callers:
 *     SdbpCheckForMatch @ 0x1407A1468 (SdbpCheckForMatch.c)
 *     InitOnceScanIndexes @ 0x1407A16B0 (InitOnceScanIndexes.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x1407A21B8 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x1407A2A70 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // di
  unsigned int v4; // ebx
  __int64 v6; // r8
  int v7; // eax
  unsigned __int16 v8; // cx
  unsigned __int16 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = a3;
  v10 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2, a3) & 0xF000) == 0x3000 )
  {
    v7 = SdbpReadTagData(a1, v4, &v10, 2LL);
    v8 = v10;
    if ( !v7 )
      return v3;
    return v8;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4, v6);
    AslLogCallPrintf(1LL);
    return v3;
  }
}
