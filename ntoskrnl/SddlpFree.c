/*
 * XREFs of SddlpFree @ 0x1406800D8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1402C0AD0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
