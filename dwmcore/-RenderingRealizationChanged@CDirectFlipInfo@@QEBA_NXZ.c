/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x18012D42C
 * Callers:
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18008B894 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x18008BD94 (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?Activate@CDirectFlipInfo@@QEAAJXZ @ 0x1801F373C (-Activate@CDirectFlipInfo@@QEAAJXZ.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x1801F3994 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  unsigned __int64 CurrentFrameId; // rdi
  int v3; // eax
  bool v4; // zf

  CurrentFrameId = GetCurrentFrameId();
  if ( *((_QWORD *)this + 14) != CurrentFrameId )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 288LL))(*((_QWORD *)this + 2));
    v4 = *((_DWORD *)this + 26) == v3;
    *((_DWORD *)this + 26) = v3;
    *((_QWORD *)this + 14) = CurrentFrameId;
    *((_BYTE *)this + 120) = !v4;
  }
  return *((_BYTE *)this + 120);
}
