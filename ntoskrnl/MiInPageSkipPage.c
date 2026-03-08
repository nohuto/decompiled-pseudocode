/*
 * XREFs of MiInPageSkipPage @ 0x140463664
 * Callers:
 *     MiValidatePagefilePageHash @ 0x140466E1A (MiValidatePagefilePageHash.c)
 * Callees:
 *     MiInPageGapPage @ 0x1402E4628 (MiInPageGapPage.c)
 */

_BOOL8 __fastcall MiInPageSkipPage(__int64 a1)
{
  return a1 == qword_140C69380 || MiInPageGapPage(a1);
}
