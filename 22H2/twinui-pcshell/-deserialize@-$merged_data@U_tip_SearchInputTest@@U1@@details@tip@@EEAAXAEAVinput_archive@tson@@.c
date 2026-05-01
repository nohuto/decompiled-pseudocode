/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800C0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE64 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x1800BEE28 (--$serialize@Vinput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 */

void __fastcall tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_SearchInputTest::serialize<tson::input_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
