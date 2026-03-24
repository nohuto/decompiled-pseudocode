/*
 * XREFs of MiDeleteColorAnchors @ 0x14035560C
 * Callers:
 *     MiInitializeMdlOneNodeBatchPages @ 0x140355284 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiAllocateLargeZeroPages @ 0x14055D99C (MiAllocateLargeZeroPages.c)
 *     MiFindLargePageMemory @ 0x1408DA134 (MiFindLargePageMemory.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteColorAnchors(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}
