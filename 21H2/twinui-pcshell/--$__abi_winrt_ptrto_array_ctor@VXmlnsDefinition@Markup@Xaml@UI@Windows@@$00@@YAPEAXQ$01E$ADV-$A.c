/*
 * XREFs of ??$__abi_winrt_ptrto_array_ctor@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@@YAPEAXQ$01E$ADV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@@Z @ 0x18035F2F0
 * Callers:
 *     ?GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x180360DAC (-GetXmlnsDefinitions@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHo_ea_180360DAC.c)
 *     ?GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@XZ @ 0x180360E08 (-GetXmlnsDefinitions@IXamlMetadataProvider@Markup@Xaml@UI@Windows@@UE$AAAP$01E$AAV-$Array@VXmlns.c)
 *     ?get@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@Value@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAP$01E$AAV42@XZ @ 0x180363BE0 (-get@-Q-$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@Value@-$Array@VXmlnsDefin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18035F654 (--0-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@PEAVXmlnsDefinition@Mar.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall __abi_winrt_ptrto_array_ctor<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(_BYTE *a1)
{
  _BYTE *v1; // rbx
  void *v3; // [rsp+30h] [rbp+8h]

  v1 = a1;
  if ( a1 )
  {
    if ( a1[76] )
    {
      v3 = Platform::Details::Heap::Allocate(0x58uLL, 0x88uLL);
      return Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
               v3,
               *((_QWORD *)v1 + 10),
               *((unsigned int *)v1 + 18));
    }
    else
    {
      (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 8LL))(a1);
    }
  }
  return (__int64)v1;
}
