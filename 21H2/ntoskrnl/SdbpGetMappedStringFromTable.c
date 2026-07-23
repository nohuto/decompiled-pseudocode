/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407567C0
 * Callers:
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140756810 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x140759FC4 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
