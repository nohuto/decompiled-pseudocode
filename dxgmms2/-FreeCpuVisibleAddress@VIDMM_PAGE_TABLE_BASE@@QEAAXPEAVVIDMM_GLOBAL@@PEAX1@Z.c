// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        SIZE_T **this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        void *a4)
{
  SIZE_T *v8; // rdx
  SIZE_T v9; // rbx
  int v10; // eax
  VIDMM_CPU_HOST_APERTURE *v11; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  if ( !this[2][15] )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 48LL, this, 0LL, 0LL);
  }
  v8 = this[2];
  v9 = v8[15];
  v10 = *(_DWORD *)(v9 + 80);
  if ( (v10 & 0x1000) == 0 && (v10 & 1) == 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 436LL) & 8) == 0 )
        MmUnmapIoSpace(a3, v8[2]);
    }
    else
    {
      v11 = *(VIDMM_CPU_HOST_APERTURE **)(v9 + 504);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)v8);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)this[2]);
      VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
      (*((void (__fastcall **)(void *, void *))VirtualMemoryInterface + 6))(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
