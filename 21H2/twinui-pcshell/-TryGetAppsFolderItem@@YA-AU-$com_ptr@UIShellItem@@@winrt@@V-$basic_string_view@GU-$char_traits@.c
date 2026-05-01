/*
 * XREFs of ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180143160
 * Callers:
 *     ??R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ @ 0x1801368A0 (--R_lambda_1abdf5b9ad2813433bf54207a76ad608_@@QEBAXXZ.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x180139EDC (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x18013AF7C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x18013B080 (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143C20 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18008F040 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x1800AF0F8 (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z @ 0x180138938 (-CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TryGetAppsFolderItem(_QWORD *a1, SecondaryTileIdentifierHelpers **a2, __int64 a3)
{
  SecondaryTileIdentifierHelpers *v5; // rdi
  unsigned __int16 **v6; // r9
  int FullyQualifiedTileIdentifier; // eax
  void *v8; // rcx
  unsigned __int16 v10[4]; // [rsp+30h] [rbp-20h] BYREF
  void *ppv; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *(_QWORD *)v10 = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)(a3 + 8) )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)v10,
      0LL);
    FullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::CreateFullyQualifiedTileIdentifier(
                                     v5,
                                     *(const unsigned __int16 **)a3,
                                     v10,
                                     v6);
    if ( FullyQualifiedTileIdentifier < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        80LL,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)FullyQualifiedTileIdentifier);
      __debugbreak();
    }
    v5 = *(SecondaryTileIdentifierHelpers **)v10;
  }
  ppv = 0LL;
  if ( SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         (PCWSTR)v5,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv) < 0 )
  {
    *a1 = 0LL;
    if ( ppv )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&ppv);
  }
  else
  {
    v8 = ppv;
    ppv = 0LL;
    *a1 = v8;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)v10);
  return a1;
}
