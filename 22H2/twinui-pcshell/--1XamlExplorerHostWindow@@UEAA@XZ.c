/*
 * XREFs of ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x180364840
 * Callers:
 *     ??_GXamlExplorerHostWindow@@UEAAPEAXI@Z @ 0x18035CF20 (--_GXamlExplorerHostWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x18036416C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___ @ 0x1803643C8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHostWindow::~XamlExplorerHostWindow(XamlExplorerHostWindow *this)
{
  XamlExplorerHostWindow *v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rax
  const char *v5; // r9
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this;
  *(_QWORD *)this = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( *((_QWORD *)this + 9) )
  {
    try
    {
      v2 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v3 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___(v2);
      v4 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)v1 + 9), 0LL, (__int64)v3);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      if ( v3 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x21,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
        v5);
      v1 = this;
    }
  }
  v6 = *((_QWORD *)v1 + 9);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 6);
  *((_DWORD *)v1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v1 + 4);
}
