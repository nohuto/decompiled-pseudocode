void __fastcall VIDMM_SYSMEM_SEGMENT::MapPagingBuffer(VIDMM_SYSMEM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  *((_DWORD *)a2 + 17) &= ~0x800000u;
}
