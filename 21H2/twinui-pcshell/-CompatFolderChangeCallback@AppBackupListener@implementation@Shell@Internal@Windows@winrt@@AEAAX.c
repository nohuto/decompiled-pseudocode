/*
 * XREFs of ?CompatFolderChangeCallback@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBW4FolderChangeEvent@wil@@PEBG@Z @ 0x180120A00
 * Callers:
 *     wistd::__function::__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil::FolderChangeEvent_unsigned_short_const__)_::operator() @ 0x18011BB90 (wistd--__function--__func__lambda_51ba67eea9e80e77fb7b287e3585ad78__void___cdecl(enum_wil--Folde.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFC8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x18009BA2C (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@AEBV10@QEBG@Z @ 0x180116EB0 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180116EB0.c)
 *     ?BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18011F158 (-BackupAppCompatInfoAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXAE.c)
 *     ?JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_NPEBG@Z @ 0x180124648 (-JsonFileBelongsToThisUser@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA_N.c)
 *     ??$?HGU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@$$QEAV10@QEBG@Z @ 0x180267A94 (--$-HGU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA-AV-$basic_string@GU-$char_tra_ea_180267A94.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::CompatFolderChangeCallback(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this,
        const enum wil::FolderChangeEvent *a2,
        WCHAR *a3)
{
  char v6; // bl
  __int64 v7; // rax
  char v8; // di
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR *v14; // [rsp+38h] [rbp-B0h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-A8h] BYREF
  int cchCount1[4]; // [rsp+50h] [rbp-98h]
  _QWORD v17[4]; // [rsp+60h] [rbp-88h] BYREF
  _QWORD v18[4]; // [rsp+80h] [rbp-68h] BYREF
  _QWORD Src[4]; // [rsp+A0h] [rbp-48h] BYREF

  v14 = a3;
  v6 = 0;
  v13 = 0;
  try
  {
    std::wstring::wstring((__int64)v18, a3);
    std::wstring::wstring((__int64)v15, L"Backup");
    if ( CompareStringOrdinal(a3, cchCount1[0], L"Backup", cchCount1[0], 1) != 2 || v18[2] <= *(_QWORD *)cchCount1 )
      goto LABEL_9;
    v7 = std::wstring::substr(v18, (__int64)v17, *(_QWORD *)cchCount1 + 1LL, 0xFFFFFFFFFFFFFFFFuLL);
    v6 = 1;
    v13 = 1;
    if ( *(_QWORD *)(v7 + 24) >= 8uLL )
      v7 = *(_QWORD *)v7;
    if ( winrt::Windows::Internal::Shell::implementation::AppBackupListener::JsonFileBelongsToThisUser(
           this,
           (const unsigned __int16 *)v7)
      && ((*(_DWORD *)a2 - 1) & 0xFFFFFFFD) == 0 )
    {
      v8 = 1;
    }
    else
    {
LABEL_9:
      v8 = 0;
    }
    if ( (v6 & 1) != 0 )
      std::wstring::_Tidy_deallocate(v17);
    if ( v8 )
    {
      v9 = std::operator+<unsigned short>(Src, (__int64)this + 464, (__int64)L"\\");
      std::operator+<unsigned short>(v17, v9, a3);
      std::wstring::_Tidy_deallocate(Src);
      winrt::Windows::Internal::Shell::implementation::AppBackupListener::BackupAppCompatInfoAsync(v10, v17);
      std::wstring::_Tidy_deallocate(v17);
    }
    std::wstring::_Tidy_deallocate(v15);
    std::wstring::_Tidy_deallocate(v18);
  }
  catch ( ... )
  {
    v11 = (_DWORD *)winrt::to_hresult(&v13);
    CAppBackupListenerTelemetry::Callback_Error<unsigned short const (&)[46],winrt::hresult,unsigned short const * &>(
      v12,
      v11,
      (__int64 *)&v14);
  }
}
