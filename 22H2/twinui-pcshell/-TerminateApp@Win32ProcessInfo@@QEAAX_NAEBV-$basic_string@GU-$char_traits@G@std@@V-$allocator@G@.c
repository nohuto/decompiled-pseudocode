/*
 * XREFs of ?TerminateApp@Win32ProcessInfo@@QEAAX_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1804CCBEC
 * Callers:
 *     ?TerminateApp@Win32AppInfo@@QEAAX_N@Z @ 0x1804CCB00 (-TerminateApp@Win32AppInfo@@QEAAX_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180061A7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804C61A8 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ??$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z @ 0x1804CA100 (--$DebugInfo@AEAY0CE@$$CBG@AppUsageTelemetry@@SAXAEAY0CE@$$CBG@Z.c)
 *     ??$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@12@$$QEAV_lambda_42dce70c870a3964e7319458b8bf7bca_@@@Z @ 0x1804CA3D4 (--$QueueTask@V_lambda_42dce70c870a3964e7319458b8bf7bca_@@@ComTaskPool@Internal@Windows@@SAJW4Tas.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::TerminateApp(_QWORD *a1, char a2)
{
  _QWORD *v2; // rdi
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // ebx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _DWORD *v8; // rcx
  __int64 v9; // r9
  _BYTE *v10; // rax
  __int64 i; // rax
  __int64 v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[4]; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v2 = a1;
  if ( a2 )
  {
    AppUsageTelemetry::DebugInfo<unsigned short const (&)[36]>((__int64)L"Attempting to terminate app process");
    v3 = *((_DWORD *)v2 + 4);
    std::wstring::wstring((__int64)v15);
    v13 = v3;
    std::wstring::wstring((__int64)v14);
    v5 = Windows::Internal::ComTaskPool::QueueTask<_lambda_42dce70c870a3964e7319458b8bf7bca_>(v4, (__int64)&v13);
    std::wstring::_Tidy_deallocate(v14);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xCA,
        (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\win32appstatemanager.cpp",
        (const char *)(unsigned int)v5);
    std::wstring::_Tidy_deallocate(v15);
  }
  else
  {
    v6 = (_QWORD *)*a1;
    v7 = *(_QWORD **)*a1;
    while ( v7 != v6 )
    {
      if ( *(_DWORD *)v7[5] != 1 )
      {
        v8 = (_DWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                         (__int64)a1,
                         _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)[1];
        if ( *v8 > 5u )
        {
          v12 = (__int64)L"Found app view to close";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
            (__int64)v8,
            (unsigned __int8 *)dword_18059EFEA,
            0LL,
            v9,
            (const WCHAR **)&v12);
        }
        PostMessageW((HWND)v7[4], 0x112u, 0xF060uLL, 0LL);
      }
      v10 = (_BYTE *)v7[2];
      if ( v10[25] )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        a1 = *(_QWORD **)v10;
        if ( !*(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          do
          {
            v7 = a1;
            a1 = (_QWORD *)*a1;
          }
          while ( !*((_BYTE *)a1 + 25) );
        }
      }
    }
  }
}
