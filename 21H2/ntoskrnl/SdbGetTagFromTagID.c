/*
 * XREFs of SdbGetTagFromTagID @ 0x14075A5B4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindMatcher @ 0x140754C3C (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x140756588 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140756810 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x1407568E8 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x140759D54 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140759E6C (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x14075A008 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x14075A08C (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x14075A180 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14075A3B8 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14075A478 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14075A630 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C132C (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407C1EAC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409662B0 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1409663BC (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14075A5EC (SdbpReadMappedData.c)
 */

__int64 __fastcall SdbGetTagFromTagID(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( (unsigned int)SdbpReadMappedData(a1, a2, &v3, 2LL) )
    return v3;
  AslLogCallPrintf(1LL);
  return 0LL;
}
