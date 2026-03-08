/*
 * XREFs of ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x1802A287C
 * Callers:
 *     ?DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802A40E0 (-DetachFromChannel@CHolographicComposition@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ @ 0x1802A1830 (-DwmHolographicCompositionRemove_@CompositorTracing@@QEAAXXZ.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::RemoveHolographicComposition(
        CHolographicManager *this,
        struct CHolographicComposition *a2)
{
  __int64 v4; // rcx
  CompositorTracing *v5; // rcx
  CHolographicInteropTaskQueue *v6; // rcx

  if ( *((_BYTE *)this + 240) )
  {
    *((_BYTE *)this + 240) = 0;
    if ( CompositorTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v4,
        (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicCompositionRemove_(v5);
    }
    v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
    if ( v6 )
      CHolographicInteropTaskQueue::PostMessageW(
        v6,
        0xAu,
        (struct IUnknown *)(((unsigned __int64)a2 + 72) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
