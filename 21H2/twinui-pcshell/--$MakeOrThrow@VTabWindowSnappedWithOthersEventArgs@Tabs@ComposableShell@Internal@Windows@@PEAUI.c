/*
 * XREFs of ??$MakeOrThrow@VTabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@PEAUIShellTab@2345@PEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@5@@wil@@YA?AV?$ComPtr@VTabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@$$QEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@$$QEAPEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@8@@Z @ 0x180309B98
 * Callers:
 *     ?WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicationView@@W4WINDOW_SNAP_STATE@@@Z @ 0x18030C980 (-WindowSnapStateChanged@TabSetMediator@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAUIApplicat.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A60 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802C10D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVie_ea_1802C10D0.c)
 *     ??0TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIShellTab@1234@PEAU?$IVectorView@PEAVShellTab@Tabs@ComposableShell@Internal@Windows@@@Collections@Foundation@4@@Z @ 0x18030A440 (--0TabWindowSnappedWithOthersEventArgs@Tabs@ComposableShell@Internal@Windows@@QEAA@PEAUIShellTab.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs,Windows::Internal::ComposableShell::Tabs::IShellTab *,Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Tabs::ShellTab *> *>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v6; // rax
  const char *v7; // r9
  __int64 v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v6 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs::TabWindowSnappedWithOthersEventArgs(
           v6,
           *a2,
           *a3);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v8;
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v7);
    __debugbreak();
  }
  return a1;
}
