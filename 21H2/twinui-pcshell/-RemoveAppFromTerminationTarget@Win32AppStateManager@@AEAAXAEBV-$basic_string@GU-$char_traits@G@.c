/*
 * XREFs of ?RemoveAppFromTerminationTarget@Win32AppStateManager@@AEAAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1804CCAA4
 * Callers:
 *     ?CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z @ 0x1804CBDA0 (-CancelTerminateApp@Win32AppStateManager@@UEAAXPEBG@Z.c)
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD444 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180075210 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@X@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@1@V21@@Z @ 0x1800DBABC (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$ch.c)
 *     ??9?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$pair@IW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@2@@std@@@std@@@std@@@std@@QEBA_NAEBV01@@Z @ 0x1800DBC24 (--9-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@GU-$cha.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x180267514 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 *     ?Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x1804C51EC (-Provider@AppUsageTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?get@?$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z @ 0x1804C6538 (-get@-$static_lazy@VAppUsageTelemetry@@@details@wil@@QEAAPEAVAppUsageTelemetry@@P6AXXZ@Z.c)
 *     ??$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z @ 0x1804CA4DC (--$EnforcedAppClosed@PEBG@AppUsageTelemetry@@SAX$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32AppStateManager::RemoveAppFromTerminationTarget(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rcx
  __int64 v7; // r9
  unsigned __int16 *v8; // rbx
  __int64 v9; // r11
  __int64 v10; // rsi
  unsigned __int16 *v11; // r11
  __int64 v12; // rcx
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r9
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int16 *v16; // [rsp+98h] [rbp+58h] BYREF

  v6 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AppUsageTelemetry>::get(
                               a1,
                               _lambda_4d19eb78d2d318fd81ccffb962d1d1a6_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v6 > 5u )
  {
    v15 = (__int64)L"Removing app entry from termination target";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v6,
      (unsigned __int8 *)dword_18059F07A,
      0LL,
      v7,
      (const WCHAR **)&v15);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 56));
  v8 = *(unsigned __int16 **)(a1 + 80);
  v9 = *((_QWORD *)v8 + 1);
  v10 = (__int64)v8;
  if ( !*(_BYTE *)(v9 + 25) )
  {
    do
    {
      if ( (int)std::wstring::compare((_QWORD *)(v9 + 32), (unsigned __int16 *)a2) >= 0 )
      {
        v8 = v11;
        v9 = *(_QWORD *)v11;
      }
      else
      {
        v9 = *((_QWORD *)v11 + 2);
      }
    }
    while ( !*(_BYTE *)(v9 + 25) );
    v10 = *(_QWORD *)(a1 + 80);
  }
  if ( v8 == (unsigned __int16 *)v10 || (int)std::wstring::compare((_QWORD *)a2, v8 + 16) < 0 )
    v8 = (unsigned __int16 *)v10;
  v16 = v8;
  v15 = v10;
  if ( std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>::operator!=(
         &v16,
         &v15) )
  {
    if ( a3 )
    {
      if ( *(_QWORD *)(a2 + 24) >= 8uLL )
        a2 = *(_QWORD *)a2;
      v15 = a2;
      AppUsageTelemetry::EnforcedAppClosed<unsigned short const *>(&v15);
    }
    std::_Tree<std::_Tmap_traits<std::wstring,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::pair<unsigned int,enum Windows::Internal::FamilySafety::AppLimits::TerminationType>>>>>,void>(
      a1 + 80,
      &v15,
      v8);
  }
  if ( !*(_QWORD *)(a1 + 88) && *(_QWORD *)(a1 + 152) )
  {
    v13 = AppUsageTelemetry::Provider(v12);
    if ( *(_DWORD *)v13 > 5u )
    {
      v15 = (__int64)L"Canceling termination timer after removing target";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (__int64)v13,
        (unsigned __int8 *)dword_18059F07A,
        0LL,
        v14,
        (const WCHAR **)&v15);
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 152) + 64LL))(*(_QWORD *)(a1 + 152));
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)(a1 + 152));
  }
  if ( a1 != -56 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 56));
}
