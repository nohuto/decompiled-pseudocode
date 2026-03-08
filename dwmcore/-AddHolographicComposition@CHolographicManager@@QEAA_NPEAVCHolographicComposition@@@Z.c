/*
 * XREFs of ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802A1224
 * Callers:
 *     ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x1802A41A8 (-ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICCOMPOS.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ @ 0x1802A17B8 (-DwmHolographicCompositionAdd_@CompositorTracing@@QEAAXXZ.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A1D18 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?InitializeClient@CHolographicManager@@AEAAXXZ @ 0x1802A22B8 (-InitializeClient@CHolographicManager@@AEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

bool __fastcall CHolographicManager::AddHolographicComposition(
        CHolographicManager *this,
        struct CHolographicComposition *a2)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  CompositorTracing *v7; // rcx
  bool v8; // zf

  if ( *((_BYTE *)this + 240) )
    return 0;
  if ( (int)CHolographicManager::EnsureHolographicClient(this) >= 0 )
  {
    *((_BYTE *)this + 240) = CHolographicInteropTaskQueue::PostMessageW(
                               *((CHolographicInteropTaskQueue **)this + 6),
                               9u,
                               (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
                               0LL,
                               0LL,
                               0LL,
                               0LL);
    if ( CompositorTracing::IsEnabled(v5) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v6,
        (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicCompositionAdd_(v7);
    }
    v8 = *((_BYTE *)this + 240) == 0;
    *((_DWORD *)this + 16) = DisplayId::Hmd;
    if ( !v8 )
      CHolographicManager::InitializeClient(this);
  }
  return *((_BYTE *)this + 240);
}
