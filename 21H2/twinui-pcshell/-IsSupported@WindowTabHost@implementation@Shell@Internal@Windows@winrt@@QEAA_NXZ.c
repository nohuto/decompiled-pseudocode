/*
 * XREFs of ?IsSupported@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x1800EB76C
 * Callers:
 *     ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800EB710 (-IsSupported@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabEx.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x1800E7E48 (--0hresult_not_implemented@winrt@@QEAA@XZ.c)
 */

void __fastcall __noreturn winrt::Windows::Internal::Shell::implementation::WindowTabHost::IsSupported(
        winrt::Windows::Internal::Shell::implementation::WindowTabHost *this)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  winrt::hresult_not_implemented::hresult_not_implemented((winrt::hresult_not_implemented *)pExceptionObject);
  throw (winrt::hresult_not_implemented *)pExceptionObject;
}
