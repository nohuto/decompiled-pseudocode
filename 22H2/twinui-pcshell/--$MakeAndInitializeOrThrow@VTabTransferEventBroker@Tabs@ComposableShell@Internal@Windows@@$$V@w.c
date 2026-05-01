/*
 * XREFs of ??$MakeAndInitializeOrThrow@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@$$V@wil@@YA?AV?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x1802F9140
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x1802E6974 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802F8FA8 (--$MakeAndInitialize@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@V12345@$$V@D.c)
 *     ?InternalRelease@?$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F99F8 (-InternalRelease@-$ComPtr@VTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@WRL@Mi.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(
        __int64 *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker>::InternalRelease(a1);
  v2 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker,>(a1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  return a1;
}
