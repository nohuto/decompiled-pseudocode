/*
 * XREFs of ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800D1A9C
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800D1920 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ?Trim@CD3DDevice@@QEAAXXZ @ 0x1800D1B1C (-Trim@CD3DDevice@@QEAAXXZ.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180289B44 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z.c)
 * Callees:
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18009208C (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1800E66E4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
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
