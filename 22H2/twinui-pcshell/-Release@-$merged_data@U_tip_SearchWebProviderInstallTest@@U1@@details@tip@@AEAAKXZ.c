/*
 * XREFs of ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@AEAAKXZ @ 0x1800A86B8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A1374 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returnco.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800AC414 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800ADF90 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_retu.c)
 * Callees:
 *     ??_G?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z @ 0x1800A1E50 (--_G-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 106);
  if ( !v2 )
  {
    tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::`scalar deleting destructor'(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
