/*
 * XREFs of ?AllocateAndCopyElements@?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@KAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEBV34567@I@Z @ 0x180360214
 * Callers:
 *     ??0?$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@I@Z @ 0x18035F584 (--0-$WriteOnlyArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@IE$AAA@PEAVXmlnsDefin.c)
 *     ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x1803602D8 (-CopyToOrDetach@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXml.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     __Platform_CoTaskMemAlloc @ 0x180091343 (__Platform_CoTaskMemAlloc.c)
 *     ?__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z @ 0x18036355C (-__abi_winrt_ptrto_string_assign@@YAPEAXPEAPEAXPE$ADVString@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall Platform::WriteOnlyArray<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::AllocateAndCopyElements(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v2; // rdi
  char *v4; // rbx
  __int64 v5; // r14
  char *v6; // rdi

  v2 = a2;
  if ( !a2 )
    return 0LL;
  if ( a2 > 0xFFFFFFF )
  {
    __abi_WinRTraiseInvalidCastException();
    __debugbreak();
  }
  v5 = v2;
  v4 = (char *)_Platform_CoTaskMemAlloc(16 * v2);
  if ( !v4 )
  {
    __abi_WinRTraiseOutOfMemoryException();
    __debugbreak();
  }
  memset_0(v4, 0, 16 * v2);
  if ( (_DWORD)v2 )
  {
    v6 = v4;
    do
    {
      __abi_winrt_ptrto_string_assign(v6, *a1);
      __abi_winrt_ptrto_string_assign(v6 + 8, a1[1]);
      v6 += 16;
      a1 += 2;
      --v5;
    }
    while ( v5 );
  }
  return v4;
}
