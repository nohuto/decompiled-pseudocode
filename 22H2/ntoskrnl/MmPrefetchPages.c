/*
 * XREFs of MmPrefetchPages @ 0x14073EBD0
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x14073EBE8 (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists, 0LL);
}
