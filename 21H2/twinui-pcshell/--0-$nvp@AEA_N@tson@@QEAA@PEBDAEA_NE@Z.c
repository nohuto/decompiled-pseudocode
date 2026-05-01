/*
 * XREFs of ??0?$nvp@AEA_N@tson@@QEAA@PEBDAEA_NE@Z @ 0x1800A0D94
 * Callers:
 *     ??$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTest@SwitcherTip@@@Z @ 0x1800D35CC (--$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTe.c)
 *     ?deserialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4660 (-deserialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_ar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::nvp<bool &>::nvp<bool &>(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 16) = a3;
  return result;
}
