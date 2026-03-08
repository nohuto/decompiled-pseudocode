/*
 * XREFs of ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A1E8C
 * Callers:
 *     CHolographicInteropTaskQueue::ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___ @ 0x1802A0B2C (CHolographicInteropTaskQueue--ProcessPendingMessages__lambda_db6293ec4389496e05a5db7898b72386___.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800C6314 (-AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z @ 0x1802A2248 (-HolographicInteropTargetCreated_@CompositorTracing@@QEAAXAEBU_LUID@@@Z.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x1802A5B70 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicManager::EnsureInteropRenderTarget(struct CComposition **this)
{
  struct _LUID *v1; // rsi
  unsigned int v2; // edi
  struct CHolographicInteropTarget **v4; // r14
  int v5; // eax
  __int64 v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx
  __int64 v8; // rcx
  CompositorTracing *v9; // rcx

  v1 = (struct _LUID *)((char *)this + 68);
  v2 = 0;
  if ( *((_DWORD *)this + 17) == g_luidZero.LowPart && *((_DWORD *)this + 18) == g_luidZero.HighPart
    || !*((_BYTE *)this + 240) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147467259, 0x3DCu, 0LL);
  }
  else
  {
    v4 = this + 4;
    if ( !this[4] )
    {
      v5 = CHolographicInteropTarget::Create(this[3], v1, v4);
      v2 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x3E1u, 0LL);
      }
      else
      {
        CRenderTargetManager::AddRenderTarget(*((CRenderTargetManager **)this[3] + 27), *v4);
        v7 = this[6];
        if ( v7 && *((_BYTE *)this + 240) )
          CHolographicInteropTaskQueue::PostMessageW(v7, 0x14u, (struct IUnknown *)*v4, 0LL, 0LL, 0LL, 0LL);
        if ( CompositorTracing::IsEnabled((__int64)v7) )
        {
          wil::details::static_lazy<CompositorTracing>::get(
            v8,
            (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
          CompositorTracing::HolographicInteropTargetCreated_(v9, v1);
        }
      }
    }
  }
  return v2;
}
