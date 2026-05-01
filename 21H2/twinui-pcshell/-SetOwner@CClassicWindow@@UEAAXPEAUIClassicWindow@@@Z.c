/*
 * XREFs of ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x1801D3A40
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x18007A580 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z @ 0x18007A6D0 (-s_ShouldShowInSwitchers@CClassicWindow@@CA_NW4CLASSIC_WINDOW_STATE@@@Z.c)
 *     ??4?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007E950 (--4-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1801D345C (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 */

void __fastcall CClassicWindow::SetOwner(CClassicWindow *this, struct IClassicWindow *a2)
{
  __int64 *v2; // rbx
  __int64 v4; // rsi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 64);
  v4 = *((_QWORD *)this + 8);
  v6 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v2);
  if ( a2 )
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::operator=(v2, (__int64)a2);
  if ( v4 != *v2 && CClassicWindow::s_ShouldShowInSwitchers(*((_DWORD *)this + 18)) )
    RaiseApplicationViewChangeNotification((__int64)this, 17);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v6);
}
