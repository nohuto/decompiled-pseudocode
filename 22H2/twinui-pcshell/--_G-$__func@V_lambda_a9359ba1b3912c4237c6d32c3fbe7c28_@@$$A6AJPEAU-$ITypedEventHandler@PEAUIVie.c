/*
 * XREFs of ??_G?$__func@V_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAPEAXI@Z @ 0x1802C8EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ @ 0x1802BF090 (-InternalRelease@-$ComPtr@VPresentationReadyChangedEventArgs@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C7520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C7520.c)
 */

__int64 *__fastcall wistd::__function::__func<_lambda_a9359ba1b3912c4237c6d32c3fbe7c28_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::ComPtr<PresentationReadyChangedEventArgs>::InternalRelease(a1 + 2);
  v4 = a1[1];
  if ( v4 )
  {
    a1[1] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(v4);
  }
  *a1 = (__int64)&wistd::__function::__base<long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::ITitleBarChangedEventArgs *> *)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
