/*
 * XREFs of ?VidMmUnpinAllocAsync@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGALLOCATION@@@Z @ 0x1C00F17B0
 * Callers:
 *     ?AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C00E0890 (-AsyncUnpinAllocation@VIDMM_GLOBAL@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z @ 0x1C0095D58 (-VidMmQueueAsyncOperation@@YAHPEAU_VIDMM_ASYNC_OPERATION@@@Z.c)
 */

__int64 __fastcall VidMmUnpinAllocAsync(struct VIDMM_GLOBAL *a1, struct DXGALLOCATION *a2)
{
  _QWORD v5[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(v5, 0, 0x48uLL);
  LODWORD(v5[4]) = 3;
  v5[5] = a1;
  v5[6] = a2;
  return (unsigned int)VidMmQueueAsyncOperation((struct _VIDMM_ASYNC_OPERATION *)v5) == 0 ? 0xC0000017 : 0;
}
