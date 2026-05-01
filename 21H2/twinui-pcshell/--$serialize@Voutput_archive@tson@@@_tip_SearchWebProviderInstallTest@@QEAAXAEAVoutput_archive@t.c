/*
 * XREFs of ??$serialize@Voutput_archive@tson@@@_tip_SearchWebProviderInstallTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x1800A04F4
 * Callers:
 *     ?serialize@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800AE8D0 (-serialize@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip@@EEAAXAEAVoutput_ar.c)
 * Callees:
 *     ??$?RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z @ 0x18009CF50 (--$-RAEA_N@output_archive@tson@@QEAAAEAV01@AEA_N@Z.c)
 *     ??$process@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@tson@@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@@Z @ 0x18009F130 (--$process@V-$nvp@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@tson@@@outpu.c)
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V?$nvp@AEAJ@2@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@V42@V42@V12@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0$$QEAV?$nvp@AEAJ@1@$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@12200@Z @ 0x18009F918 (--$process@V-$nvp@AEA_N@tson@@V12@V-$nvp@AEAJ@2@V-$nvp@AEAV-$basic_string@GU-$char__ea_18009F918.c)
 *     ?saveValue@output_archive@tson@@QEAAXK@Z @ 0x1800AE134 (-saveValue@output_archive@tson@@QEAAXK@Z.c)
 */

__int64 __fastcall _tip_SearchWebProviderInstallTest::serialize<tson::output_archive>(
        __int64 a1,
        tson::output_archive *a2)
{
  unsigned int v4; // edx
  __int64 v5; // r8
  __int64 v6; // r8
  const char *v8; // [rsp+50h] [rbp-B0h] BYREF
  char v9; // [rsp+58h] [rbp-A8h]
  __int64 v10; // [rsp+60h] [rbp-A0h]
  __int64 v11; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+70h] [rbp-90h]
  __int64 v13; // [rsp+78h] [rbp-88h]
  __int64 v14; // [rsp+80h] [rbp-80h] BYREF
  char v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+90h] [rbp-70h]
  __int64 v17; // [rsp+98h] [rbp-68h] BYREF
  char v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h]
  __int64 v20; // [rsp+B0h] [rbp-50h] BYREF
  char v21; // [rsp+B8h] [rbp-48h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  __int64 v23; // [rsp+C8h] [rbp-38h] BYREF
  char v24; // [rsp+D0h] [rbp-30h]
  __int64 v25; // [rsp+D8h] [rbp-28h]
  __int64 v26; // [rsp+E0h] [rbp-20h] BYREF
  char v27; // [rsp+E8h] [rbp-18h]
  __int64 v28; // [rsp+F0h] [rbp-10h]
  const char *v29; // [rsp+F8h] [rbp-8h] BYREF
  char v30; // [rsp+100h] [rbp+0h]
  __int64 v31; // [rsp+108h] [rbp+8h]
  const char *v32; // [rsp+110h] [rbp+10h] BYREF
  char v33; // [rsp+118h] [rbp+18h]
  __int64 v34; // [rsp+120h] [rbp+20h]
  const char *v35; // [rsp+128h] [rbp+28h] BYREF
  char v36; // [rsp+130h] [rbp+30h]
  __int64 v37; // [rsp+138h] [rbp+38h]

  *((_BYTE *)a2 + 8) = 15;
  v11 = (__int64)"app_uninstalled_by_user";
  v12 = 23;
  v13 = a1 + 169;
  v15 = 18;
  v14 = (__int64)"app_update_version";
  v16 = a1 + 168;
  v17 = (__int64)"app_install_version";
  v19 = a1 + 136;
  v20 = (__int64)"app_current_version";
  v22 = a1 + 104;
  v23 = (__int64)"app_installed_regkey_set_hresult";
  v25 = a1 + 96;
  v26 = (__int64)"registration_error_text";
  v28 = a1 + 64;
  v29 = "registration_error_code";
  v31 = a1 + 60;
  v32 = "app_registered";
  v34 = a1 + 57;
  v35 = "app_already_installed";
  v37 = a1 + 56;
  v8 = "install_package_family_name";
  v10 = a1 + 24;
  *(_QWORD *)a2 = "install_trigger";
  v4 = *(_DWORD *)(a1 + 16);
  v18 = 19;
  v21 = 19;
  v24 = 32;
  v27 = 23;
  v30 = 23;
  v33 = 14;
  v36 = 21;
  v9 = 27;
  tson::output_archive::saveValue(a2, v4);
  *((_BYTE *)a2 + 8) = 31;
  *(_QWORD *)a2 = "install_package_regkeys_not_set";
  tson::output_archive::operator()<bool &>((__int64)a2, (char *)(a1 + 20), v5);
  tson::output_archive::process<tson::nvp<std::wstring &>>(a2, (__int64)&v8, v6);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<long &>,tson::nvp<std::wstring &>,tson::nvp<std::wstring &>,tson::nvp<bool &>,tson::nvp<bool &>>(
           a2,
           (__int64)&v35,
           (__int64)&v32,
           (__int64 *)&v29,
           (__int64)&v26,
           &v23,
           (__int64)&v20,
           (__int64)&v17,
           &v14,
           &v11);
}
