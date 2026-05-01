/*
 * XREFs of ?RuntimeClassInitialize@MultitaskingViewDismissalAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x180421B34
 * Callers:
 *     ??$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewDismissalAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewAnimation@@@Z @ 0x18040CF74 (--$MakeAndInitialize@VSnapAssistViewDismissalAnimationCoordinator@@V1@AEAPEAUIWeakReference@Weak.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9AF8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ @ 0x180420F18 (-RuntimeClassInitialize@MultitaskingViewAnimationCoordinatorBase@@QEAAJXZ.c)
 */

__int64 __fastcall MultitaskingViewDismissalAnimationCoordinator::RuntimeClassInitialize(
        MultitaskingViewDismissalAnimationCoordinator *this,
        struct IWeakReference *a2,
        struct IMultitaskingViewAnimation *a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v7 = MultitaskingViewAnimationCoordinatorBase::RuntimeClassInitialize(this, (__int64)a2, (__int64)a3, a4);
  v8 = v7;
  if ( v7 >= 0 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 7, (__int64)a2);
    Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)this + 12, (__int64)a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewdismissalanimationcoordinator.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
