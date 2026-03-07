void __fastcall VIDMM_FENCE_STORAGE_PAGE::ReleaseStoragePageGpuData(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA ***a2)
{
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v4; // rcx
  struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA **v5; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v6; // rdx

  if ( (*((_DWORD *)a2 + 18))-- == 1 )
  {
    v4 = *a2;
    if ( (*a2)[1] != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)a2
      || (v5 = a2[1], *v5 != (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)a2) )
    {
      __fastfail(3u);
    }
    *v5 = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v4;
    v4[1] = (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)v5;
    VIDMM_GLOBAL::RemoveFenceGpuData((VIDMM_GLOBAL *)a2[6], (struct VIDMM_FENCE_STORAGE_PAGE_GPU_DATA *)a2);
    v6 = (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)a2[8];
    if ( v6 )
      SysMmFreeLogicalMemory(*((struct SYSMM_ADAPTER **)a2[6][3] + 28), v6);
    ExFreePoolWithTag(a2, 0);
  }
}
