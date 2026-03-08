/*
 * XREFs of HalpMmAllocCtxBufferCleanup @ 0x140503684
 * Callers:
 *     HalpMmAllocCtxAllocBuffer @ 0x140397480 (HalpMmAllocCtxAllocBuffer.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HalpMmAllocCtxBufferCleanup(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx

  v2 = (void *)a2[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(a2, 0);
}
