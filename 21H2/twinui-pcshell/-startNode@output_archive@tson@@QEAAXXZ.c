/*
 * XREFs of ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0
 * Callers:
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@1@@Z @ 0x18009D3C8 (--$-RV-$nvp@AEAU-$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@ou.c)
 *     ??$?RV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009D4F4 (--$-RV-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEADP6AXPE.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F264 (--$process@V-$nvp@AEAV-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@tson@@V-$nvp@AEAV-$vector_.c)
 *     ?serialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE830 (-serialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVoutput_archiv.c)
 *     ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE8D0 (-serialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_ar.c)
 *     ?serialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800C12A0 (-serialize@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W.c)
 *     ??$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTest@SwitcherTip@@@Z @ 0x1800D35CC (--$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTe.c)
 *     ?serialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4900 (-serialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_arc.c)
 *     ??$?RV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@1@@Z @ 0x1800D4988 (--$-RV-$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 *     ?serialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4E10 (-serialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput.c)
 *     ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180146320 (-serialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAV.c)
 * Callees:
 *     ?write_name@output_archive@tson@@AEAA_N_N@Z @ 0x1800AF218 (-write_name@output_archive@tson@@AEAA_N_N@Z.c)
 */

void __fastcall tson::output_archive::startNode(tson::output_archive *this)
{
  unsigned __int64 v2; // rax

  tson::output_archive::write_name(this, 0);
  v2 = *((_QWORD *)this + 16);
  if ( v2 >= 0x19 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    *((_DWORD *)this + v2 + 7) = 0;
    ++*((_QWORD *)this + 16);
  }
}
