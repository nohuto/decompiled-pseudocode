/*
 * XREFs of ??0StoredFailureInfo@wil@@QEAA@AEBUFailureInfo@1@@Z @ 0x1801A8B84
 * Callers:
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A8050 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@t.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD83C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180020060 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 */

wil::StoredFailureInfo *__fastcall wil::StoredFailureInfo::StoredFailureInfo(
        wil::StoredFailureInfo *this,
        const struct wil::FailureInfo *a2)
{
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  wil::StoredFailureInfo::SetFailureInfo(this, a2);
  return this;
}
