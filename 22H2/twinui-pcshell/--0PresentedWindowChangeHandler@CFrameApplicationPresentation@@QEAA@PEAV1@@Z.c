/*
 * XREFs of ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x1801F867C
 * Callers:
 *     ?SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@PEAUHWND__@@@Z @ 0x1801F9C3C (-SetPresentingWindow@PresentedWindow@CFrameApplicationPresentation@@QEAAXPEAV2@PEAUITaskWindow@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180086554 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CFrameApplicationPresentation::PresentedWindowChangeHandler *__fastcall CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
        CFrameApplicationPresentation::PresentedWindowChangeHandler *this,
        struct CFrameApplicationPresentation *a2)
{
  __int64 *v3; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (__int64 *)(*(__int64 (__fastcall **)(struct CFrameApplicationPresentation *, __int64 *))(*(_QWORD *)a2 + 64LL))(
                    a2,
                    &v5);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=((__int64 *)this + 1, v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  return this;
}
