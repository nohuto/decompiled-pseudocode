/*
 * XREFs of ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x18028A344
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x18028A780 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180080E44 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180087648 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE45C (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1801A8DBC (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 */

void __fastcall PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  void *v2; // rdx
  char *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  std::_Ref_count_base *v10; // rcx
  _QWORD **v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rbp
  std::_Ref_count_base *v14; // rcx

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 208);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
    (wil::details **)this + 19,
    v2);
  v3 = (char *)*((_QWORD *)this + 18);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  while ( 1 )
  {
    v4 = *((_QWORD *)this + 17);
    if ( !v4 )
      break;
    v5 = v4 - 1;
    *((_QWORD *)this + 17) = v5;
    if ( !v5 )
      *((_QWORD *)this + 16) = 0LL;
  }
  v6 = *((_QWORD *)this + 15);
  while ( v6 )
  {
    --v6;
    v7 = *(void **)(*((_QWORD *)this + 14) + 8 * v6);
    if ( v7 )
      std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0xC);
  }
  v8 = (void *)*((_QWORD *)this + 14);
  if ( v8 )
    std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)(8LL * *((_QWORD *)this + 15)));
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v9 = (void *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  std::_Deallocate<16,0>(v9, (const struct std::nothrow_t *)0x10);
  v10 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  std::vector<void *>::_Tidy((__int64)this + 40);
  v11 = (_QWORD **)*((_QWORD *)this + 3);
  *v11[1] = 0LL;
  v12 = *v11;
  if ( *v11 )
  {
    do
    {
      v13 = (_QWORD *)*v12;
      v14 = (std::_Ref_count_base *)v12[7];
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      std::wstring::_Tidy_deallocate(v12 + 2);
      std::_Deallocate<16,0>(v12, (const struct std::nothrow_t *)0x40);
      v12 = v13;
    }
    while ( v13 );
  }
  std::_Deallocate<16,0>(*((void **)this + 3), (const struct std::nothrow_t *)0x40);
  *((_DWORD *)this + 3) = -1073741823;
}
