/*
 * XREFs of ??0?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVISwapChainRealization@@@Z @ 0x1800B8260
 * Callers:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7F08 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x1800B8184 (-AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025B6EC (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( a2 )
  {
    v3 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a1;
}
