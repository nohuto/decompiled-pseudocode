/*
 * XREFs of ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU?$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@1@@Z @ 0x18009D3C8 (--$-RV-$nvp@AEAU-$test_data_metrics@U_tip_SearchWebProviderInstallTest@@@details@tip@@@tson@@@ou.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A04F4 (--$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@t.c)
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD v9[2]; // [rsp+20h] [rbp-38h] BYREF
  const char *v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+38h] [rbp-20h]
  _QWORD *v12; // [rsp+40h] [rbp-18h]

  if ( (a3 & 2) != 0 )
  {
    if ( a1 )
      v9[0] = a1 + 248;
    else
      v9[0] = 0LL;
    v11 = 7;
    v9[1] = a1 + 184;
    v10 = "metrics";
    v12 = v9;
    tson::output_archive::operator()<tson::nvp<tip::details::test_data_metrics<_tip_SearchWebProviderInstallTest> &>>(
      a2,
      (__int64)&v10);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::startNode(a2);
    _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2, v6, v7, v8);
  }
}
