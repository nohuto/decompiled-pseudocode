/*
 * XREFs of SdbFindNextTag @ 0x14075A008
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x140755F34 (KsepDbCacheReadDeviceInternal.c)
 *     KsepDbGetDriverShimsInternal @ 0x14075904C (KsepDbGetDriverShimsInternal.c)
 *     InitOnceScanIndexes @ 0x14075A180 (InitOnceScanIndexes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbGetNextChild @ 0x14075A3B8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x14075A5B4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbFindNextTag(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  unsigned int v7; // ebx
  __int16 TagFromTagID; // r14
  unsigned int NextChild; // eax
  __int64 v10; // r8
  __int64 v11; // r9

  v5 = a3;
  v7 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, (unsigned int)a3, a3, a4);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v5);
      v5 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild, v10, v11) == TagFromTagID )
        return v5;
    }
    return v7;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
