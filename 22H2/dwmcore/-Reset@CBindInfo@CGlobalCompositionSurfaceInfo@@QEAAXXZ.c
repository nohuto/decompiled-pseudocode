/*
 * XREFs of ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x180038480
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800383E4 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180038804 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18009CCCC (-ProcessSurfaceUpdateInternal@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801F8A00 (-NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800385D4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038CCC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z @ 0x1801F8D50 (-SetIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N0III@Z.c)
 *     ?UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z @ 0x1801F8F50 (-UnpinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::Reset(CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  CRenderTargetBitmap *v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  struct CComposition *v6; // rdi
  __int64 v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 148)
    && (int)CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlip(this, 0, 0, 0, 0, 0) < 0 )
  {
    *((_BYTE *)this + 148) = 0;
  }
  *((_DWORD *)this + 36) = 0;
  if ( (__int64)(*((_QWORD *)this + 11) - *((_QWORD *)this + 10)) >> 3 )
    CGlobalCompositionSurfaceInfo::CBindInfo::UnpinResources(this, 0);
  v2 = (CRenderTargetBitmap *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( v2 )
    CRenderTargetBitmap::Release(v2);
  v3 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(struct _LUID *)((char *)this + 36) = g_luidZero;
  *((_DWORD *)this + 11) = 0;
  v4 = (_QWORD *)*((_QWORD *)this + 7);
  v5 = (_QWORD *)*((_QWORD *)this + 6);
  if ( v5 != v4 )
  {
    do
    {
      wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        &v15,
        *v5);
      v10 = (_QWORD *)(*(int *)(*(_QWORD *)(v15 + 8) + 8LL) + v15 + 8);
      (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, _QWORD))(*v10 + 48LL))(
        v10,
        (*(_QWORD *)this + 16LL) & -(__int64)(*(_QWORD *)this != 0LL),
        *v10,
        -*(_QWORD *)this);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
      ++v5;
    }
    while ( v5 != v4 );
    v4 = (_QWORD *)*((_QWORD *)this + 7);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>>(
    *((_QWORD *)this + 6),
    v4);
  v6 = g_pComposition;
  *((_QWORD *)this + 7) = *((_QWORD *)this + 6);
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 26) = 0;
  *(_OWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  v7 = *(_QWORD *)this;
  *((_QWORD *)this + 17) = 0LL;
  *((_BYTE *)this + 150) = 0;
  v8 = 0;
  v9 = *((_DWORD *)v6 + 158);
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)v6 + 76) + 8LL * v8);
      if ( v7 == v11 )
        break;
      if ( ++v8 >= v9 )
        return;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = *((_DWORD *)v6 + 158);
    if ( v8 >= v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, 0x21Fu, 0LL);
    }
    else
    {
      v14 = v13 - 1;
      if ( v8 < (unsigned int)v14 )
      {
        *(_QWORD *)(*((_QWORD *)v6 + 76) + 8LL * v8) = *(_QWORD *)(*((_QWORD *)v6 + 76) + 8 * v14);
        v13 = *((_DWORD *)v6 + 158);
      }
      *((_DWORD *)v6 + 158) = v13 - 1;
    }
  }
}
