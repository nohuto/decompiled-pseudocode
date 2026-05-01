/*
 * XREFs of ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE84
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB44 (--$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@ti.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED24 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F1A8 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ?deserialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABE70 (-deserialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archi.c)
 *     ?deserialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABED0 (-deserialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVinput_a.c)
 *     ?deserialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800C0F30 (-deserialize@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@.c)
 *     ?deserialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4660 (-deserialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_ar.c)
 *     ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4C90 (-deserialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinpu.c)
 *     ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1801452A0 (-deserialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAE.c)
 * Callees:
 *     ?push_node@input_archive@tson@@AEAAXXZ @ 0x1800ADB98 (-push_node@input_archive@tson@@AEAAXXZ.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE734 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

void __fastcall tson::input_archive::startNode(tson::input_archive *this)
{
  tson::input_archive::search(this);
  if ( !*((_BYTE *)this + 25) )
    tson::input_archive::push_node((tson::read_buffer **)this);
}
