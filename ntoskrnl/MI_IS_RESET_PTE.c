/*
 * XREFs of MI_IS_RESET_PTE @ 0x14032F190
 * Callers:
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiCombineCandidate @ 0x14032C640 (MiCombineCandidate.c)
 *     MiCheckReservePageFileSpace @ 0x14032D670 (MiCheckReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x14032ECD0 (MiReservePageFileSpaceForPage.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MI_IS_RESET_PTE(unsigned __int64 a1)
{
  if ( (a1 & 1) != 0 || (a1 & 0x400) != 0 || (a1 & 0x800) != 0 || (a1 & 4) != 0 || (a1 & 2) != 0 )
    return 0LL;
  if ( qword_140C657C0 )
  {
    if ( (a1 & 0x10) == 0 )
      a1 &= ~qword_140C657C0;
  }
  return HIDWORD(a1) == 1;
}
