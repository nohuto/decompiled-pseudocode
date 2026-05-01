/*
 * XREFs of ??1?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@QE$AAA@XZ @ 0x18035FC98
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAXXZ @ 0x18035F020 (-_Dispose_@-QIDisposable@Platform@@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAA.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAXXZ @ 0x18035F058 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI_ea_18035F058.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJXZ @ 0x1803621D8 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@VXmlns_ea_1803621D8.c)
 * Callees:
 *     CoTaskMemFree_0 @ 0x180091357 (CoTaskMemFree_0.c)
 *     WindowsDeleteString_0 @ 0x180091436 (WindowsDeleteString_0.c)
 */

void __fastcall Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::~WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
        __int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rbp
  HSTRING *v4; // rsi

  if ( !*(_BYTE *)(a1 + 44) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
    {
      if ( *(_DWORD *)(a1 + 40) )
      {
        v3 = *(unsigned int *)(a1 + 40);
        v4 = *(HSTRING **)(a1 + 48);
        do
        {
          WindowsDeleteString_0(v4[1]);
          WindowsDeleteString_0(*v4);
          v4 += 2;
          --v3;
        }
        while ( v3 );
      }
      CoTaskMemFree_0(v2);
    }
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
}
