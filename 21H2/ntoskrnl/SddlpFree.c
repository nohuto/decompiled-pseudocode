/*
 * XREFs of SddlpFree @ 0x1409269D0
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403C0380 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
