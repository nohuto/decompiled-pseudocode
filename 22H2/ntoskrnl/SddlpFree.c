/*
 * XREFs of SddlpFree @ 0x140926A20
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403BFFE0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
