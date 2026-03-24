/*
 * XREFs of MI_IS_RESET_PTE @ 0x14023D690
 * Callers:
 *     MiActOnPte @ 0x14023BF60 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiWsleFlush @ 0x1402A7B80 (MiWsleFlush.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     MiCombineCandidate @ 0x1403690F0 (MiCombineCandidate.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C4DF40 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C4DF40;
  }
  return HIDWORD(a1) == 1;
}
