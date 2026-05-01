/*
 * XREFs of ??$MakeAndInitialize@VSnapAssistViewInvocationAnimationCoordinator@@V1@AEAPEAUIWeakReference@WeakReference@@$$T@Details@WRL@Microsoft@@YAJPEAPEAVSnapAssistViewInvocationAnimationCoordinator@@AEAPEAUIWeakReference@WeakReference@@$$QEA$$T@Z @ 0x18040CE04
 * Callers:
 *     ?SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18040D184 (-SnapAssistViewInvocationAnimationCoordinator_CreateInstance@@YAJPEAUIWeakReference@WeakReferenc.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ @ 0x18040CEAC (--0SnapAssistViewInvocationAnimationCoordinator@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewAnimation@@@Z @ 0x18041F94C (-RuntimeClassInitialize@MultitaskingViewInvocationAnimationCoordinator@@QEAAJPEAUIWeakReference@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SnapAssistViewInvocationAnimationCoordinator,SnapAssistViewInvocationAnimationCoordinator,WeakReference::IWeakReference * &,std::nullptr_t>(
        MultitaskingViewInvocationAnimationCoordinator **a1,
        struct IWeakReference **a2,
        struct IMultitaskingViewAnimation **a3)
{
  SnapAssistViewInvocationAnimationCoordinator *v6; // rax
  int v7; // edi
  MultitaskingViewInvocationAnimationCoordinator *v8; // rax
  struct IMultitaskingViewAnimation *v9; // r8
  struct IWeakReference *v10; // rdx
  MultitaskingViewInvocationAnimationCoordinator *v11; // rbx
  MultitaskingViewInvocationAnimationCoordinator *v13; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (SnapAssistViewInvocationAnimationCoordinator *)operator new(
                                                         0xE8uLL,
                                                         (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = SnapAssistViewInvocationAnimationCoordinator::SnapAssistViewInvocationAnimationCoordinator(v6);
    v9 = *a3;
    v10 = *a2;
    v11 = v8;
    v13 = v8;
    v7 = MultitaskingViewInvocationAnimationCoordinator::RuntimeClassInitialize(v8, v10, v9);
    if ( v7 >= 0 )
    {
      if ( v11 )
        (*(void (__fastcall **)(MultitaskingViewInvocationAnimationCoordinator *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      v7 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
