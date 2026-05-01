/*
 * XREFs of ??$MakeAndInitialize@VMultitaskingViewGestureHandler@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingViewGestureHandler@@AEAPEAUIMultitaskingViewTaskScheduler@@AEAPEAUIMultitaskingViewVisibilityService@@@Z @ 0x1803F2034
 * Callers:
 *     ?MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@AEBU_GUID@@PEAPEAX@Z @ 0x1803F2F38 (-MultitaskingViewGestureHandler_CreateInstance@@YAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMult.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpadGesture@@U?$ChainInterfaces@UIVirtualDesktopGestureHandlerPrivate@@UIVirtualDesktopGestureHandler@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801CC434 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UITouchpad.c)
 *     ??0MultitaskingViewGestureHandler@@QEAA@XZ @ 0x1803F232C (--0MultitaskingViewGestureHandler@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x1803F2EB8 (-InternalRelease@-$ComPtr@VMultitaskingViewGestureHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@@PEAUIMultitaskingViewVisibilityService@@@Z @ 0x1803F34A0 (-RuntimeClassInitialize@MultitaskingViewGestureHandler@@QEAAJPEAUIMultitaskingViewTaskScheduler@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MultitaskingViewGestureHandler,MultitaskingViewGestureHandler,IMultitaskingViewTaskScheduler * &,IMultitaskingViewVisibilityService * &>(
        __int64 *a1,
        struct IMultitaskingViewTaskScheduler **a2,
        struct IMultitaskingViewVisibilityService **a3)
{
  MultitaskingViewGestureHandler *v6; // rax
  int v7; // ebx
  MultitaskingViewGestureHandler *v8; // rax
  struct IMultitaskingViewVisibilityService *v9; // r8
  struct IMultitaskingViewTaskScheduler *v10; // rdx
  __int64 v11; // rdi
  volatile int *v12; // rdx
  MultitaskingViewGestureHandler *v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (MultitaskingViewGestureHandler *)operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = MultitaskingViewGestureHandler::MultitaskingViewGestureHandler(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = (__int64)v8;
    v14 = v8;
    v7 = MultitaskingViewGestureHandler::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ITouchpadGesture,Microsoft::WRL::ChainInterfaces<IVirtualDesktopGestureHandlerPrivate,IVirtualDesktopGestureHandler,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::InternalAddRef(
          v11,
          v12);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<MultitaskingViewGestureHandler>::InternalRelease(&v14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
