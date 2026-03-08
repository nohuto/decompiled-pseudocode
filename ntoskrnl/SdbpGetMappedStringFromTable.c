/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407A2168
 * Callers:
 *     SdbGetStringTagPtr @ 0x1407A20E8 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407A2238 (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407A2B08 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
