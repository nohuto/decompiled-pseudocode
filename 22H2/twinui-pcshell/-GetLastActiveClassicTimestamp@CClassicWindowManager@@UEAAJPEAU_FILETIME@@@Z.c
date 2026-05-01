/*
 * XREFs of ?GetLastActiveClassicTimestamp@CClassicWindowManager@@UEAAJPEAU_FILETIME@@@Z @ 0x18005AAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18005ABC0 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CClassicWindowManager::GetLastActiveClassicTimestamp(
        CClassicWindowManager *this,
        struct _FILETIME *a2)
{
  CClassicWindowManager *v3; // rbx
  int LastActiveClassicWindowWithValidation; // ebx
  struct IClassicWindow *v6; // [rsp+30h] [rbp+8h] BYREF
  struct _FILETIME v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v3 = (CClassicWindowManager *)((char *)this - 72);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v6);
  LastActiveClassicWindowWithValidation = CClassicWindowManager::_GetLastActiveClassicWindowWithValidation(v3, 0LL, &v6);
  if ( LastActiveClassicWindowWithValidation >= 0 )
    (*(void (__fastcall **)(struct IClassicWindow *, struct _FILETIME *))(*(_QWORD *)v6 + 64LL))(v6, &v7);
  *a2 = v7;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v6);
  return (unsigned int)LastActiveClassicWindowWithValidation;
}
