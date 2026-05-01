/*
 * XREFs of ??$MakeOrThrow@VApplicationViewBackedViewHostItem@@AEAVAsyncEventSerialInvocationContextToken@wil@@@wil@@YA?AV?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@AEAVAsyncEventSerialInvocationContextToken@0@@Z @ 0x1802C7264
 * Callers:
 *     ?CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA?AV?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@AEAVAsyncEventSerialInvocationContextToken@7@PEAUIServiceProvider@@@Z @ 0x1802C756C (-CreateForView@ViewHostItemFactory@Holographic@Shell@Internal@Windows@@YA-AV-$com_ptr_t@UIViewHo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIViewHostItem@Holographic@Shell@Internal@Windows@@UIViewHostItemAppViewInternal@5678@UIApplicationViewBackedViewHostItemPrivate@@UIImmersiveApplicationPresentationListener@@U?$Implements@UIForegroundTarget@ComposableShell@Internal@Windows@@UICoreForegroundTarget@Core@234@VTreeNodeBase@234@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C7790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C7790.c)
 *     ??0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z @ 0x1802C8A48 (--0ApplicationViewBackedViewHostItem@@QEAA@AEAVAsyncEventSerialInvocationContextToken@wil@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
ApplicationViewBackedViewHostItem **__fastcall wil::MakeOrThrow<ApplicationViewBackedViewHostItem,wil::AsyncEventSerialInvocationContextToken &>(
        ApplicationViewBackedViewHostItem **a1,
        struct wil::AsyncEventSerialInvocationContextToken *a2)
{
  ApplicationViewBackedViewHostItem *v4; // rax
  const char *v5; // r9
  ApplicationViewBackedViewHostItem *v6; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ApplicationViewBackedViewHostItem *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ApplicationViewBackedViewHostItem::ApplicationViewBackedViewHostItem(v4, a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Holographic::IViewHostItem,Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,IApplicationViewBackedViewHostItemPrivate,IImmersiveApplicationPresentationListener,Microsoft::WRL::Implements<Windows::Internal::ComposableShell::IForegroundTarget,Windows::Internal::ComposableShell::Core::ICoreForegroundTarget,Windows::Internal::ComposableShell::TreeNodeBase>,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v6;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
