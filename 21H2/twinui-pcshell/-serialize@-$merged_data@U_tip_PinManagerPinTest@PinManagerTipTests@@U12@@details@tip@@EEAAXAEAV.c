/*
 * XREFs of ?serialize@?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x180146320
 * Callers:
 *     <none>
 * Callees:
 *     ?finishNode@output_archive@tson@@QEAAXXZ @ 0x1800ACF00 (-finishNode@output_archive@tson@@QEAAXXZ.c)
 *     ?startNode@output_archive@tson@@QEAAXXZ @ 0x1800AEEB0 (-startNode@output_archive@tson@@QEAAXXZ.c)
 *     ??$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180134970 (--$serialize@Voutput_archive@tson@@@_tip_PinManagerPinTest@PinManagerTipTests@@QEAAXAEAVoutput_a.c)
 */

void __fastcall tip::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>::serialize(
        __int64 a1,
        tson::output_archive *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
    PinManagerTipTests::_tip_PinManagerPinTest::serialize<tson::output_archive>((a1 + 248) & -(__int64)(a1 != 0), a2);
    tson::output_archive::finishNode(a2, v9, v10, v11);
  }
}
