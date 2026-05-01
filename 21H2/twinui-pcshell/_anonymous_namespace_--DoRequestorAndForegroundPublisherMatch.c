/*
 * XREFs of _anonymous_namespace_::DoRequestorAndForegroundPublisherMatch @ 0x180138E40
 * Callers:
 *     _anonymous_namespace_::DoesRequestorMeetPinningForegroundRequirements @ 0x180138FF8 (_anonymous_namespace_--DoesRequestorMeetPinningForegroundRequirements.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z @ 0x18009532C (--$invoke@P6AHPEAX@ZAEAPEAX@wistd@@YAH$$QEAP6AHPEAX@ZAEAPEAX@Z.c)
 *     ?RequestorImagePath@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18014001C (-RequestorImagePath@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@X.c)
 *     _anonymous_namespace_::TryGetFilePublisher @ 0x180143268 (_anonymous_namespace_--TryGetFilePublisher.c)
 *     _anonymous_namespace_::TryGetProcessPublisher @ 0x180143A84 (_anonymous_namespace_--TryGetProcessPublisher.c)
 *     ?reset@?$unique_storage@U?$handle_null_only_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18014619C (-reset@-$unique_storage@U-$handle_null_only_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@det.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall anonymous_namespace_::DoRequestorAndForegroundPublisherMatch(_QWORD *a1)
{
  HWND ForegroundWindow; // rax
  HANDLE v3; // rax
  BOOL (__stdcall *v4)(HANDLE); // rbx
  unsigned __int16 *v5; // r8
  _QWORD *v6; // rcx
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-19h] BYREF
  DWORD dwProcessId; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v13; // [rsp+48h] [rbp-1h]
  BOOL (__stdcall *v14)(HANDLE); // [rsp+50h] [rbp+7h] BYREF
  _QWORD v15[4]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v16[2]; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+88h] [rbp+3Fh]
  unsigned __int64 v18; // [rsp+90h] [rbp+47h]

  v13 = a1;
  ForegroundWindow = GetForegroundWindow();
  GetWindowThreadProcessId(ForegroundWindow, &dwProcessId);
  v14 = 0LL;
  v3 = OpenProcess(0x1000u, 0, dwProcessId);
  wil::details::unique_storage<wil::details::handle_null_only_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &v14,
    v3);
  v4 = v14;
  if ( v14 )
  {
    v10 = *(_OWORD *)PinRequestContext::RequestorImagePath(*a1, v11);
    anonymous_namespace_::TryGetFilePublisher(v16, &v10);
    anonymous_namespace_::TryGetProcessPublisher(v15, v4);
    if ( v17 )
    {
      v5 = (unsigned __int16 *)v15;
      if ( v15[3] >= 8uLL )
        v5 = (unsigned __int16 *)v15[0];
      v6 = v16;
      if ( v18 >= 8 )
        v6 = (_QWORD *)v16[0];
      if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v6, v17, v5, v15[2]) )
      {
        std::wstring::_Tidy_deallocate(v15);
        std::wstring::_Tidy_deallocate(v16);
        v14 = v4;
        *(_QWORD *)&v10 = CloseHandle;
        wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v10, &v14);
        v7 = (std::_Ref_count_base *)a1[1];
        if ( v7 )
          std::_Ref_count_base::_Decref(v7);
        return 1;
      }
    }
    std::wstring::_Tidy_deallocate(v15);
    std::wstring::_Tidy_deallocate(v16);
  }
  if ( v4 )
  {
    *(_QWORD *)&v10 = v4;
    v14 = CloseHandle;
    wistd::invoke<int (*)(void *),void * &>((__int64 (__fastcall **)(_QWORD))&v14, &v10);
  }
  v9 = (std::_Ref_count_base *)a1[1];
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  return 0;
}
