/*
 * XREFs of ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB608
 * Callers:
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00A9DAC (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00EC650 (-UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1C00A8AFC (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 */

void __fastcall VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA(VIDMM_DEVICE_PAGING_QUEUE *this)
{
  bool v2; // zf
  struct VIDMM_PROCESS **v3; // rcx

  v2 = *((_QWORD *)this + 21) == 0LL;
  v3 = (struct VIDMM_PROCESS **)**((_QWORD **)this + 17);
  if ( !v2 )
  {
    VIDMM_GLOBAL::UnmapGpuVA(
      (VIDMM_GLOBAL *)v3,
      v3[5048],
      (VIDMM_FENCE_STORAGE_PAGE **)(*((_QWORD *)this + 19) + 56LL),
      *((_DWORD *)this + 40),
      1);
    *((_QWORD *)this + 21) = 0LL;
  }
}
