/*
 * XREFs of ?UnmapPagingQueueGpuVAs@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00EC650
 * Callers:
 *     ?DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ @ 0x1C00F20F8 (-DestroyPagingProcess@VIDMM_PAGING_PROCESS@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C00AB608 (-UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_DEVICE::UnmapPagingQueueGpuVAs(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rax

  for ( i = 0; i < *((_DWORD *)this + 17); ++i )
  {
    v3 = 176LL * i;
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 10)));
    VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v3 + *((_QWORD *)this + 11)));
    v4 = *((_QWORD *)this + 12);
    if ( v4 )
      VIDMM_DEVICE_PAGING_QUEUE::UnmapGpuVA((VIDMM_DEVICE_PAGING_QUEUE *)(v4 + v3));
  }
}
