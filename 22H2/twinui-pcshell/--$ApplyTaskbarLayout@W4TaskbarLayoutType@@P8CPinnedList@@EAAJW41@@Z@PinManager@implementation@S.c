/*
 * XREFs of ??$ApplyTaskbarLayout@W4TaskbarLayoutType@@P8CPinnedList@@EAAJW41@@Z@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAAJW4ApiType@PinManagerTipTests@@P8CPinnedList@@EAAJW4TaskbarLayoutType@@@Z1@Z @ 0x18012A060
 * Callers:
 *     ?ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4TaskbarLayoutType@@@Z @ 0x180137330 (-ApplyInPlaceTaskbarLayout@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJW4Taskba.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABB84 (-complete@-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QE.c)
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___ @ 0x180132588 (_anonymous_namespace_--RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180135AE0 (--1-$com_ptr_t@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135D68 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135DA0 (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@1@XZ @ 0x1801365B4 (--C-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@.c)
 *     ?CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@@Z @ 0x180137C6C (-CheckForTrustedCaller@PinManager@implementation@Shell@Internal@Windows@winrt@@AEAAXAEAV-$tip_te.c)
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@2@XZ @ 0x1801462E4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U1.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::ApplyTaskbarLayout<enum TaskbarLayoutType,long (CPinnedList::*)(enum TaskbarLayoutType)>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  _BYTE v7[16]; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v9; // [rsp+58h] [rbp+7h] BYREF
  int v10; // [rsp+60h] [rbp+Fh] BYREF
  _OWORD v11[3]; // [rsp+68h] [rbp+17h] BYREF
  __int64 v12; // [rsp+98h] [rbp+47h]
  int v13; // [rsp+D0h] [rbp+7Fh] BYREF

  v13 = a4;
  v9 = 0LL;
  *(_DWORD *)(*(_QWORD *)tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           &v9,
                           v7)
            + 264LL) = 6;
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
  *(_DWORD *)(*(_QWORD *)tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           &v9,
                           v7)
            + 336LL) = 1;
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
  *(_DWORD *)(*(_QWORD *)tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                           &v9,
                           v7)
            + 344LL) = 12;
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v7);
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  tip::tip_test<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::start_and_watch_errors(
    &v9,
    v11);
  winrt::Windows::Internal::Shell::implementation::PinManager::CheckForTrustedCaller(a1, &v9);
  v10 = 0;
  v8[0] = a3;
  v8[1] = &v13;
  v8[2] = &v10;
  anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___(v8);
  tip::tip_test<tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>>::complete(&v9);
  LODWORD(a1) = v10;
  tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v11);
  wil::com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>::~com_ptr_t<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>,wil::err_returncode_policy>(&v9);
  return (unsigned int)a1;
}
