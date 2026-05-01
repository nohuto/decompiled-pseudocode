/*
 * XREFs of WINRT_WindowsCreateString @ 0x1800914F5
 * Callers:
 *     ?IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z @ 0x18004D258 (-IsCortanaApp@DefaultLaunchPositionOverride@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z @ 0x1800945F4 (-__windowsCreateString@__winRT@@YAJPEB_WHPEAPEAUHSTRING__@@@Z.c)
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1802568F4 (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18025693C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEBGI@Z @ 0x180268148 (-trim_hresult_message@impl@winrt@@YA-AUhstring@2@QEBGI@Z.c)
 *     ??0String@Platform@@QE$AAA@PEB_W@Z @ 0x18035B5DC (--0String@Platform@@QE$AAA@PEB_W@Z.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804D53BC (-get@-$runtime_class_name@U-$IAsyncOperation@I@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhstr.c)
 *     ?get@?$runtime_class_name@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804D540C (-get@-$runtime_class_name@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@SA-AUhst.c)
 *     ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1804D545C (-get@-$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_WindowsCreateString(PCNZWCH sourceString, UINT32 length, HSTRING *string)
{
  return WindowsCreateString(sourceString, length, string);
}
