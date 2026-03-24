/*
 * XREFs of PipFreeBindingId @ 0x1407CD6E4
 * Callers:
 *     PipDeleteBindingIds @ 0x1407CD6A0 (PipDeleteBindingIds.c)
 *     PipDeleteBindingId @ 0x14089DC24 (PipDeleteBindingId.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PipFreeBindingId(UNICODE_STRING *P)
{
  RtlFreeAnsiString(P + 1);
  ExFreePoolWithTag(P, 0x53706E50u);
}
