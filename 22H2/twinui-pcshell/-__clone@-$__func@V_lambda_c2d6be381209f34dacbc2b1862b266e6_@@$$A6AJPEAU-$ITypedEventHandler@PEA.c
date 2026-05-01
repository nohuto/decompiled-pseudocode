/*
 * XREFs of ?__clone@?$__func@V_lambda_c2d6be381209f34dacbc2b1862b266e6_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x1802C4F40
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIPortableViewHostItem@5678@UIApplicationViewBackedViewHostItemPrivate@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@UIKeepAliveView@234@VTreeNodeBase@234@@23@UIImmersiveShellHookNotification@@UIApplicationViewChangeListener@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C8B80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holo.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801B05E0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

signed __int64 __fastcall wistd::__function::__func<_lambda_c2d6be381209f34dacbc2b1862b266e6_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  signed __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  signed __int64 v7; // rtt

  result = (signed __int64)&wistd::__function::__func<_lambda_c2d6be381209f34dacbc2b1862b266e6_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  *a2 = &wistd::__function::__func<_lambda_c2d6be381209f34dacbc2b1862b266e6_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *)>::`vftable';
  v5 = *(_QWORD *)(a1 + 8);
  a2[1] = v5;
  if ( v5 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Windows::Internal::Shell::Holographic::IPortableViewHostItem,IApplicationViewBackedViewHostItemPrivate,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::IKeepAliveView,Windows::Internal::ComposableShell::TreeNodeBase>,IImmersiveShellHookNotification,IApplicationViewChangeListener,Microsoft::WRL::FtmBase>::AddRef(v5);
  v6 = *(_QWORD *)(a1 + 16);
  a2[2] = v6;
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 64);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v7 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), result + 1, result);
        if ( v7 != result )
          continue;
      }
      return result;
    }
    return Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
             (Microsoft::WRL::Details *)(2 * result + 16),
             (volatile int *)v6);
  }
  return result;
}
