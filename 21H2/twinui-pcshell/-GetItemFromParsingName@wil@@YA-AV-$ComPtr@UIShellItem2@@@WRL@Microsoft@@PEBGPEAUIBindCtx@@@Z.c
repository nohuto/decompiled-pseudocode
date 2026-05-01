/*
 * XREFs of ?GetItemFromParsingName@wil@@YA?AV?$ComPtr@UIShellItem2@@@WRL@Microsoft@@PEBGPEAUIBindCtx@@@Z @ 0x18013976C
 * Callers:
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x180143C20 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall wil::GetItemFromParsingName(void **ppv, PCWSTR pszPath)
{
  HRESULT v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *ppv = 0LL;
  *ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  v4 = SHCreateItemFromParsingName(pszPath, 0LL, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, ppv);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      18LL,
      (__int64)"OneCoreUap\\Internal\\Shell\\Inc\\private\\wil\\shellitemhelpers.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return ppv;
}
