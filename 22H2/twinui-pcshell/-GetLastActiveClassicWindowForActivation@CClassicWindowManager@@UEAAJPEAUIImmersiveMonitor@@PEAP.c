/*
 * XREFs of ?GetLastActiveClassicWindowForActivation@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x18005AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18005ABC0 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicWindowForActivation(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        HWND *a3)
{
  CClassicWindowManager *v5; // rbp
  int LastActiveClassicWindowWithValidation; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF
  struct IClassicWindow *v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v5 = (CClassicWindowManager *)((char *)this - 72);
  while ( 1 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
    LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(
                                              v5,
                                              a2,
                                              &v9);
    if ( LastActiveClassicWindowWithValidation >= 0 )
      LastActiveClassicWindowWithValidation = (*(__int64 (__fastcall **)(struct IClassicWindow *, HWND *, int *))(*(_QWORD *)v9 + 40LL))(
                                                v9,
                                                a3,
                                                &v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v9);
    if ( LastActiveClassicWindowWithValidation < 0 )
      break;
    if ( v8 )
      return (unsigned int)LastActiveClassicWindowWithValidation;
  }
  *a3 = 0LL;
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
