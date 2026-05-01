/*
 * XREFs of ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x18009F34C
 * Callers:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F3C0 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V-$nv.c)
 *     ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18009FEB8 (--$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDC4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x1800ABE00 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE714 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>>(__int64 a1, __int64 a2)
{
  char v2; // r8
  int v3; // ebx
  _DWORD *v5; // rsi
  bool result; // al
  __int64 v7; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_BYTE *)(a2 + 8);
  v3 = 0;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_BYTE *)(a1 + 24) = v2;
  v5 = *(_DWORD **)(a2 + 16);
  v8 = 0;
  result = tson::input_archive::search((tson::input_archive *)a1);
  if ( result )
  {
    LOBYTE(v7) = 18;
    tson::input_archive::consume_expected_marker(a1, v7, 2147944029LL);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v8, 4uLL);
    v3 = v8;
  }
  *v5 = v3;
  return result;
}
