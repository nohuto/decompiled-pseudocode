/*
 * XREFs of ?Release@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@AEAAKXZ @ 0x1800C0384
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BF178 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BF1DC (--4-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil.c)
 *     ??4?$tip_test@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z @ 0x1800BF22C (--4-$tip_test@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@@tip@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C1270 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@Uerr_returncode_policy.c)
 * Callees:
 *     ??1?$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ @ 0x1800A1408 (--1-$shared_data@$00$0A@$0A@@details@tip@@QEAA@XZ.c)
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ @ 0x1800AD8CC (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip@@IEAAXXZ.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    *(_QWORD *)pv = &tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::`vftable';
    tip::details::shared_data<1,0,0>::on_destroy((__int64)(pv + 2));
    tip::details::shared_data<1,0,0>::~shared_data<1,0,0>((__int64)(pv + 2));
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
