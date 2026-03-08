/*
 * XREFs of ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C00BA718
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00BA660 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C00199A4 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00F80FC (-FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::InitializeGuardPages(PHYSICAL_ADDRESS *this)
{
  PMDL PagesForMdl; // rax
  PMDL v3; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  __int64 v5; // rax
  _DWORD *v6; // rdi
  __int64 i; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
  this[63].QuadPart = (LONGLONG)PagesForMdl;
  v3 = PagesForMdl;
  if ( !PagesForMdl )
  {
    _InterlockedIncrement(&dword_1C0076834);
    WdLogSingleEntry1(6LL, 228LL);
    DxgkLogInternalTriageEvent(v9, 262145LL);
    return 3221225495LL;
  }
  VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
  v5 = (*((__int64 (__fastcall **)(PMDL, _QWORD, __int64))VirtualMemoryInterface + 5))(v3, 0LL, 2LL);
  this[64].QuadPart = v5;
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C0076834);
    WdLogSingleEntry1(6LL, 245LL);
    DxgkLogInternalTriageEvent(v10, 262145LL);
    VIDMM_APERTURE_SEGMENT::FreeGuardPages((VIDMM_APERTURE_SEGMENT *)this);
    return 3221225495LL;
  }
  this[65].QuadPart = *(_QWORD *)(this[63].QuadPart + 48) << 12;
  v6 = (_DWORD *)v5;
  for ( i = 1024LL; i; --i )
    *v6++ = 1685217607;
  return 0LL;
}
