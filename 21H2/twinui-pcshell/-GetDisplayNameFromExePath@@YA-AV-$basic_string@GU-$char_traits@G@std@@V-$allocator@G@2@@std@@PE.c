/*
 * XREFs of ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CE8AC
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804CC430 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800618B8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1804CE3B4 (--1AppInventoryData@@QEAA@XZ.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1804CE768 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall GetDisplayNameFromExePath(_QWORD *a1, LPCWSTR pszPath)
{
  unsigned __int64 v4; // r14
  int (__fastcall *v5)(LPVOID, LPCWSTR, __int64 *, _QWORD); // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, LPVOID *); // rdi
  unsigned __int64 v8; // r8
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx
  LPWSTR FileNameW; // rax
  __int64 v13; // [rsp+30h] [rbp-69h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-61h] BYREF
  int v15; // [rsp+40h] [rbp-59h]
  LPVOID ppv[3]; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v17[8]; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v18[4]; // [rsp+A0h] [rbp+7h] BYREF

  ppv[1] = a1;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v15 = 1;
  v13 = 0LL;
  ppv[0] = 0LL;
  v4 = -1LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, ppv) >= 0 )
  {
    v5 = *(int (__fastcall **)(LPVOID, LPCWSTR, __int64 *, _QWORD))(*(_QWORD *)ppv[0] + 72LL);
    v13 = 0LL;
    if ( v5(ppv[0], pszPath, &v13, 0LL) >= 0 )
    {
      pv = 0LL;
      v6 = v13;
      v7 = *(int (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v13 + 40LL);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        &pv,
        0LL);
      if ( v7(v6, 0LL, &pv) >= 0 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *((_WORD *)pv + v8) );
        std::wstring::assign((char *)a1, pv, v8);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !a1[2] )
  {
    GetAppInventoryData((__int64)v17, (__int64)pszPath);
    if ( a1 != v18 )
    {
      v9 = v18;
      if ( v18[3] >= 8uLL )
        v9 = (_QWORD *)v18[0];
      std::wstring::assign((char *)a1, v9, v18[2]);
    }
    if ( !a1[2] && a1 != v17 )
    {
      v10 = v17;
      if ( v17[3] >= 8uLL )
        v10 = (_QWORD *)v17[0];
      std::wstring::assign((char *)a1, v10, v17[2]);
    }
    AppInventoryData::~AppInventoryData((AppInventoryData *)v17);
    if ( !a1[2] )
    {
      FileNameW = PathFindFileNameW(pszPath);
      do
        ++v4;
      while ( FileNameW[v4] );
      std::wstring::assign((char *)a1, FileNameW, v4);
    }
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return a1;
}
