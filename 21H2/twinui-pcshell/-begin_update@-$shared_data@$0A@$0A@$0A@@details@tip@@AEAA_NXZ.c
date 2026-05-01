/*
 * XREFs of ?begin_update@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AB9A4
 * Callers:
 *     ??0?$test_data_control@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1800A0E10 (--0-$test_data_control@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@@tip@.c)
 *     ?log_failure@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z @ 0x1800AD85C (-log_failure@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXAEBUFailureInfo@wil@@@Z.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@1@XZ @ 0x1800D3978 (--C-$tip_test@V-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA-AV-$.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@1@XZ @ 0x1800D4BEC (--C-$tip_test@V-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@@tip@@QEAA-.c)
 *     ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@@tip@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180135598 (--0-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 * Callees:
 *     <none>
 */

bool __fastcall tip::details::shared_data<0,0,0>::begin_update(__int64 a1)
{
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 192));
  return (*(_DWORD *)(a1 + 64) & 0x100) == 0;
}
