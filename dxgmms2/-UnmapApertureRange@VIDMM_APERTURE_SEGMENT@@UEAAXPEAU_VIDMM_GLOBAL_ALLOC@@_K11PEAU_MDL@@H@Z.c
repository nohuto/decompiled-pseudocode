void __fastcall VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        unsigned __int64 a3,
        SIZE_T a4,
        unsigned __int64 a5,
        struct _MDL *a6,
        int a7)
{
  VIDMM_GLOBAL *v11; // rcx
  __int64 v12; // rcx
  UINT v13; // r9d
  VIDMM_GLOBAL *v14; // r10
  union _LARGE_INTEGER v15; // rdx
  struct _VIDMM_GLOBAL_ALLOC *v16; // r8
  unsigned int v17; // edx
  union _LARGE_INTEGER v18; // [rsp+30h] [rbp-18h]

  if ( a2 )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], a2);
    v11 = this[1];
    if ( a7 )
      VIDMM_GLOBAL::VerifyAllocationPagingOperationDone(v11, a2);
    else
      VIDMM_GLOBAL::VerifyAllocationIsIdle(v11, a2);
  }
  v12 = *(unsigned int *)(*((_QWORD *)this[1] + 3) + 436LL);
  if ( (v12 & 4) == 0 )
  {
    v13 = VIDMM_SEGMENT::DriverId((VIDMM_SEGMENT *)this);
    v18 = v15;
    if ( a2 )
    {
      v16 = a2;
      v17 = *((_DWORD *)a2 + 17) & 0x3F;
    }
    else
    {
      v16 = 0LL;
      v17 = 0;
    }
    VIDMM_GLOBAL::UnmapVideoApertureSegmentInternal(v14, v17, v16, v13, a3, a4, v18, a7);
  }
  if ( bTracingEnabled && (byte_1C00769C1 & 8) != 0 )
    McTemplateK0ppxt_EtwWriteTransfer(v12, &EventApertureUnmapping, a3, a4, (char)a2, 0, a7);
  *((_QWORD *)this[1] + 947) += a3 << 12;
  *((_QWORD *)this[1] + 5025) -= a3;
}
