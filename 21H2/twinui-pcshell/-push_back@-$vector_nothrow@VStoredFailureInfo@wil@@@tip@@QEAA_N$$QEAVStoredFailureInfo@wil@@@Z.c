/*
 * XREFs of ?push_back@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N$$QEAVStoredFailureInfo@wil@@@Z @ 0x1800ADABC
 * Callers:
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ?NotifyFailure@?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@EEAA_NAEBUFailureInfo@wil@@@Z @ 0x1800A8070 (-NotifyFailure@-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@t.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD85C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18002DC64 (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N_K@Z @ 0x1800ADDF4 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N_K@Z.c)
 */

char __fastcall tip::vector_nothrow<wil::StoredFailureInfo>::push_back(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rdx
  char v6; // al

  v2 = a1[1];
  if ( a1[2] < v2 )
  {
    v6 = 1;
  }
  else
  {
    v5 = 2 * v2;
    if ( !v2 )
      v5 = 10LL;
    v6 = tip::vector_nothrow<wil::StoredFailureInfo>::reserve(a1, v5);
  }
  if ( !v6 )
    return 0;
  wil::StoredFailureInfo::StoredFailureInfo(*a1 + 160LL * a1[2]++, a2);
  return 1;
}
