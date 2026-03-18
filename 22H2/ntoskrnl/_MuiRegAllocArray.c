/*
 * XREFs of _MuiRegAllocArray @ 0x1403A0DCC
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x1408465DC (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408469D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140846D08 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A746B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A74E48 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall MuiRegAllocArray(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rcx

  result = 0LL;
  v3 = 2LL * a2;
  if ( v3 <= 0xFFFFFFFF )
  {
    if ( (_DWORD)v3 )
      return ExAllocatePool2(256LL, (unsigned int)v3, 1920232557LL);
  }
  return result;
}
