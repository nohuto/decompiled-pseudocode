/*
 * XREFs of ?MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJXZ @ 0x1C00EC2F4
 * Callers:
 *     ?Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z @ 0x1C00AA3AC (-Initialize@VIDMM_DEVICE_PAGING_QUEUE@@QEAAJPEAVVIDMM_DEVICE@@IW4VIDMM_PAGING_QUEUE_TYPE@@_N@Z.c)
 *     ?MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z @ 0x1C00EC360 (-MapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAJI@Z.c)
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1C00AA934 (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STOR.c)
 */

__int64 __fastcall VIDMM_DEVICE_PAGING_QUEUE::MapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = VIDMM_GLOBAL::MapGpuVA(
         **((struct VIDMM_DEVICE ****)this + 17),
         *(struct VIDMM_DEVICE **)(**((_QWORD **)this + 17) + 40392LL),
         *(struct VIDMM_PROCESS **)(**((_QWORD **)this + 17) + 40384LL),
         (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + 19) + 56LL),
         (unsigned __int64 *)this + 21,
         1 << *((_DWORD *)this + 40),
         1);
  v2 = 0;
  if ( v1 < 0 )
    return (unsigned int)v1;
  return v2;
}
