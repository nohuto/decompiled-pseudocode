/*
 * XREFs of ?EnsureRealization@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@PEAPEAVISwapChainRealization@@@Z @ 0x1800410F0
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z @ 0x1800409A4 (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z @ 0x1800411B4 (-FindRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@QEBAPEAVISwapChainRealization@@I@Z.c)
 *     ??4?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVISwapChainRealization@@@Z @ 0x1800411E0 (--4-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVISwapCha.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1800F2010 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnsureRealization(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE_ *a2,
        struct ISwapChainRealization **a3)
{
  struct ISwapChainRealization *v3; // rdi
  CGlobalCompositionSurfaceInfo::CBindInfo *v4; // rbp
  unsigned int v5; // ebx
  struct ISwapChainRealization *Realization; // rax
  int v10; // eax
  unsigned int v11; // ecx
  struct ISwapChainRealization *v12; // rax
  struct ISwapChainRealization *v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = (CGlobalCompositionSurfaceInfo *)((char *)this + 104);
  v13 = 0LL;
  v5 = 0;
  if ( *((_QWORD *)this + 16) == *((_QWORD *)a2 + 2) )
  {
    Realization = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(
                    (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
                    *((_DWORD *)a2 + 6));
    wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v13, Realization);
    v3 = v13;
  }
  if ( !v3 )
  {
    v10 = CGlobalCompositionSurfaceInfo::CBindInfo::Initialize(v4, *((_QWORD *)a2 + 2));
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xDBu, 0LL);
    }
    else
    {
      v12 = CGlobalCompositionSurfaceInfo::CBindInfo::FindRealization(v4, *((_DWORD *)a2 + 6));
      wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>::operator=(&v13, v12);
      v3 = v13;
    }
  }
  v13 = 0LL;
  *a3 = v3;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v13);
  return v5;
}
