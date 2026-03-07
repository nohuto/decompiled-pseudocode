void __fastcall VIDMM_SEGMENT::FlushPendingCPUAccess(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // r8d

  if ( ((_DWORD)this[10] & 0x10) == 0 )
  {
    v4 = **((_DWORD **)a2 + 67);
    if ( (v4 & 4) != 0 )
      VIDMM_GLOBAL::FlushAllocationFromProcessorCache(this[1], a2, v4, a4);
  }
}
