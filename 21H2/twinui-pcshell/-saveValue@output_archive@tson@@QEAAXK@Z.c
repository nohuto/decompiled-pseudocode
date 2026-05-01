/*
 * XREFs of ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134
 * Callers:
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@1@@Z @ 0x18009D3C8 (--$-RV-$nvp@AEAU-$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@ou.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F4D8 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@_ea_18009F4D8.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A02C8 (--$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A04F4 (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AE178 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ??$process@V?$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4ApiType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x180134720 (--$process@V-$nvp@AEAW4ApiType@PinManagerTipTests@@@tson@@V-$nvp@AEAV-$basic_string_ea_180134720.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB24 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3FC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

void __fastcall tson::output_archive::saveValue(void ***this, __int64 a2, __int64 a3)
{
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  LOBYTE(a3) = 18;
  LOBYTE(a2) = (_DWORD)a2 == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(this, a2, a3) )
    tson::write_buffer::push_back(this[18], &v4, 4uLL);
}
