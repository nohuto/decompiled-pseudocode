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
