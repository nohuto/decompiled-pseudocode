/*
 * XREFs of PipFreeBindingId @ 0x140951730
 * Callers:
 *     PipDeleteBindingId @ 0x140951594 (PipDeleteBindingId.c)
 *     PipDeleteBindingIds @ 0x140951624 (PipDeleteBindingIds.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeUnicodeString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
