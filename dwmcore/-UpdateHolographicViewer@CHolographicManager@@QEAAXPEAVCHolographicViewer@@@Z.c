/*
 * XREFs of ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802A2E44
 * Callers:
 *     ?OnChanged@CHolographicViewer@@AEAAXXZ @ 0x1802A86E0 (-OnChanged@CHolographicViewer@@AEAAXXZ.c)
 * Callees:
 *     ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FACA4 (-IsEnabled@CompositorTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FACE4 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 *     ?DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z @ 0x1802A1C80 (-DwmHolographicViewerUpdate_@CompositorTracing@@QEAAXI@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::UpdateHolographicViewer(CHolographicManager *this, struct CHolographicViewer *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  CompositorTracing *v6; // rcx
  CHolographicInteropTaskQueue *v7; // rcx

  if ( a2 )
  {
    v4 = *((_DWORD *)a2 + 20);
    if ( CompositorTracing::IsEnabled((__int64)this) )
    {
      wil::details::static_lazy<CompositorTracing>::get(
        v5,
        (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
      CompositorTracing::DwmHolographicViewerUpdate_(v6, v4);
    }
  }
  v7 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v7 )
    CHolographicInteropTaskQueue::PostMessageW(
      v7,
      0x19u,
      (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
      0LL,
      0LL,
      0LL,
      0LL);
}
