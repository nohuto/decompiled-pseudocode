/*
 * XREFs of __lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator()_::_1_::catch$6 @ 0x180137074
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180135598 (--0-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@QEAA@XZ @ 0x180135ED8 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801BDB20 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18020EBCC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall _lambda_d2b9f9141b354d7aab2c271df0a099ad_::operator()_::_1_::catch_6(wil *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  const char *v5; // r9

  v3 = *(_QWORD *)(a2 + 56);
  **(_DWORD **)(v3 + 24) = wil::ResultFromCaughtException(a1);
  LODWORD(v3) = **(_DWORD **)(v3 + 24);
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (__int64 *)(a2 + 48),
    (__int64 *)(a2 + 112));
  *(_DWORD *)(*(_QWORD *)(a2 + 48) + 348LL) = v3;
  tip::test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (void **)(a2 + 48),
    v4);
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x86,
    (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    v5);
  return 0LL;
}
