void __fastcall VIDMM_SEGMENT::FlushPendingGPUAccess(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        int a3,
        unsigned __int8 a4)
{
  if ( ((_DWORD)this[10] & 0x10) == 0 )
    VIDMM_GLOBAL::FlushAllocationFromProcessorCache(this[1], a2, a3, a4);
}
