/*
 * XREFs of ??4?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVISwapChainRealization@@@Z @ 0x1800411E0
 * Callers:
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x1800410F0 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChai.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v6; // rcx

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
  {
    v4 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  if ( v2 )
  {
    v6 = v2 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL) + 8LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return a1;
}
