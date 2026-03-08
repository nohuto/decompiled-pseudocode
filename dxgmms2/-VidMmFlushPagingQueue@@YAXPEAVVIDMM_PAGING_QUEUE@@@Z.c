/*
 * XREFs of ?VidMmFlushPagingQueue@@YAXPEAVVIDMM_PAGING_QUEUE@@@Z @ 0x1C0011B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB790 (-Flush@VIDMM_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VidMmFlushPagingQueue(struct VIDMM_PAGING_QUEUE *a1)
{
  VIDMM_PAGING_QUEUE::Flush(a1);
}
