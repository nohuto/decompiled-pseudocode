/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x140756600
 * Callers:
 *     SdbGetStringTagPtr @ 0x140756580 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x140756650 (SdbpGetStringTableItemFromStringRef.c)
 *     SdbpGetMappedTagData @ 0x140759E04 (SdbpGetMappedTagData.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
