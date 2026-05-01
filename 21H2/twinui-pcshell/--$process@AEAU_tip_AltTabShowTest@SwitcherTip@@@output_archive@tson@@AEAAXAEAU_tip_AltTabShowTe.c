/*
 * XREFs of ??$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTest@SwitcherTip@@@Z @ 0x1800D35CC
 * Callers:
 *     ?serialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D4900 (-serialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVoutput_arc.c)
 * Callees:
 *     ?publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18003A300 (-publish_services@immersive_shell_component@winrt@@MEAAXPEAUIServiceProvider@@PEAUIProfferServic.c)
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF50 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??0?$nvp@AEA_N@tson@@QEAA@PEBDAEA_NE@Z @ 0x1800A0D94 (--0-$nvp@AEA_N@tson@@QEAA@PEBDAEA_NE@Z.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D36D4 (--$process@V-$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 */

void __fastcall tson::output_archive::process<SwitcherTip::_tip_AltTabShowTest &>(
        tson::output_archive *this,
        __int64 a2)
{
  struct IProfferService *v4; // r8
  char *v5; // rdx
  __int64 v6; // r8
  struct IProfferService *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  IServiceProvider v11; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]
  char *v13; // [rsp+30h] [rbp-28h]
  const char *v14; // [rsp+38h] [rbp-20h] BYREF
  char v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+48h] [rbp-10h]

  tson::output_archive::startNode(this);
  v15 = 15;
  v14 = "switchItemCount";
  v16 = a2 + 20;
  tson::nvp<bool &>::nvp<bool &>((__int64)&v11, (__int64)"shown", a2 + 16, 5);
  winrt::immersive_shell_component::publish_services(this, &v11, v4);
  v5 = v13;
  *(IServiceProvider *)this = v11;
  *((_BYTE *)this + 8) = v12;
  tson::output_archive::operator()<bool &>((__int64)this, v5, v6);
  winrt::immersive_shell_component::publish_services(this, &v11, v7);
  tson::output_archive::process<tson::nvp<int &>>(this, &v14);
  tson::output_archive::finishNode(this, v8, v9, v10);
}
