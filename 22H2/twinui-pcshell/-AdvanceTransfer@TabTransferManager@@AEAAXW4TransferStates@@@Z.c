/*
 * XREFs of ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x1802FDFCC
 * Callers:
 *     _lambda_101c7afbd5e76fc2a50976d3f19be39a_::operator() @ 0x1802FD1B0 (_lambda_101c7afbd5e76fc2a50976d3f19be39a_--operator().c)
 *     _lambda_11f4e68007e87e41ff887ccfc1974ff4_::operator() @ 0x1802FD258 (_lambda_11f4e68007e87e41ff887ccfc1974ff4_--operator().c)
 *     _lambda_63df1022615e5d58b392f54f931127cc_::operator() @ 0x1802FD740 (_lambda_63df1022615e5d58b392f54f931127cc_--operator().c)
 *     _lambda_6fa5311f677dfb1ca9719d5bf83446d7_::operator() @ 0x1802FD94C (_lambda_6fa5311f677dfb1ca9719d5bf83446d7_--operator().c)
 *     _lambda_70c1c60e35f2cf7099057459f26c5cae_::operator() @ 0x1802FDA90 (_lambda_70c1c60e35f2cf7099057459f26c5cae_--operator().c)
 *     _lambda_9021e371823eada98c7d436cf04d8c07_::operator() @ 0x1802FDB64 (_lambda_9021e371823eada98c7d436cf04d8c07_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___::Run @ 0x1802FFF90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c0a2f07679fb06ed1e26642539d8e628___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x1802FCC80 (--$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z.c)
 *     ?PerformCancel@TabTransferManager@@AEAAX_N@Z @ 0x1802FEFE0 (-PerformCancel@TabTransferManager@@AEAAX_N@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x1802FF124 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x1802FF794 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 *     ?PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802FFB04 (-PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabTransferManager::AdvanceTransfer(__int64 a1, unsigned int a2)
{
  int v4; // ecx
  int v5; // edx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, int *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **); // rbx
  int v8; // eax
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v15; // r8d
  int v16; // eax
  int v17[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct Windows::Internal::ComposableShell::Tabs::IShellTab *v19; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+48h] [rbp+10h] BYREF

  v4 = *(_DWORD *)(a1 + 284);
  if ( (a2 & v4) != a2 && ((v4 & 1) != 0 || a2 == 1) )
  {
    v20 = a2;
    TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>(&v20);
    *(_DWORD *)(a1 + 284) |= a2;
    v5 = *(_DWORD *)(a1 + 284);
    if ( a2 == 2 )
    {
      v19 = 0LL;
      v6 = *(_QWORD *)(a1 + 72);
      v7 = *(__int64 (__fastcall **)(__int64, int *, struct Windows::Internal::ComposableShell::Tabs::IShellTab **))(*(_QWORD *)v6 + 96LL);
      wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)&v19);
      *(_OWORD *)v17 = *(_OWORD *)(a1 + 192);
      v8 = v7(v6, v17, &v19);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          147LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      if ( !v19 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          148LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)0x80070490LL);
        __debugbreak();
      }
      TabTransferManager::PrepareTabAndViewForDrag((TabTransferManager *)a1, v19);
      v9 = *(__int64 **)(a1 + 88);
      v10 = *v9;
      v11 = (unsigned int)~*(_DWORD *)(a1 + 280);
      *(_OWORD *)v17 = *(_OWORD *)(a1 + 192);
      v12 = (*(__int64 (__fastcall **)(__int64 *, int *, __int64))(v10 + 48))(v9, v17, v11);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          153LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
          (const char *)(unsigned int)v12);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
      v5 = *(_DWORD *)(a1 + 284);
    }
    v14 = v5;
    v15 = v5;
    if ( (v5 & 0x10) == 0 )
    {
      v13 = *(_BYTE *)(a1 + 253) != 0 ? 14 : 10;
      if ( (v5 & v13) == v13 )
      {
        TabTransferManager::PerformDrop((TabTransferManager *)a1);
        v15 = *(_DWORD *)(a1 + 284);
        v14 = v15;
      }
    }
    v16 = 48;
    if ( *(_BYTE *)(a1 + 252) )
    {
      v14 = v15;
      if ( (v15 & 0x100) != 0 )
        v16 = 560;
    }
    if ( (v14 & 0x40) == 0 && (v16 & v14) == v16 )
      TabTransferManager::PerformComplete((TabTransferManager *)a1);
  }
  else
  {
    TabTransferManager::PerformCancel((TabTransferManager *)a1, 0);
  }
}
