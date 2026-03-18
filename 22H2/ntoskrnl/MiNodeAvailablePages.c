/*
 * XREFs of MiNodeAvailablePages @ 0x14046C646
 * Callers:
 *     MiLogSlabEntryAllocateFailure @ 0x14065715C (MiLogSlabEntryAllocateFailure.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2BEFC (MiAddPhysicalMemoryChunks.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1402E8524 (MiNodeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeAvailablePages(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int i; // edi
  __int64 v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = 0LL;
  for ( i = 0; i < MmNumberOfChannels; ++i )
  {
    v1 += MiNodeFreeZeroPages(a1, i, 4096);
    v4 = 8LL;
    v5 = &a1[88 * i + 407];
    do
    {
      v6 = *v5;
      v5 += 11;
      v1 += v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
