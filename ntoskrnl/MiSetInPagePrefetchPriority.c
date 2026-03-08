/*
 * XREFs of MiSetInPagePrefetchPriority @ 0x1402CCC8C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14028A780 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     MiSetInPagePriority @ 0x1402CCCBC (MiSetInPagePriority.c)
 */

__int64 __fastcall MiSetInPagePrefetchPriority(__int64 a1, __int64 a2)
{
  return MiSetInPagePriority(a2, (*(_DWORD *)(a1 + 80) & 0x40) != 0 ? 5 : 0, *(_DWORD *)(a1 + 80) & 7);
}
