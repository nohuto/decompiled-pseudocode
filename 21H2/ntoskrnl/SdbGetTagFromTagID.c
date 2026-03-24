/*
 * XREFs of SdbGetTagFromTagID @ 0x14075A3F4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F9710 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindMatcher @ 0x140754A7C (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x1407563C8 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x140756580 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140756650 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x140756728 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x140759B94 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x140759CAC (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140759D94 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140759E48 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x140759ECC (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x140759FC0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x14075A184 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x14075A1F8 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x14075A2B8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x14075A340 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x14075A470 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x1407B3A20 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C0E0C (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407C198C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409660D0 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x1409661DC (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x14075A42C (SdbpReadMappedData.c)
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
