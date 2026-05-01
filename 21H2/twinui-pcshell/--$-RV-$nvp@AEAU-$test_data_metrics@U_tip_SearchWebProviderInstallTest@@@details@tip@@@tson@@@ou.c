/*
 * XREFs of ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@1@@Z @ 0x18009D3C8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE8D0 (-serialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<tip::details::test_data_metrics<_tip_SearchWebProviderInstallTest> &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 *v4; // rdi
  __int64 v5; // rbx

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(__int64 **)(a2 + 16);
  tson::output_archive::startNode(this);
  v5 = *v4;
  *(_QWORD *)this = "install_trigger";
  *((_BYTE *)this + 8) = 15;
  tson::output_archive::saveValue(this, *(_DWORD *)(v5 + 16));
  *(_DWORD *)v4[1] = *(unsigned __int8 *)(v5 + 16);
  tson::output_archive::finishNode(this);
  return this;
}
