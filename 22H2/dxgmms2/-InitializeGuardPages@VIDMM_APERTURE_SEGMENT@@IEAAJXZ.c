/*
 * XREFs of ?InitializeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAJXZ @ 0x1C009058C
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z @ 0x1C00904C0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZPEAT_LARGE_INTEGER@@@Z.c)
 * Callees:
 *     ?FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ @ 0x1C00C1B80 (-FreeGuardPages@VIDMM_APERTURE_SEGMENT@@IEAAXXZ.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::InitializeGuardPages(PHYSICAL_ADDRESS *this)
{
  struct _MDL *PagesForMdl; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  PagesForMdl = MmAllocatePagesForMdl(gs_PhysicalAddressZero, this[15], gs_PhysicalAddressZero, 0x1000uLL);
  this[61].QuadPart = (LONGLONG)PagesForMdl;
  if ( !PagesForMdl )
  {
    _InterlockedIncrement(&dword_1C0050714);
    v9 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v9 + 24) = 228LL;
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
  v4 = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
  this[62].QuadPart = (LONGLONG)v4;
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1C0050714);
    v10 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v10 + 24) = 245LL;
    WdLogEvent5_WdLowResource(v10);
    VIDMM_APERTURE_SEGMENT::FreeGuardPages((VIDMM_APERTURE_SEGMENT *)this);
    return 3221225495LL;
  }
  this[63].QuadPart = *(_QWORD *)(this[61].QuadPart + 48) << 12;
  v6 = v4;
  for ( i = 1024LL; i; --i )
    *v6++ = 1685217607;
  return 0LL;
}
