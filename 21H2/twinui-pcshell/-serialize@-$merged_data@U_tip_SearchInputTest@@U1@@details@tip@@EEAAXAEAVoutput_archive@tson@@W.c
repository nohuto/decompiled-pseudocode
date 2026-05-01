/*
 * XREFs of ?serialize@?$merged_data@U_tip_SearchInputTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800C12A0
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800BEF00 (--$serialize@Voutput_archive@tson@@@_tip_SearchInputTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 */

void __fastcall tip::details::merged_data<_tip_SearchInputTest,_tip_SearchInputTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
    tson::output_archive::startNode(a2);
    _tip_SearchInputTest::serialize<tson::output_archive>((a1 + 248) & -(__int64)(a1 != 0), (__int64)a2, v9);
    tson::output_archive::finishNode(a2, v10, v11, v12);
  }
}
