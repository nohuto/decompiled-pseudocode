/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140755DF0
 * Callers:
 *     SdbGetStringTagPtr @ 0x140755D70 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755754 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140755E40 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x1407595F4 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
