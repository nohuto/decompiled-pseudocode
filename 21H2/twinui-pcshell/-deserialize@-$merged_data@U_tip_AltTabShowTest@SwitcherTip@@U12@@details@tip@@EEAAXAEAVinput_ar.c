/*
 * XREFs of ?deserialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4660
 * Callers:
 *     <none>
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009F6E0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??0?$nvp@AEA_N@tson@@QEAA@PEBDAEA_NE@Z @ 0x1800A0D94 (--0-$nvp@AEA_N@tson@@QEAA@PEBDAEA_NE@Z.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x1800AEE84 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$process@V?$nvp@AEAH@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D3670 (--$process@V-$nvp@AEAH@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAH@1@@Z.c)
 */

void __fastcall tip::details::merged_data<SwitcherTip::_tip_AltTabShowTest,SwitcherTip::_tip_AltTabShowTest>::deserialize(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  const char *v6; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  __int64 v8; // [rsp+30h] [rbp-28h]
  _BYTE v9[32]; // [rsp+38h] [rbp-20h] BYREF

  *(_BYTE *)(a2 + 24) = 4;
  *(_QWORD *)(a2 + 16) = "test";
  tson::input_archive::startNode((tson::input_archive *)a2);
  v7 = 15;
  v6 = "switchItemCount";
  v4 = a1 + 264;
  v5 = a1 + 268;
  if ( !a1 )
    v5 = 20LL;
  v8 = v5;
  if ( !a1 )
    v4 = 16LL;
  tson::nvp<bool &>::nvp<bool &>((__int64)v9, (__int64)"shown", v4, 5);
  tson::input_archive::process<tson::nvp<bool &>>((__int64 *)a2, (__int64)v9);
  tson::input_archive::process<tson::nvp<int &>>(a2, (__int64)&v6);
  tson::input_archive::finishNode((tson::input_archive *)a2);
}
