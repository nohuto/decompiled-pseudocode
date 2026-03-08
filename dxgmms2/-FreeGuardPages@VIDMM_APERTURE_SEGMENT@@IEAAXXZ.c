/*
 * XREFs of ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00F80FC
 * Callers:
 *     ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C00BA718 (-InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ.c)
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00F7F14 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::FreeGuardPages(VIDMM_APERTURE_SEGMENT *this)
{
  __int64 v1; // rbp
  PMDL *v2; // rdi
  PMDL v4; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax

  v1 = *((_QWORD *)this + 64);
  v2 = (PMDL *)((char *)this + 504);
  if ( v1 )
  {
    v4 = *v2;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, PMDL))VirtualMemoryInterface + 6))(v1, v4);
    *((_QWORD *)this + 64) = 0LL;
  }
  if ( *v2 )
  {
    MmFreePagesFromMdl(*v2);
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
}
