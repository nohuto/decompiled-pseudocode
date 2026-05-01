/*
 * XREFs of ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1800ACE88
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@Z @ 0x18009EB24 (--$load_nothrow@Utest_flag@tip@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@ti.c)
 *     ??$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@Z @ 0x18009ED04 (--$load_nothrow@VStoredFailureInfo@wil@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@VStor.c)
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@tson@@V?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@2@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEADP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEADPEAD$0A@$$T@details@wil@@@details@wil@@@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@@1@$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip@@@tip@@@1@@Z @ 0x18009F188 (--$process@V-$nvp@AEAV-$vector_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAD.c)
 *     ?deserialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABE50 (-deserialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archi.c)
 *     ?deserialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABEB0 (-deserialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVinput_a.c)
 *     ?deserialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800C0F10 (-deserialize@-$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@.c)
 *     ?deserialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4640 (-deserialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_ar.c)
 *     ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4C70 (-deserialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinpu.c)
 *     ?deserialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x180145130 (-deserialize@-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAE.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 */

void __fastcall tson::input_archive::finishNode(tson::input_archive *this)
{
  tson::input_archive *v1; // r11
  __int64 v2; // rax

  v1 = this;
  if ( !*((_BYTE *)this + 25) )
  {
    v2 = *((_QWORD *)this + 17);
    if ( v2 )
      *((_QWORD *)this + 17) = v2 - 1;
    else
      *((_BYTE *)this + 32) = 1;
    tson::input_archive::consume_expected_marker((tson::read_buffer **)this);
  }
  *((_BYTE *)v1 + 25) = 0;
}
