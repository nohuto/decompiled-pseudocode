/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x140847160
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x1408470F0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x1403A0F50 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     ZwQueryInstallUILanguage @ 0x14041D1E0 (ZwQueryInstallUILanguage.c)
 *     RtlpLoadInstallLanguageFallback @ 0x1408465DC (RtlpLoadInstallLanguageFallback.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1408469D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegCreateLanguages @ 0x14084723C (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x14084744C (RtlpMuiRegCreateStringPool.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140847948 (RtlpMuiRegFreeRegistryInfo.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1, __int64 a2)
{
  int InstallUILanguage; // edi
  __int64 Languages; // rax
  __int64 StringPool; // rax
  __int64 result; // rax

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( PsUILanguageComitted )
  {
    InstallUILanguage = ZwQueryInstallUILanguage(a1 + 4, a2);
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_10;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 1023LL);
  Languages = RtlpMuiRegCreateLanguages();
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_10:
    RtlpMuiRegFreeRegistryInfo(a1, 1023LL);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(0xFFFFFFFFLL, 0xFFFFFFFFLL);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_10;
  *(_DWORD *)a1 |= 2u;
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1);
  if ( InstallUILanguage < 0 )
    goto LABEL_10;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_10;
  return result;
}
