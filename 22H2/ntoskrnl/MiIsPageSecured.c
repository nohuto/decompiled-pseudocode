/*
 * XREFs of MiIsPageSecured @ 0x14030C4B8
 * Callers:
 *     MiCopySinglePage @ 0x14030C314 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1405347A8 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1405377A4 (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x140537D28 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 *     MiIsFreeSlabPage @ 0x140553278 (MiIsFreeSlabPage.c)
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r9

  return (MiFlags & 0x8000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3
      && !(unsigned int)MI_PFN_IS_PROTO(a1)
      && (!*(_QWORD *)(v1 + 8)
       || (unsigned int)MiIsFreeSlabPage() && v2 == -2LL
       || v2 <= 0xFFFFF6BFFFFFFF78uLL && v2 >= 0xFFFFF68000000000uLL);
}
