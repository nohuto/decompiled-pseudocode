/*
 * XREFs of ?BackupAppCompatInfoOnStart@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18011F320
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122E30 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122E30.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$?0$0A@Vpath@filesystem@std@@@?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAA@AEBVpath@filesystem@1@HH@Z @ 0x180116904 (--$-0$0A@Vpath@filesystem@std@@@-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAA@AEBVpath@files.c)
 *     ??$?0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z @ 0x180116978 (--$-0PEBG$0A@@path@filesystem@std@@QEAA@AEBQEBGW4format@012@@Z.c)
 *     ??$?0V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@W4format@012@@Z @ 0x180116CA4 (--$-0V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0A@@path@filesystem@std@@QEA.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@2@W4format@012@@Z @ 0x180116CE0 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@path@filesystem@std@@QEAA@AEBV-$basi.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116EB0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116EB0.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180117D64 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1801183D0 (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x18011BA40 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ??_D?$basic_fstream@DU?$char_traits@D@std@@@std@@QEAAXXZ @ 0x18011BD80 (--_D-$basic_fstream@DU-$char_traits@D@std@@@std@@QEAAXXZ.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18011F158 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ?GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180121DB4 (-GetCompatJsonFileNameForThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x180125F84 (-_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAV-.c)
 *     ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1801264D0 (-_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z @ 0x180127178 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@@Z.c)
 *     ?_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z @ 0x1801271E4 (-_Throw_fs_error@filesystem@std@@YAXPEBDW4__std_win_error@@AEBVpath@12@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix@@@details@wil@@QEAA_NXZ @ 0x180127528 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompa.c)
 *     ?exists@filesystem@std@@YA_NAEBVpath@12@@Z @ 0x180128098 (-exists@filesystem@std@@YA_NAEBVpath@12@@Z.c)
 *     ?last_write_time@filesystem@std@@YA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@2@AEBVpath@12@@Z @ 0x1801283F8 (-last_write_time@filesystem@std@@YA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$duration.c)
 *     ?now@_File_time_clock@filesystem@std@@SA?AV?$time_point@U_File_time_clock@filesystem@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@3@@chrono@3@XZ @ 0x1801287D0 (-now@_File_time_clock@filesystem@std@@SA-AV-$time_point@U_File_time_clock@filesystem@std@@V-$dur.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@0@Z @ 0x1802B9140 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_1802B9140.c)
 */

