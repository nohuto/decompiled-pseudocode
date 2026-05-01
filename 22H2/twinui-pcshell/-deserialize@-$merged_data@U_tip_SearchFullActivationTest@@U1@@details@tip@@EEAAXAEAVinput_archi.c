/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABE50
 * Callers:
 *     <none>
 * Callees:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18009FEB8 (--$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE64 (-startNode@input_archive@tson@@QEAAXXZ.c)
 */

void __fastcall tip::details::merged_data<_tip_SearchFullActivationTest,_tip_SearchFullActivationTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  _tip_SearchFullActivationTest::serialize<tson::input_archive>(
    (a1 + 248) & -(__int64)(a1 != 0),
    (tson::input_archive *)a2);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
