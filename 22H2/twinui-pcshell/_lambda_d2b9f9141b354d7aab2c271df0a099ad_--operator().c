/*
 * XREFs of _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator() @ 0x180136DF8
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___ @ 0x180132928 (_anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___.c)
 *     _lambda_45e2c74cd21d3bb3db90a0d12fd30472_::operator() @ 0x180136960 (_lambda_45e2c74cd21d3bb3db90a0d12fd30472_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180135460 (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135DA0 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180145188 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x18014FF90 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180158300 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator()(__int64 a1)
{
  __int64 *v2; // rax
  int v3; // eax
  __int64 v4; // r9
  _QWORD *v5; // rax
  struct CPinnedList *v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  const char *v11; // r9
  struct CPinnedList *v12; // [rsp+30h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-50h]
  _OWORD v14[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+70h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v13 = a1;
  memset(v14, 0, sizeof(v14));
  v15 = 0LL;
  v2 = (__int64 *)tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(*(_QWORD *)a1);
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (struct wil::details::IFailureCallback *)v14,
    v2);
  v12 = 0LL;
  v3 = CTaskbandPin_CreateInstance(&v12);
  try
  {
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        127LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v3);
    }
    else
    {
      v4 = **(unsigned int **)(a1 + 16);
      v5 = *(_QWORD **)(a1 + 8);
      v6 = v12;
      v7 = CPinnedList::InternalModify(v12, 0LL, *v5, v4, 0);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        if ( v6 )
          winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v12);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      128LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180136EEALL);
  }
  catch ( ... )
  {
    v9 = v13;
    **(_DWORD **)(v9 + 24) = wil::ResultFromCaughtException(v8);
    LODWORD(v9) = **(_DWORD **)(v9 + 24);
    tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v12,
      &v15);
    *((_DWORD *)v12 + 87) = v9;
    tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (void **)&v12,
      v10);
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x86,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v11);
  }
LABEL_13:
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v14);
}
