/*
 * XREFs of MiSortMdlFrames @ 0x14053421C
 * Callers:
 *     MiRemoveMdlPages @ 0x1408C6AB0 (MiRemoveMdlPages.c)
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     qsort @ 0x1403D23C0 (qsort.c)
 */

void __fastcall MiSortMdlFrames(__int64 a1)
{
  qsort(
    (void *)(a1 + 48),
    (unsigned __int64)*(unsigned int *)(a1 + 40) >> 12,
    8uLL,
    (int (__cdecl *)(const void *, const void *))HalpNodeCostSort);
}
