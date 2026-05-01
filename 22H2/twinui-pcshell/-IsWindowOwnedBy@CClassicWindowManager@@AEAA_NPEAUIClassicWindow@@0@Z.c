/*
 * XREFs of ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x1801D318C
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___ @ 0x1801D1D28 (CClassicWindowManager--ForEachWindow__lambda_46f4ed7ab3f2eec376581f58c5e1fb12___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007F418 (--4-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CClassicWindowManager::IsWindowOwnedBy(
        CClassicWindowManager *this,
        struct IClassicWindow *a2,
        struct IClassicWindow *a3)
{
  struct IClassicWindow *v5; // rbx
  char v6; // di
  __int64 *v7; // rax
  CClassicWindowManager *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v5 = *(struct IClassicWindow **)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 96LL))(a2);
  v9 = v5;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
  v6 = 0;
  while ( v5 && a2 != v5 )
  {
    if ( v5 == a3 )
    {
      v6 = 1;
      break;
    }
    v7 = (__int64 *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v5 + 96LL))(v5);
    Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::operator=((__int64 *)&v9, v7);
    v5 = v9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  return v6;
}