// Hidden C++ exception states: #wind=26
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoOnStart(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  int v2; // r15d
  __int64 CompatJsonFileNameForThisUser; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rax
  std::filesystem *v6; // rcx
  const struct std::filesystem::path *v7; // rdx
  __int64 v8; // rdx
  __int64 ticks; // rbx
  _QWORD *v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  const struct std::filesystem::path *v14; // rdx
  bool v15; // di
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  std::filesystem *v18; // rcx
  const struct std::filesystem::path *v19; // rdx
  bool v20; // bl
  unsigned int v21; // eax
  const unsigned __int16 *v22; // r8
  volatile signed __int32 *v23; // rdi
  char *v24; // rsi
  std::filesystem *v25; // rcx
  const unsigned __int16 *v26; // rbx
  const unsigned __int16 *v27; // rdx
  bool v28; // bl
  __int64 v29; // rbx
  _QWORD *v30; // rax
  unsigned __int64 v31; // r14
  __int64 v32; // rax
  const struct std::filesystem::path *v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  _DWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  _DWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // [rsp+30h] [rbp-5F8h] BYREF
  unsigned __int64 v44; // [rsp+38h] [rbp-5F0h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-5E8h] BYREF
  std::_Ref_count_base *v46[2]; // [rsp+50h] [rbp-5D8h] BYREF
  __int64 v47; // [rsp+60h] [rbp-5C8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-5C0h] BYREF
  _QWORD *v49; // [rsp+70h] [rbp-5B8h] BYREF
  __int64 v50; // [rsp+78h] [rbp-5B0h] BYREF
  _QWORD *v51; // [rsp+80h] [rbp-5A8h] BYREF
  char v52[8]; // [rsp+88h] [rbp-5A0h] BYREF
  std::_Ref_count_base *v53[2]; // [rsp+90h] [rbp-598h]
  std::_Ref_count_base *v54[2]; // [rsp+A0h] [rbp-588h] BYREF
  _QWORD v55[3]; // [rsp+B0h] [rbp-578h] BYREF
  char v56[40]; // [rsp+C8h] [rbp-560h] BYREF
  _BYTE v57[288]; // [rsp+F0h] [rbp-538h] BYREF
  _BYTE v58[288]; // [rsp+210h] [rbp-418h] BYREF
  _QWORD v59[2]; // [rsp+330h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+340h] [rbp-2E8h]
  _QWORD v61[4]; // [rsp+350h] [rbp-2D8h] BYREF
  unsigned __int16 *v62[4]; // [rsp+370h] [rbp-2B8h] BYREF
  _QWORD v63[4]; // [rsp+390h] [rbp-298h] BYREF
  _QWORD v64[4]; // [rsp+3B0h] [rbp-278h] BYREF
  _OWORD v65[2]; // [rsp+3D0h] [rbp-258h] BYREF
  _OWORD v66[2]; // [rsp+3F0h] [rbp-238h] BYREF
  _QWORD v67[4]; // [rsp+410h] [rbp-218h] BYREF
  _QWORD v68[4]; // [rsp+430h] [rbp-1F8h] BYREF
  _QWORD v69[4]; // [rsp+450h] [rbp-1D8h] BYREF
  _QWORD v70[4]; // [rsp+470h] [rbp-1B8h] BYREF
  _QWORD v71[4]; // [rsp+490h] [rbp-198h] BYREF
  _QWORD v72[4]; // [rsp+4B0h] [rbp-178h] BYREF
  _QWORD v73[4]; // [rsp+4D0h] [rbp-158h] BYREF
  _QWORD v74[4]; // [rsp+4F0h] [rbp-138h] BYREF
  _QWORD Src[4]; // [rsp+510h] [rbp-118h] BYREF
  _QWORD v76[4]; // [rsp+530h] [rbp-F8h] BYREF
  _QWORD v77[4]; // [rsp+550h] [rbp-D8h] BYREF
  _QWORD v78[4]; // [rsp+570h] [rbp-B8h] BYREF
  _QWORD v79[4]; // [rsp+590h] [rbp-98h] BYREF
  _QWORD v80[4]; // [rsp+5B0h] [rbp-78h] BYREF
  _QWORD v81[4]; // [rsp+5D0h] [rbp-58h] BYREF

  v2 = 0;
  v43 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CommercialCloudAppBackup_AppCompatBackupOnStartFix>::GetImpl'::`2'::impl) )
  {
    try
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      LOWORD(v59[0]) = 0;
      wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v70, (__int64)L"%windir%\\appcompat\\Backup");
      CompatJsonFileNameForThisUser = winrt::Windows::Internal::Shell::implementation::AppBackupListener::GetCompatJsonFileNameForThisUser(
                                        this,
                                        v76);
      v4 = std::operator+<unsigned short>(Src, (__int64)v70, (__int64)L"\\");
      v5 = std::operator+<unsigned short>(v74, v4, CompatJsonFileNameForThisUser);
      std::wstring::operator=(v59, v5);
      std::wstring::_Tidy_deallocate(v74);
      std::wstring::_Tidy_deallocate(Src);
      std::wstring::_Tidy_deallocate(v76);
      v6 = (std::filesystem *)std::filesystem::path::path((__int64)v77, v59);
      LOBYTE(CompatJsonFileNameForThisUser) = std::filesystem::exists(v6, v7);
      std::wstring::_Tidy_deallocate(v77);
      if ( (_BYTE)CompatJsonFileNameForThisUser )
      {
        v8 = std::filesystem::path::path((__int64)v78, v59);
        std::filesystem::last_write_time(&v48, v8);
        std::wstring::_Tidy_deallocate(v78);
        ticks = _Xtime_get_ticks();
        v10 = (_QWORD *)std::filesystem::_File_time_clock::now(v52);
        v11 = (__int64)((unsigned __int128)((v48 + ticks - *v10) * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        v12 = (v11 >> 63) + v11;
        v13 = wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v79, (__int64)L"%LOCALAPPDATA%\\Backup");
        v66[0] = *(_OWORD *)v13;
        v66[1] = *(_OWORD *)(v13 + 16);
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 7LL;
        *(_WORD *)v13 = 0;
        std::wstring::_Tidy_deallocate(v79);
        std::filesystem::path::path((__int64)v69);
        std::filesystem::operator/((__int64)v67);
        v44 = 0LL;
        std::wstring::wstring((__int64)v68);
        v15 = std::filesystem::exists((std::filesystem *)v68, v14);
        std::wstring::_Tidy_deallocate(v68);
        if ( v15 )
        {
          std::fstream::fstream((__int64)v57, v67);
          std::istream::operator>>(v57, &v44);
          std::fstream::`vbase destructor'((__int64)v57);
        }
        if ( v12 > v44 )
          winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(v16, v59);
        std::wstring::_Tidy_deallocate(v67);
        std::wstring::_Tidy_deallocate(v69);
        std::wstring::_Tidy_deallocate(v66);
      }
      std::wstring::_Tidy_deallocate(v70);
    }
    catch ( ... )
    {
      v37 = v59;
      if ( si128.m128i_i64[1] >= 8uLL )
        v37 = (_QWORD *)v59[0];
      v49 = v37;
      v38 = (_DWORD *)winrt::to_hresult(&v43);
      CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const *>(
        v39,
        v38,
        (__int64 *)&v49);
    }
    v17 = v59;
  }
  else
  {
    wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v61, (__int64)L"%windir%\\appcompat\\Backup");
    v18 = (std::filesystem *)std::filesystem::path::path((__int64)v80, v61);
    v20 = std::filesystem::exists(v18, v19);
    std::wstring::_Tidy_deallocate(v80);
    if ( v20 )
    {
      try
      {
        std::filesystem::path::path((__int64)v63, v61);
        *(_OWORD *)v46 = 0LL;
        v21 = std::filesystem::_Dir_enum_impl::_Initialize_dir_enum<std::filesystem::_Dir_enum_impl>(v46);
        if ( v21 )
          std::filesystem::_Throw_fs_error("directory_iterator::directory_iterator", v21, v63);
        std::wstring::_Tidy_deallocate(v63);
        v23 = (volatile signed __int32 *)v46[1];
        if ( v46[1] )
        {
          _InterlockedIncrement((volatile signed __int32 *)v46[1] + 2);
          v23 = (volatile signed __int32 *)v46[1];
        }
        *(_OWORD *)v54 = *(_OWORD *)v46;
        if ( v23 )
        {
          _InterlockedIncrement(v23 + 2);
          v23 = (volatile signed __int32 *)v46[1];
        }
        *(_OWORD *)v53 = 0LL;
        if ( v23 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
        while ( v54[0] != v53[0] )
        {
          v24 = (char *)v54[0] + 32;
          v25 = (std::_Ref_count_base *)((char *)v54[0] + 32);
          if ( *((_QWORD *)v54[0] + 7) >= 8uLL )
            v25 = *(std::filesystem **)v24;
          v26 = (const unsigned __int16 *)((char *)v25 + 2 * *((_QWORD *)v54[0] + 6));
          v55[0] = std::filesystem::_Find_filename(v25, v26, v22);
          v55[1] = ((__int64)v26 - v55[0]) >> 1;
          std::filesystem::path::path((__int64)v62, v55);
          v2 |= 1u;
          v27 = (const unsigned __int16 *)v62;
          if ( v62[3] >= (unsigned __int16 *)8 )
            v27 = v62[0];
          v28 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(this, v27);
          std::wstring::_Tidy_deallocate(v62);
          if ( v28 )
          {
            std::filesystem::last_write_time(&v50, v24);
            v29 = _Xtime_get_ticks();
            v30 = (_QWORD *)std::filesystem::_File_time_clock::now(v56);
            v31 = (v50 + v29 - *v30) / 10000;
            v32 = wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v81, (__int64)L"%LOCALAPPDATA%\\Backup");
            v65[0] = *(_OWORD *)v32;
            v65[1] = *(_OWORD *)(v32 + 16);
            *(_QWORD *)(v32 + 16) = 0LL;
            *(_QWORD *)(v32 + 24) = 7LL;
            *(_WORD *)v32 = 0;
            std::wstring::_Tidy_deallocate(v81);
            std::filesystem::path::path((__int64)v73);
            std::filesystem::operator/((__int64)v64);
            v45 = 0LL;
            std::wstring::wstring((__int64)v71);
            LOBYTE(v29) = std::filesystem::exists((std::filesystem *)v71, v33);
            std::wstring::_Tidy_deallocate(v71);
            if ( (_BYTE)v29 )
            {
              std::fstream::fstream((__int64)v58, v64);
              std::istream::operator>>(v58, &v45);
              std::fstream::`vbase destructor'((__int64)v58);
            }
            if ( v31 > v45 )
            {
              if ( *((_QWORD *)v24 + 3) >= 8uLL )
                v24 = *(char **)v24;
              std::wstring::wstring((__int64)v72, v24);
              winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(v34, v72);
              std::wstring::_Tidy_deallocate(v72);
            }
            std::wstring::_Tidy_deallocate(v64);
            std::wstring::_Tidy_deallocate(v73);
            std::wstring::_Tidy_deallocate(v65);
          }
          v35 = std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(v54);
          if ( v35 )
            std::filesystem::_Throw_fs_error(v36, v35);
        }
        if ( v53[1] )
          std::_Ref_count_base::_Decref(v53[1]);
        if ( v54[1] )
          std::_Ref_count_base::_Decref(v54[1]);
        if ( v23 )
          std::_Ref_count_base::_Decref((std::_Ref_count_base *)v23);
      }
      catch ( ... )
      {
        v40 = v61;
        if ( v61[3] >= 8uLL )
          v40 = (_QWORD *)v61[0];
        v51 = v40;
        v41 = (_DWORD *)winrt::to_hresult(&v47);
        CAppBackupListenerTelemetry::CompatInfoBackup_Error<unsigned short const (&)[42],winrt::hresult,unsigned short const *>(
          v42,
          v41,
          (__int64 *)&v51);
      }
    }
    v17 = v61;
  }
  std::wstring::_Tidy_deallocate(v17);
}
