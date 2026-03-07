__int64 __fastcall _VIDMM_DMA_BUFFER::PushGlobalAllocIntoReferenceTable(
        _VIDMM_DMA_BUFFER *this,
        struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)this + 42);
  if ( v2 >= 0x400 )
    return 3221225473LL;
  *(_QWORD *)(*((_QWORD *)this + 22) + 8LL * v2) = a2;
  ++*((_DWORD *)this + 42);
  return 0LL;
}
