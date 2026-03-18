/*
 * XREFs of MiSortMdlFrames @ 0x1406238E8
 * Callers:
 *     MiRemoveMdlPages @ 0x140A2E5AC (MiRemoveMdlPages.c)
 * Callees:
 *     qsort @ 0x1403D9DD0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
