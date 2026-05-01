/*
 * XREFs of ??$serialize@Vinput_archive@tson@@@_tip_SearchFullActivationTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x18009FED8
 * Callers:
 *     ?deserialize@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archive@tson@@@Z @ 0x1800ABE70 (-deserialize@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@EEAAXAEAVinput_archi.c)
 * Callees:
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@@Z @ 0x18009F36C (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AE.c)
 *     ??$process@V?$nvp@AEAW4FullActivationTestSource@@@tson@@V?$nvp@AEA_N@2@V32@V32@V32@V32@V32@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V?$nvp@AEAI@2@V32@V32@V?$nvp@AEAJ@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4FullActivationTestSource@@@1@$$QEAV?$nvp@AEA_N@1@11111$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1$$QEAV?$nvp@AEAI@1@11$$QEAV?$nvp@AEAJ@1@1@Z @ 0x18009F3E0 (--$process@V-$nvp@AEAW4FullActivationTestSource@@@tson@@V-$nvp@AEA_N@2@V32@V32@V32@V32@V32@V-$nv.c)
 */

__int64 __fastcall _tip_SearchFullActivationTest::serialize<tson::input_archive>(__int64 a1, tson::input_archive *a2)
{
  const char *v4; // [rsp+80h] [rbp-80h] BYREF
  char v5; // [rsp+88h] [rbp-78h]
  __int64 v6; // [rsp+90h] [rbp-70h]
  const char *v7; // [rsp+98h] [rbp-68h] BYREF
  char v8; // [rsp+A0h] [rbp-60h]
  __int64 v9; // [rsp+A8h] [rbp-58h]
  const char *v10; // [rsp+B0h] [rbp-50h] BYREF
  char v11; // [rsp+B8h] [rbp-48h]
  __int64 v12; // [rsp+C0h] [rbp-40h]
  const char *v13; // [rsp+C8h] [rbp-38h] BYREF
  char v14; // [rsp+D0h] [rbp-30h]
  __int64 v15; // [rsp+D8h] [rbp-28h]
  __int64 v16; // [rsp+E0h] [rbp-20h] BYREF
  char v17; // [rsp+E8h] [rbp-18h]
  __int64 v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h] BYREF
  char v20; // [rsp+100h] [rbp+0h]
  __int64 v21; // [rsp+108h] [rbp+8h]
  __int64 v22; // [rsp+110h] [rbp+10h] BYREF
  char v23; // [rsp+118h] [rbp+18h]
  __int64 v24; // [rsp+120h] [rbp+20h]
  __int64 v25; // [rsp+128h] [rbp+28h] BYREF
  char v26; // [rsp+130h] [rbp+30h]
  __int64 v27; // [rsp+138h] [rbp+38h]
  __int64 v28; // [rsp+140h] [rbp+40h] BYREF
  char v29; // [rsp+148h] [rbp+48h]
  __int64 v30; // [rsp+150h] [rbp+50h]
  __int64 v31; // [rsp+158h] [rbp+58h] BYREF
  char v32; // [rsp+160h] [rbp+60h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  __int64 v34; // [rsp+170h] [rbp+70h] BYREF
  char v35; // [rsp+178h] [rbp+78h]
  __int64 v36; // [rsp+180h] [rbp+80h]
  __int64 v37; // [rsp+188h] [rbp+88h] BYREF
  char v38; // [rsp+190h] [rbp+90h]
  __int64 v39; // [rsp+198h] [rbp+98h]
  __int64 v40; // [rsp+1A0h] [rbp+A0h] BYREF
  char v41; // [rsp+1A8h] [rbp+A8h]
  __int64 v42; // [rsp+1B0h] [rbp+B0h]
  __int64 v43; // [rsp+1B8h] [rbp+B8h] BYREF
  char v44; // [rsp+1C0h] [rbp+C0h]
  __int64 v45; // [rsp+1C8h] [rbp+C8h]
  __int64 v46; // [rsp+1D0h] [rbp+D0h] BYREF
  char v47; // [rsp+1D8h] [rbp+D8h]
  __int64 v48; // [rsp+1E0h] [rbp+E0h]

  v8 = 24;
  v7 = "isActivatedDuringSuspend";
  v11 = 22;
  v9 = a1 + 74;
  v14 = 26;
  v10 = "searchActivationResult";
  v12 = a1 + 68;
  v13 = "view_navigated_to_obscured";
  v15 = a1 + 73;
  v16 = (__int64)"uncloaked";
  v18 = a1 + 72;
  v19 = (__int64)"transition_type";
  v21 = a1 + 64;
  v22 = (__int64)"invalid_hwnd";
  v24 = a1 + 30;
  v25 = (__int64)"launch_source";
  v27 = a1 + 32;
  v28 = (__int64)"view_destroyed";
  v30 = a1 + 29;
  v31 = (__int64)"positioned";
  v33 = a1 + 28;
  v34 = (__int64)"view_navigated_to_visible";
  v36 = a1 + 27;
  v37 = (__int64)"hidden";
  v39 = a1 + 26;
  v40 = (__int64)"view_created";
  v42 = a1 + 25;
  v43 = (__int64)"timed_out";
  v45 = a1 + 24;
  v46 = (__int64)"new_source";
  v48 = a1 + 20;
  v4 = "source";
  v6 = a1 + 16;
  v17 = 9;
  v20 = 15;
  v23 = 12;
  v26 = 13;
  v29 = 14;
  v32 = 10;
  v35 = 25;
  v38 = 6;
  v41 = 12;
  v44 = 9;
  v47 = 10;
  v5 = 6;
  tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>>((__int64)a2, (__int64)&v4);
  return tson::input_archive::process<tson::nvp<enum FullActivationTestSource &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<unsigned int &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v46,
           (__int64)&v43,
           (__int64)&v40,
           (__int64)&v37,
           (__int64)&v34,
           (__int64)&v31,
           (__int64)&v28,
           &v25,
           (__int64)&v22,
           (__int64)&v19,
           (__int64)&v16,
           (__int64)&v13,
           (__int64)&v10,
           (__int64)&v7);
}
