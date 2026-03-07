void __fastcall VIDMM_GLOBAL::FillAllocation(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6)
{
  struct _VIDMM_GLOBAL_ALLOC *v7; // r8
  unsigned int v8; // [rsp+20h] [rbp-28h]

  v7 = a2;
  if ( a2 )
    LODWORD(a2) = *((_DWORD *)a2 + 17) & 0x3F;
  VIDMM_GLOBAL::FillAllocationInternal(this, (unsigned int)a2, v7, a3, v8, a5, a6);
}
