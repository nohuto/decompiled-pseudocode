/*
 * XREFs of ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x1800409A4
 * Callers:
 *     ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x180040960 (-ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800D6DE0 (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@@Z @ 0x180040AB8 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 *     ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x1800410F0 (-EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChai.c)
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?clear@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800B7BEC (-clear@-$vector@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V-$alloca.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2)
{
  __int64 v2; // rax
  unsigned int v3; // esi
  int v6; // eax
  unsigned int v7; // ecx
  struct ISwapChainRealization *v8; // rdx
  bool v10; // dl
  struct ISwapChainRealization *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a2 + 2);
  v3 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 16) != v2 )
  {
    v10 = *((_DWORD *)this + 34) == 3 && v2;
    CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 104), v10);
    CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(this, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    v6 = CGlobalCompositionSurfaceInfo::EnsureRealization(this, a2, &v11);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Du, 0LL);
    }
    else
    {
      *((_DWORD *)this + 37) = *((_DWORD *)a2 + 7);
      *((_DWORD *)this + 70) = *((_DWORD *)a2 + 54);
      *((_QWORD *)this + 36) = *((_QWORD *)g_pComposition + 62);
      v8 = v11;
      *((_DWORD *)this + 83) = *((_DWORD *)a2 + 55);
      *((_BYTE *)this + 303) = *(_DWORD *)a2 == 2;
      CGlobalCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v8,
        (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 72),
        *((HRGN *)a2 + 4),
        (const struct CSM_SURFACE_UPDATE_ *)((char *)a2 + 40));
    }
  }
  if ( *((_BYTE *)this + 200) )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::clear((char *)this + 176);
    *((_BYTE *)this + 200) = 0;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v11);
  return v3;
}
