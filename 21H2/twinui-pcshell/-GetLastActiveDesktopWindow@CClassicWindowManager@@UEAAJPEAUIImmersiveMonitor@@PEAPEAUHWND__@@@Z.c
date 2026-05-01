/*
 * XREFs of ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1801D2CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18005AC60 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveDesktopWindow(
        CClassicWindowManager *this,
        struct IUnknown *a2,
        HWND *a3)
{
  struct IClassicWindow *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
  CClassicWindowManager::_GetLastActiveClassicWindow((CClassicWindowManager *)((char *)this - 88), a2, &v7);
  *a3 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 24LL))(v7);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
