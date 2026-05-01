/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009F6E0
 * Callers:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F3E0 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V-$nv.c)
 *     ??$process@V?$nvp@AEAW4InstallTrigger@@@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V32@V?$nvp@AEAJ@2@V42@V52@V42@V42@V32@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4InstallTrigger@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@11$$QEAV?$nvp@AEAJ@1@232211@Z @ 0x18009F5CC (--$process@V-$nvp@AEAW4InstallTrigger@@@tson@@V-$nvp@AEA_N@2@V-$nvp@AEAV-$basic_string@GU-$char_.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F84C (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip@@@Z @ 0x1800AD238 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip@@@Z.c)
 *     ?deserialize@?$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800D4660 (-deserialize@-$merged_data@U_tip_AltTabShowTest@SwitcherTip@@U12@@details@tip@@EEAAXAEAVinput_ar.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@V?$nvp@AEAW4ConsentType@PinManagerTipTests@@@2@V?$nvp@AEA_N@2@V?$nvp@AEAK@2@V?$nvp@AEAJ@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$nvp@AEAW4ConsentType@PinManagerTipTests@@@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAK@1@$$QEAV?$nvp@AEAJ@1@@Z @ 0x180134594 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@V-$nvp.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x1800ABDE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x1800AE734 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

char __fastcall tson::input_archive::process<tson::nvp<bool &>>(__int64 *a1, __int64 a2)
{
  char v2; // r8
  _BYTE *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  char *v7; // rax
  char v8; // cl

  v2 = *(_BYTE *)(a2 + 8);
  a1[2] = *(_QWORD *)a2;
  *((_BYTE *)a1 + 24) = v2;
  v4 = *(_BYTE **)(a2 + 16);
  if ( !tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v7) = 0;
    goto LABEL_6;
  }
  LOBYTE(v5) = 10;
  tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
  v6 = *a1;
  v7 = *(char **)(*a1 + 8);
  if ( (unsigned __int64)v7 < *(_QWORD *)(*a1 + 16) )
  {
    v8 = *v7;
    *(_QWORD *)(v6 + 8) = v7 + 1;
    LOBYTE(v7) = v8 != 0;
LABEL_6:
    *v4 = (_BYTE)v7;
    return (char)v7;
  }
  *(_BYTE *)(v6 + 24) = 1;
  return (char)v7;
}
