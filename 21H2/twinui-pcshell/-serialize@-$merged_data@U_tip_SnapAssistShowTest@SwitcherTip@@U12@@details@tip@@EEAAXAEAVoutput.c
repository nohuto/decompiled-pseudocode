/*
 * XREFs of ?serialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$?RV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@1@@Z @ 0x1800D4988 (--$-RV-$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 */

void __fastcall tip::details::merged_data<SwitcherTip::_tip_SnapAssistShowTest,SwitcherTip::_tip_SnapAssistShowTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  const char *v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

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
    v10 = 4;
    v9 = "test";
    v11 = (a1 + 248) & -(__int64)(a1 != 0);
    tson::output_archive::operator()<tson::nvp<SwitcherTip::_tip_SnapAssistShowTest &>>(a2, (__int64)&v9);
  }
}
