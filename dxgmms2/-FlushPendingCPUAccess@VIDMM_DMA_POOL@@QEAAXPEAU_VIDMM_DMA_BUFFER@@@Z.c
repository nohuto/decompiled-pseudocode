void __fastcall VIDMM_DMA_POOL::FlushPendingCPUAccess(VIDMM_DMA_POOL *this, struct _VIDMM_DMA_BUFFER *a2)
{
  if ( *((_DWORD *)this + 9) )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 7) + 120LL) + 56LL))(*(_QWORD *)(*((_QWORD *)a2 + 7) + 120LL));
}
