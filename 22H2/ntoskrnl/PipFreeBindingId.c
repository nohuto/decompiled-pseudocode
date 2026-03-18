/*
 * XREFs of PipFreeBindingId @ 0x140954750
 * Callers:
 *     PipDeleteBindingId @ 0x1409545B4 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140954644 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
