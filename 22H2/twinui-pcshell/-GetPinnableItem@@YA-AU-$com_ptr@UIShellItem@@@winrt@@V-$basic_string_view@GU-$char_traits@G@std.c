/*
 * XREFs of ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139D6C
 * Callers:
 *     ?GetPinnablePidl@@YA?AV?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139EE0 (-GetPinnablePidl@@YA-AV-$unique_ptr@U_ITEMIDLIST@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0D8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ??$GetUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x18012A3B4 (--$GetUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagprope.c)
 *     ?GetUnpackagedAppPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18013A55C (-GetUnpackagedAppPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@AEBVPropertyStoreHelper@wil@@.c)
 *     ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180142FF0 (-TryGetAppsFolderItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1804D678C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall GetPinnableItem(void **a1, __int128 *a2, __int128 *a3, __int64 a4)
{
  void **v6; // rbx
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h] BYREF
  int v12; // [rsp+50h] [rbp+7h]
  __int128 v13; // [rsp+60h] [rbp+17h] BYREF
  __int64 v14; // [rsp+70h] [rbp+27h] BYREF
  void **v15; // [rsp+78h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v15 = a1;
  v13 = *a3;
  v11 = *a2;
  TryGetAppsFolderItem(&v15, &v11, &v13, a4);
  v6 = v15;
  v7 = retaddr;
  if ( !v15 )
  {
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v7,
      127LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)0x80070057LL);
    __debugbreak();
  }
  v14 = 0LL;
  v8 = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         (unsigned int)&v14,
         (_DWORD)v15,
         1,
         (unsigned int)&`GetPinnableItem'::`2'::propertyKeys,
         3);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      132LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
      (const char *)(unsigned int)v8);
    goto LABEL_10;
  }
  v11 = PKEY_AppUserModel_HostEnvironment;
  v12 = 14;
  if ( (int)wil::PropertyStoreHelperBase<IPropertyStore>::GetUInt32<_tagpropertykey>((__int64)&v14, &v11, v10) >= 0
    && v10[0] )
  {
    *a1 = v6;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else
  {
    v11 = *a2;
    GetUnpackagedAppPinnableItem(a1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    if ( v6 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v15);
  }
  return a1;
}
