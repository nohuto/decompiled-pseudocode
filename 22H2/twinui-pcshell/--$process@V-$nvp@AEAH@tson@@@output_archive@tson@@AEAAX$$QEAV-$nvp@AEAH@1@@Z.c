/*
 * XREFs of ??$process@V?$nvp@AEAH@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@@Z @ 0x1800D36B4
 * Callers:
 *     ??$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTest@SwitcherTip@@@Z @ 0x1800D35AC (--$process@AEAU_tip_AltTabShowTest@SwitcherTip@@@output_archive@tson@@AEAAXAEAU_tip_AltTabShowTe.c)
 *     ??$?RV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@1@@Z @ 0x1800D4968 (--$-RV-$nvp@AEAU_tip_SnapAssistShowTest@SwitcherTip@@@tson@@@output_archive@tson@@QEAAAEAV01@$$Q.c)
 * Callees:
 *     ?push_back@write_buffer@tson@@QEAA_NPEBX_K@Z @ 0x1800ADB04 (-push_back@write_buffer@tson@@QEAA_NPEBX_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x1800AF3DC (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

char __fastcall tson::output_archive::process<tson::nvp<int &>>(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  char result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  *(_QWORD *)a1 = v3;
  v5 = *(_DWORD *)a2[2];
  result = tson::output_archive::write_type((tson::write_buffer **)a1, v5 == 0, 15);
  if ( result )
    return tson::write_buffer::push_back(*(void ***)(a1 + 144), &v5, 4uLL);
  return result;
}
