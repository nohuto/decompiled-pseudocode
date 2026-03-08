/*
 * XREFs of ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D0FEC
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D0E70 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D106C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x1802863C4 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180091EBC (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800E5B14 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::ReleaseCachedD2DTarget(CD2DContext *this)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)((char *)this + 424);
  if ( *v2 )
  {
    SAFE_DELETE<CD2DTarget>(v2);
    CD2DContext::D2DSetTargetInternal(this, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 392LL))(
      *((_QWORD *)this + 25),
      0LL,
      0LL);
  }
}
