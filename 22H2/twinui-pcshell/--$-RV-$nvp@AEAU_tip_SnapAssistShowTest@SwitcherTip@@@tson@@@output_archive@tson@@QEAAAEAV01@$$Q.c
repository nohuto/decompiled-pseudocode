/*
 * XREFs of ??$?RV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@1@@Z @ 0x1800D4968
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4DF0 (-serialize@-$merged_data@U_tip_SnapAssistShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput.c)
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACEE0 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEE90 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D36B4 (--$process@V-$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 */

tson::output_archive *__fastcall tson::output_archive::operator()<tson::nvp<SwitcherTip::_tip_SnapAssistShowTest &>>(
        tson::output_archive *this,
        __int64 a2)
{
  char v2; // r8
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v9; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v2;
  v4 = *(_QWORD *)(a2 + 16);
  tson::output_archive::startNode(this);
  v10 = 17;
  v9 = "switcherItemCount";
  v11 = v4 + 16;
  tson::output_archive::process<tson::nvp<int &>>((__int64)this, (__int64 *)&v9);
  tson::output_archive::finishNode(this, v5, v6, v7);
  return this;
}
