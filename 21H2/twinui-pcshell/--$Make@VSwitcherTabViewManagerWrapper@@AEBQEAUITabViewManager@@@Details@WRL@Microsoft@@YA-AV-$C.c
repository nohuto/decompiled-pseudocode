/*
 * XREFs of ??$Make@VSwitcherTabViewManagerWrapper@@AEBQEAUITabViewManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VSwitcherTabViewManagerWrapper@@@12@AEBQEAUITabViewManager@@@Z @ 0x1803F6E7C
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1803F7DFC (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@Z @ 0x1802270F4 (-Attach@-$ComPtr@VIImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@@WRL@Micros.c)
 *     ??0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z @ 0x18036B28C (--0SwitcherTabViewManagerWrapper@@QEAA@PEAUITabViewManager@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<SwitcherTabViewManagerWrapper,ITabViewManager * const &>(
        __int64 *a1,
        struct ITabViewManager **a2)
{
  SwitcherTabViewManagerWrapper *v4; // rax
  SwitcherTabViewManagerWrapper *v5; // rax

  *a1 = 0LL;
  v4 = (SwitcherTabViewManagerWrapper *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = SwitcherTabViewManagerWrapper::SwitcherTabViewManagerWrapper(v4, *a2);
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler>::Attach(
      a1,
      (__int64)v5);
  }
  return a1;
}
