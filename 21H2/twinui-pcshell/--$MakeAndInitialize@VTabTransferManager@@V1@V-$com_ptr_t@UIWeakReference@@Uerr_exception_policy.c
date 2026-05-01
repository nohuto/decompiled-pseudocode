/*
 * XREFs of ??$MakeAndInitialize@VTabTransferManager@@V1@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Details@WRL@Microsoft@@YAJPEAPEAVTabTransferManager@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@789Windows@@AEAPEAUITabTransferEventBroker@789Windows@@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x1802FC91C
 * Callers:
 *     ??$MakeAndInitializeOrThrow@VTabTransferManager@@V?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@5678@AEAPEAUITabTransferEventBroker@5678@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@wil@@YA?AV?$ComPtr@VTabTransferManager@@@WRL@Microsoft@@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITabTransferEventBroker@6789@AEAPEAUIUnknown@@AEAPEAUIPrivilegedForegroundOperations@@@Z @ 0x1802FCA08 (--$MakeAndInitializeOrThrow@VTabTransferManager@@V-$com_ptr_t@UIWeakReference@@Uerr_exception_po.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0TabTransferManager@@QEAA@XZ @ 0x1802FD0C0 (--0TabTransferManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TabTransferManager@@QEAAJV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITabTransferEventBroker@5678@PEAUIUnknown@@PEAUIPrivilegedForegroundOperations@@@Z @ 0x180300284 (-RuntimeClassInitialize@TabTransferManager@@QEAAJV-$com_ptr_t@UIWeakReference@@Uerr_exception_po.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabTransferManager,TabTransferManager,wil::com_ptr_t<IWeakReference,wil::err_exception_policy>,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &,IUnknown * &,IPrivilegedForegroundOperations * &>(
        TabTransferManager **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7)
{
  TabTransferManager *v11; // rax
  int v12; // edi
  TabTransferManager *v13; // rbx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-40h]
  __int64 v20; // [rsp+30h] [rbp-38h]
  TabTransferManager *v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (TabTransferManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = TabTransferManager::TabTransferManager(v11);
    v14 = *a4;
    v15 = *a3;
    v21 = v13;
    v20 = *a7;
    v19 = *a6;
    v16 = *a5;
    v17 = *a2;
    *a2 = 0LL;
    v22 = v17;
    v12 = TabTransferManager::RuntimeClassInitialize((_DWORD)v13, (unsigned int)&v22, v15, v14, v16, v19, v20);
    if ( v12 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(TabTransferManager *))(*(_QWORD *)v13 + 8LL))(v13);
      *a1 = v13;
      v12 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
