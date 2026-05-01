/*
 * XREFs of ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A80D0
 * Callers:
 *     <none>
 * Callees:
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD83C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 */

char __fastcall tip::test_watcher<tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::NotifyFailure(
        __int64 a1)
{
  tip::details::shared_data<0,0,0>::log_failure(*(_QWORD *)(a1 + 48) + 8LL);
  return 0;
}
