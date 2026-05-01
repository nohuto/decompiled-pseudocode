/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUIApplicationTargetingTracker@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1803F5D14
 * Callers:
 *     ?CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F62CC (-CMultitaskingViewHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIImme.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801CC434 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x1803F5ED0 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F668C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIImmersiveMonitorManager@@PEAUIApplicationTargetingTracker@@PEAUIMultitaskingViewTaskScheduler@@PEAUIApplicationViewCollection@@@Z @ 0x1803F68F0 (-RuntimeClassInitialize@CMultitaskingViewHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewHotKeyHandler,CMultitaskingViewHotKeyHandler,IImmersiveWindowMessageService * &,IImmersiveMonitorManager * &,IApplicationTargetingTracker * &,IMultitaskingViewTaskScheduler * &,IApplicationViewCollection * &>(
        CMultitaskingViewHotKeyHandler **a1,
        struct IImmersiveWindowMessageService **a2,
        struct IImmersiveMonitorManager **a3,
        struct IApplicationTargetingTracker **a4,
        struct IMultitaskingViewTaskScheduler **a5,
        struct IApplicationViewCollection **a6)
{
  CMultitaskingViewHotKeyHandler *v10; // rax
  int v11; // ebx
  CMultitaskingViewHotKeyHandler *v12; // rdi
  struct IApplicationTargetingTracker *v13; // r9
  struct IImmersiveMonitorManager *v14; // r8
  volatile int *v15; // rdx
  CMultitaskingViewHotKeyHandler *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CMultitaskingViewHotKeyHandler *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = CMultitaskingViewHotKeyHandler::CMultitaskingViewHotKeyHandler(v10);
    v13 = *a4;
    v14 = *a3;
    v17 = v12;
    v11 = CMultitaskingViewHotKeyHandler::RuntimeClassInitialize(v12, *a2, v14, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
          (__int64)v12,
          v15);
      *a1 = v12;
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
