/*
 * XREFs of ?s_TryCopyLocalizedName@PinManager@implementation@Shell@Internal@Windows@winrt@@SAXPEBG0@Z @ 0x180146280
 * Callers:
 *     ?CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$pair@V?$unique_ptr@U_ITEMIDLIST@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEFBU_ITEMIDLIST@@@Z @ 0x180138020 (-CopyShortcut@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$pair@V-$unique_pt.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::s_TryCopyLocalizedName(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2)
{
  HRESULT v3; // eax
  int pidsRes[4]; // [rsp+20h] [rbp-238h] BYREF
  WCHAR pszResModule[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  if ( SHGetLocalizedName(a1, pszResModule, 0x104u, pidsRes) >= 0 )
  {
    v3 = SHSetLocalizedName(a2, pszResModule, pidsRes[0]);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x361,
        (__int64)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v3);
  }
}
