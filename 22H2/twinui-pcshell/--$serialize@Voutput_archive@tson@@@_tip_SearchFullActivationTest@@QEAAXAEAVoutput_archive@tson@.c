/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A02A8
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE810 (-serialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVoutput_archiv.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F4B8 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@_ea_18009F4B8.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE114 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

__int64 __fastcall _tip_SearchFullActivationTest::serialize<tson::output_archive>(__int64 a1, tson::output_archive *a2)
{
  unsigned int v3; // edx
  __int64 v5; // [rsp+80h] [rbp-80h] BYREF
  char v6; // [rsp+88h] [rbp-78h]
  __int64 v7; // [rsp+90h] [rbp-70h]
  __int64 v8; // [rsp+98h] [rbp-68h] BYREF
  char v9; // [rsp+A0h] [rbp-60h]
  __int64 v10; // [rsp+A8h] [rbp-58h]
  __int64 v11; // [rsp+B0h] [rbp-50h] BYREF
  char v12; // [rsp+B8h] [rbp-48h]
  __int64 v13; // [rsp+C0h] [rbp-40h]
  __int64 v14; // [rsp+C8h] [rbp-38h] BYREF
  char v15; // [rsp+D0h] [rbp-30h]
  __int64 v16; // [rsp+D8h] [rbp-28h]
  __int64 v17; // [rsp+E0h] [rbp-20h] BYREF
  char v18; // [rsp+E8h] [rbp-18h]
  __int64 v19; // [rsp+F0h] [rbp-10h]
  __int64 v20; // [rsp+F8h] [rbp-8h] BYREF
  char v21; // [rsp+100h] [rbp+0h]
  __int64 v22; // [rsp+108h] [rbp+8h]
  __int64 v23; // [rsp+110h] [rbp+10h] BYREF
  char v24; // [rsp+118h] [rbp+18h]
  __int64 v25; // [rsp+120h] [rbp+20h]
  __int64 v26; // [rsp+128h] [rbp+28h] BYREF
  char v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+140h] [rbp+40h] BYREF
  char v30; // [rsp+148h] [rbp+48h]
  __int64 v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h] BYREF
  char v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  __int64 v35; // [rsp+170h] [rbp+70h] BYREF
  char v36; // [rsp+178h] [rbp+78h]
  __int64 v37; // [rsp+180h] [rbp+80h]
  const char *v38; // [rsp+188h] [rbp+88h] BYREF
  char v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  const char *v41; // [rsp+1A0h] [rbp+A0h] BYREF
  char v42; // [rsp+1A8h] [rbp+A8h]
  __int64 v43; // [rsp+1B0h] [rbp+B0h]
  const char *v44; // [rsp+1B8h] [rbp+B8h] BYREF
  char v45; // [rsp+1C0h] [rbp+C0h]
  __int64 v46; // [rsp+1C8h] [rbp+C8h]

  *((_BYTE *)a2 + 8) = 6;
  v5 = (__int64)"isActivatedDuringSuspend";
  v6 = 24;
  v7 = a1 + 74;
  v8 = (__int64)"searchActivationResult";
  v10 = a1 + 68;
  v11 = (__int64)"view_navigated_to_obscured";
  v13 = a1 + 73;
  v14 = (__int64)"uncloaked";
  v16 = a1 + 72;
  v17 = (__int64)"transition_type";
  v19 = a1 + 64;
  v20 = (__int64)"invalid_hwnd";
  v22 = a1 + 30;
  v23 = (__int64)"launch_source";
  v25 = a1 + 32;
  v26 = (__int64)"view_destroyed";
  v28 = a1 + 29;
  v29 = (__int64)"positioned";
  v31 = a1 + 28;
  v32 = (__int64)"view_navigated_to_visible";
  v34 = a1 + 27;
  v35 = (__int64)"hidden";
  v37 = a1 + 26;
  v38 = "view_created";
  v40 = a1 + 25;
  v41 = "timed_out";
  v43 = a1 + 24;
  v44 = "new_source";
  v46 = a1 + 20;
  *(_QWORD *)a2 = "source";
  v3 = *(_DWORD *)(a1 + 16);
  v9 = 22;
  v12 = 26;
  v15 = 9;
  v18 = 15;
  v21 = 12;
  v24 = 13;
  v27 = 14;
  v30 = 10;
  v33 = 25;
  v36 = 6;
  v39 = 12;
  v42 = 9;
  v45 = 10;
  tson::output_archive::saveValue(a2, v3);
  return tson::output_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v44,
           (__int64)&v41,
           (__int64)&v38,
           (__int64)&v35,
           (__int64)&v32,
           (__int64)&v29,
           (__int64)&v26,
           (__int64)&v23,
           (__int64)&v20,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v11,
           (__int64)&v8,
           (__int64)&v5);
}
