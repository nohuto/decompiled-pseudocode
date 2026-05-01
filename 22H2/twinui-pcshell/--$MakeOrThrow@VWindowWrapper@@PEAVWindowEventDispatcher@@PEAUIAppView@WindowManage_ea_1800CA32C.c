/*
 * XREFs of ??$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x1800CA32C
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180029070 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180022D00 (--$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationMode.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180097A40 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10)
{
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      56LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v11);
    __debugbreak();
  }
  return a1;
}
