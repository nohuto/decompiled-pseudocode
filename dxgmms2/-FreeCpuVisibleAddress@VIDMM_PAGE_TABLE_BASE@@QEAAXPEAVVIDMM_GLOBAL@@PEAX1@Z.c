/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0092D04
 * Callers:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0092CC0 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00338C4 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00339A8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

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
