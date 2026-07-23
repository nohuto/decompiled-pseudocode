/*
 * XREFs of SddlpFree @ 0x140926B30
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403C07B0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
