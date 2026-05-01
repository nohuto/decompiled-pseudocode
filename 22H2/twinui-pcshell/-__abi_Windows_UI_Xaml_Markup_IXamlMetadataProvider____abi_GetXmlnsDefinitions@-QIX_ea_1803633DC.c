/*
 * XREFs of ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAIPEAPEAVXmlnsDefinition@2345@@Z @ 0x1803633DC
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJPEAIPEAPEAVXmlnsDefinition@2345@@Z @ 0x18016AC50 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@-QIXamlMetadataPr.c)
 * Callees:
 *     ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x18035EFE4 (--$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform.c)
 *     ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x180360ADC (-GetXmlnsDefinitions@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHo_ea_180360ADC.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJPEAIPEAPEAVXmlnsDefinition_2345__Z(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 XmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAP_01E_AAV__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__XZ; // rax

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  *a2 = 0;
  *a3 = 0LL;
  try
  {
    XmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAP_01E_AAV__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__XZ = _GetXmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAP_01E_AAV__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__XZ(a1);
    Platform::Details::__abi_array_copy_to_and_release<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
      XmlnsDefinitions__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAP_01E_AAV__Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_Platform__XZ,
      a3,
      a2);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
