/*
 * XREFs of ?serialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4900
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTest@SwitcherTip@@@Z @ 0x1800D35CC (--$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTe.c)
 */

void __fastcall tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( (a3 & 2) != 0 )
  {
    *((_BYTE *)a2 + 8) = 7;
    *(_QWORD *)a2 = "metrics";
    tson::output_archive::startNode(a2);
    *(_DWORD *)(a1 + 184) = 0;
    tson::output_archive::finishNode(a2, v6, v7, v8);
  }
  if ( (a3 & 1) != 0 )
  {
    *((_BYTE *)a2 + 8) = 4;
    *(_QWORD *)a2 = "test";
    tson::output_archive::process<SwitcherTip::_tip_AltTabShowTest &>(a2, (a1 + 248) & -(__int64)(a1 != 0));
  }
}
