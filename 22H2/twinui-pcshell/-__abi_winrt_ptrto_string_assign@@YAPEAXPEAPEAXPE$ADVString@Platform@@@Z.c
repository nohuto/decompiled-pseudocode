/*
 * XREFs of ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x18036355C
 * Callers:
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180360214 (-AllocateAndCopyElements@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@.c)
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x180360944 (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_180360944.c)
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x18038A4D0 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x180091416 (WindowsDeleteString_0.c)
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x18035B630 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

HSTRING __fastcall __abi_winrt_ptrto_string_assign(HSTRING *a1, Platform::Details *a2, HSTRING *a3)
{
  HSTRING result; // rax
  HSTRING v6; // [rsp+30h] [rbp+8h] BYREF

  result = *a1;
  if ( *a1 != (HSTRING)a2 )
  {
    if ( result )
      WindowsDeleteString_0(*a1);
    *a1 = 0LL;
    result = 0LL;
    if ( a2 )
    {
      Platform::Details::DuplicateString(a2, &v6, a3);
      result = v6;
      *a1 = v6;
    }
  }
  return result;
}
