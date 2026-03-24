/*
 * XREFs of SdbGetTagFromTagID @ 0x140759BE4
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F8D90 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindMatcher @ 0x14075426C (SdbpFindMatcher.c)
 *     SdbReadBinaryTag @ 0x140755BB8 (SdbReadBinaryTag.c)
 *     SdbGetStringTagPtr @ 0x140755D70 (SdbGetStringTagPtr.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140755E40 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpReadStringRef @ 0x140755F18 (SdbpReadStringRef.c)
 *     SdbpGetIndex @ 0x140759384 (SdbpGetIndex.c)
 *     SdbpGetFirstIndexedRecord @ 0x14075949C (SdbpGetFirstIndexedRecord.c)
 *     SdbReadDWORDTag @ 0x140759584 (SdbReadDWORDTag.c)
 *     SdbFindNextTag @ 0x140759638 (SdbFindNextTag.c)
 *     SdbReadWORDTag @ 0x1407596BC (SdbReadWORDTag.c)
 *     InitOnceScanIndexes @ 0x1407597B0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x140759974 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x1407599E8 (SdbGetNextChild.c)
 *     SdbpGetNextTagId @ 0x140759AA8 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140759B30 (SdbGetTagDataSize.c)
 *     SdbGetFirstChild @ 0x140759C60 (SdbGetFirstChild.c)
 *     SdbReadQWORDTag @ 0x1407B3E60 (SdbReadQWORDTag.c)
 *     SdbpGetNextIndexedRecord @ 0x1407C15CC (SdbpGetNextIndexedRecord.c)
 *     SdbFindFirstNamedTag @ 0x1407C214C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140966120 (SdbpFindNextNamedTag.c)
 *     SdbGetBinaryTagData @ 0x14096622C (SdbGetBinaryTagData.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpReadMappedData @ 0x140759C1C (SdbpReadMappedData.c)
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
