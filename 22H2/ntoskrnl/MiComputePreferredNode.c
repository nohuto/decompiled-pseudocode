/*
 * XREFs of MiComputePreferredNode @ 0x140617800
 * Callers:
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1406671AC (MiAllocateLargeProcessPagesFromCache.c)
 *     MiCreateLargePfnList @ 0x140667A5C (MiCreateLargePfnList.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputePreferredNode(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // eax

  v1 = *(_DWORD *)(a1 + 48);
  v2 = (v1 >> 12) & 0x7F;
  if ( v2 )
    return (unsigned int)(v2 - 1);
  if ( (v1 & 0x200000) == 0 && (v2 = (*(_DWORD *)(**(_QWORD **)(a1 + 72) + 56LL) >> 20) & 0x7F) != 0 )
    return (unsigned int)(v2 - 1);
  else
    return *(unsigned int *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 33364);
}
