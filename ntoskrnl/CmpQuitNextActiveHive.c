/*
 * XREFs of CmpQuitNextActiveHive @ 0x140A24094
 * Callers:
 *     CmpLockKcbStackFlusherLocksExclusive @ 0x140613E8C (CmpLockKcbStackFlusherLocksExclusive.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

void __fastcall CmpQuitNextActiveHive(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection_0(a1 + 205);
}
