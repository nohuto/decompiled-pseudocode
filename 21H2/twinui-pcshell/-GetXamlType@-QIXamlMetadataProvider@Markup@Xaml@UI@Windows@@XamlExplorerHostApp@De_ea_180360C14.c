/*
 * XREFs of ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x180360C14
 * Callers:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18016A380 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_18016A380.c)
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1803637AC (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@-QIXaml_ea_1803637AC.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x180091436 (WindowsDeleteString_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x180360D34 (-GetXamlType@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAPE$AAUIXamlType@2345@VTypeName@.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x18036382C (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_VTypeName_Interop_345__Z(
        __int64 a1,
        HSTRING *a2)
{
  __int128 v4; // xmm0
  __int64 XamlType; // rbx
  __int64 v6; // rsi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  __abi_winrt_ptrto_string_assign(&v8, *a2);
  DWORD2(v8) = *((_DWORD *)a2 + 2);
  v4 = v8;
  *(_OWORD *)a2 = v8;
  v8 = v4;
  XamlType = Windows::UI::Xaml::Markup::IXamlMetadataProvider::GetXamlType(*(_QWORD *)(a1 + 96), &v8);
  v6 = __abi_winrt_ptr_ctor(XamlType);
  if ( XamlType )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)XamlType + 16LL))(XamlType);
  WindowsDeleteString_0(*a2);
  return v6;
}
