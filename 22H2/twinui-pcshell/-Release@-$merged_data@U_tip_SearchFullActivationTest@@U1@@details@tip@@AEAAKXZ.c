/*
 * XREFs of ?Release@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A8644
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A1354 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_p.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A1724 (--4-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_p.c)
 *     ??4?$test_watcher@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A178C (--4-$test_watcher@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAAEAV.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800ADF6C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@Uerr_returnco.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A13E8 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8AC (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(pv + 82);
  if ( !v2 )
  {
    *(_QWORD *)pv = &tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::`vftable';
    tip::details::shared_data<1,0,0>::on_destroy(pv + 2);
    std::wstring::_Tidy_deallocate((_QWORD *)pv + 35);
    tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(pv + 2));
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
