/*
 * XREFs of ?TryGetProcessExePathAndAppId@@YA?AU?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@I@Z @ 0x1804CEAE8
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x1804CD0B4 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18003A6A8 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x180057388 (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804C88B4 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall TryGetProcessExePathAndAppId(_OWORD *a1, DWORD a2)
{
  __m128i v3; // xmm6
  __int64 v4; // rdx
  char *v5; // rsi
  int v6; // eax
  void *v7; // rbx
  unsigned __int64 v8; // r8
  unsigned __int16 **v9; // r8
  __int64 v10; // r14
  LPVOID pv[2]; // [rsp+28h] [rbp-69h] BYREF
  LPVOID v13[3]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v14; // [rsp+50h] [rbp-41h] BYREF
  __m128i v15; // [rsp+60h] [rbp-31h]
  __int128 v16; // [rsp+70h] [rbp-21h] BYREF
  __m128i si128; // [rsp+80h] [rbp-11h]
  _QWORD v18[4]; // [rsp+90h] [rbp-1h] BYREF

  v13[0] = a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v16) = 0;
  v3 = si128;
  v15 = si128;
  LOWORD(v14) = 0;
  v5 = (char *)OpenProcess(0x1000u, 0, a2);
  v13[2] = v5;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v13[0] = 0LL;
    v6 = wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           (__int64)v5,
           v4,
           (__int64)v13);
    v7 = v13[0];
    if ( v6 >= 0 && v13[0] )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *((_WORD *)v13[0] + v8) );
      std::wstring::assign((char *)&v16, v13[0], v8);
    }
    pv[0] = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      pv,
      0LL);
    if ( (int)CallerIdentity::GetProcessAppId(v5, (unsigned int **)pv, v9) >= 0 )
    {
      v10 = Windows::Internal::FamilySafety::AppLimits::AumidToAppId((__int64)v18, (unsigned __int16 *)pv[0]);
      if ( &v14 != (__int128 *)v10 )
      {
        std::wstring::_Tidy_deallocate(&v14);
        v14 = *(_OWORD *)v10;
        v3 = *(__m128i *)(v10 + 16);
        v15 = v3;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = 7LL;
        *(_WORD *)v10 = 0;
      }
      std::wstring::_Tidy_deallocate(v18);
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( v7 )
      CoTaskMemFree(v7);
  }
  *a1 = v16;
  a1[1] = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v16) = 0;
  a1[2] = v14;
  a1[3] = v3;
  v15 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v14) = 0;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  std::wstring::_Tidy_deallocate(&v14);
  std::wstring::_Tidy_deallocate(&v16);
  return a1;
}
