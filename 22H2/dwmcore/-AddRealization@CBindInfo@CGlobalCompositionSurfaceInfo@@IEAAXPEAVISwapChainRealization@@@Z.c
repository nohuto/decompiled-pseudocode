/*
 * XREFs of ?AddRealization@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEAVISwapChainRealization@@@Z @ 0x180038BF4
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180038804 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_REALIZATION_INFO@@@Z @ 0x1800389F8 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180038CCC (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180039478 (--$_Emplace_reallocate@V-$com_ptr_t@VISwapChainRealization@@Uerr_returncode_policy@wil@@@wil@@@-.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::AddRealization(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct ISwapChainRealization *a2)
{
  __int64 v3; // r9
  __int64 v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rdx
  char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)this;
  v5 = *(_QWORD *)this + 16LL;
  v6 = (_QWORD *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64))(*v6 + 40LL))(v6, v5 & -(__int64)(v3 != 0), *v6, -v3);
  wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
    &v10,
    a2);
  v7 = (_QWORD *)*((_QWORD *)this + 7);
  if ( *((_QWORD **)this + 8) == v7 )
  {
    std::vector<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<ISwapChainRealization,wil::err_returncode_policy>>(
      (char *)this + 48,
      v7,
      &v10);
  }
  else
  {
    v9 = v10;
    v10 = 0LL;
    *v7 = v9;
    *((_QWORD *)this + 7) += 8LL;
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v10);
  if ( ((*((_QWORD *)this + 7) - *((_QWORD *)this + 6)) & 0xFFFFFFFFFFFFFFF8uLL) == 8 )
  {
    v8 = (char *)a2 + *(int *)(*((_QWORD *)a2 + 1) + 8LL) + 8;
    *(_QWORD *)((char *)this + 36) = *(_QWORD *)(*(__int64 (__fastcall **)(char *, __int64 *))(*(_QWORD *)v8 + 32LL))(
                                                  v8,
                                                  &v10);
  }
}
