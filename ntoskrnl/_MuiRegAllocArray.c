/*
 * XREFs of _MuiRegAllocArray @ 0x14039C31C
 * Callers:
 *     RtlpLoadInstallLanguageFallback @ 0x140843474 (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140843870 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140843BA8 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140A719B4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140A72148 (RtlpMuiRegLangInfoMatchesSpec.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
