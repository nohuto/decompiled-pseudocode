/*
 * XREFs of ?deserialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4C70
 * Callers:
 *     <none>
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE64 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAH@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D3650 (--$process@V-$nvp@AEAH@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 */

void __fastcall tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  const char *v5; // [rsp+20h] [rbp-28h] BYREF
  char v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v6 = 17;
  v5 = "switcherItemCount";
  v4 = a1 + 264;
  if ( !a1 )
    v4 = 16LL;
  v7 = v4;
  tson::input_archive::process<tson::nvp<int &>>(a2, (__int64)&v5);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
