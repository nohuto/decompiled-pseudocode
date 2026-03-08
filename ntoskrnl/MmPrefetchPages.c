/*
 * XREFs of MmPrefetchPages @ 0x1406A3830
 * Callers:
 *     <none>
 * Callees:
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 */

NTSTATUS __stdcall MmPrefetchPages(ULONG NumberOfLists, PREAD_LIST *ReadLists)
{
  return MmPrefetchPagesEx(NumberOfLists, ReadLists);
}
