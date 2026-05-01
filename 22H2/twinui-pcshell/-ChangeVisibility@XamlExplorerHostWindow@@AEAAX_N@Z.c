/*
 * XREFs of ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x180364DF0
 * Callers:
 *     ?Hide@XamlExplorerHostWindow@@UEAAXXZ @ 0x180365080 (-Hide@XamlExplorerHostWindow@@UEAAXXZ.c)
 *     ?Show@XamlExplorerHostWindow@@UEAAXXZ @ 0x180365490 (-Show@XamlExplorerHostWindow@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x18036416C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x180364650 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x18036503C (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHostWindow::ChangeVisibility(XamlExplorerHostWindow *this, char a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  XamlExplorerHostWindow *v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+28h] [rbp-30h]
  XamlExplorerHostWindow *v11; // [rsp+30h] [rbp-28h] BYREF
  XamlExplorerHostWindow *v12; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v13; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h]

  if ( a2 )
    XamlExplorerHostWindow::Cloak(this);
  if ( *((_QWORD *)this + 9) )
  {
    v12 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
    v4 = *((_QWORD *)this + 9);
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v13 = v5;
    v9 = this;
    v10 = a2;
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___(
           v5,
           (__int64)&v9);
    v13 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(v4, 0LL, (__int64)v6);
    v8 = v7;
    v14 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v6 + 16LL))(v6, v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  }
}
