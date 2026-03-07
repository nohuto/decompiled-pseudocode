void __fastcall VIDMM_GLOBAL::MemoryTransfer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6,
        struct _MDL *a7,
        struct VIDMM_SEGMENT *a8,
        union _LARGE_INTEGER *a9,
        struct _MDL *a10,
        struct _DXGK_TRANSFERFLAGS a11)
{
  int v13; // ecx
  __int64 v14; // rdi

  if ( a2 )
  {
    VIDMM_GLOBAL::MemoryTransferInternal(this, *((_DWORD *)a2 + 17) & 0x3F, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    v13 = *((_DWORD *)a2 + 17);
    v14 = *((_QWORD *)this + 5028) + 1616LL * (v13 & 0x3F);
    if ( *((_QWORD *)a2 + 1) > (unsigned __int64)(qword_1C0076550 - *(_QWORD *)(v14 + 456)) )
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v13 & 0x3F, 0, 0LL, 0LL, 0, 0);
    *(_QWORD *)(v14 + 456) += *((_QWORD *)a2 + 1);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferInternal(this, 0, 0LL, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
}
