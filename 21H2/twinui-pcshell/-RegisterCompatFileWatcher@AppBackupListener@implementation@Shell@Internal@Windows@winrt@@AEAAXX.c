/*
 * XREFs of ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801249E0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$2 @ 0x180122E30 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_180122E30.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??1?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEAA@XZ @ 0x1800CEB60 (--1-$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@QEAA@XZ.c)
 *     ??$ExpandEnvironmentStringsW@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$0BAA@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180117D64 (--$ExpandEnvironmentStringsW@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$0BAA.c)
 *     ??$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z @ 0x180117F38 (--$NullAlloc_Error@AEAY0BH@$$CBG@CAppBackupListenerTelemetry@@SAXAEAY0BH@$$CBG@Z.c)
 *     ?create_common@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@AEAAJPEBG_NW4FolderChangeEvents@2@$$QEAV?$function@$$A6AXW4FolderChangeEvent@wil@@PEBG@Z@wistd@@@Z @ 0x180127844 (-create_common@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_r.c)
 *     ?delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z @ 0x180127A94 (-delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUfolder_change_reader_state@23@@Z @ 0x180128C20 (-reset@-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU1.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026559C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::RegisterCompatFileWatcher(
        winrt::Windows::Internal::Shell::implementation::AppBackupListener *this)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  struct wil::details::folder_change_reader_state *v4; // rdx
  wil::details *v5; // rcx
  __int64 v6; // rcx
  const char *v7; // r9
  wil::details *v8; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-C0h] BYREF
  _BYTE v10[8]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v11[15]; // [rsp+68h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  try
  {
    v2 = wil::ExpandEnvironmentStringsW<std::wstring,256>((__int64)v9, (__int64)L"%windir%\\appcompat");
    v3 = (_QWORD *)((char *)this + 464);
    std::wstring::operator=((char *)this + 464, v2);
    std::wstring::_Tidy_deallocate(v9);
    v11[0] = off_180508538;
    v11[1] = this;
    v11[13] = v11;
    if ( *((_QWORD *)this + 61) >= 8uLL )
      v3 = (_QWORD *)*v3;
    v8 = 0LL;
    wil::folder_change_reader_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>,wil::err_returncode_policy>::create_common(
      &v8,
      v3);
    if ( (wil::details **)((char *)this + 392) == &v8 )
    {
      v5 = v8;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::reset(
        (char *)this + 392,
        v8);
      v5 = 0LL;
    }
    if ( v5 )
      wil::details::delete_folder_change_reader_state(v5, v4);
    wistd::function<void (enum wil::FolderChangeEvent,unsigned short const *)>::~function<void (enum wil::FolderChangeEvent,unsigned short const *)>((__int64)v10);
    if ( !*((_QWORD *)this + 49) )
      CAppBackupListenerTelemetry::NullAlloc_Error<unsigned short const (&)[23]>(v6);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x3E7,
      (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
      v7);
  }
}
