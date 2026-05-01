/*
 * XREFs of ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJXZ @ 0x1803621D8
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WBI@E$AAAJXZ @ 0x18016A900 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@VXmlnsDefinition@Ma.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@WCI@E$AAAJXZ @ 0x18016A910 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@VXmlns_ea_18016A910.c)
 * Callees:
 *     ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18035FC98 (--1-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ.c)
 */

__int64 __fastcall ___abi_Platform_IDisposable____abi__Dispose___QIDisposable_Platform____Array_VXmlnsDefinition_Markup_Xaml_UI_Windows___00_2_UE_AAAJXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        *(_BYTE *)(v1 + 72) = 1;
        Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::~WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(v1);
      }
    }
  }
  return 0LL;
}
