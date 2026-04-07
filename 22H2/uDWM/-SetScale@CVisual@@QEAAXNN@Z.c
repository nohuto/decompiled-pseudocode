/*
 * XREFs of ?SetScale@CVisual@@QEAAXNN@Z @ 0x180021BF8
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180008810 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B930 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180021C6C (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x18002AAD0 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x1800522B4 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetScale(CVisual *this, double a2, double a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4
  double v5; // rax

  v3 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 21) - v3) & _xmm) > 0.0000011920929
    || (v4 = a3, COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 22) - v4) & _xmm) > 0.0000011920929) )
  {
    v5 = *(double *)this;
    *((double *)this + 21) = a2;
    *((double *)this + 22) = a3;
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)&v5 + 24LL))(this, 16LL);
  }
}
